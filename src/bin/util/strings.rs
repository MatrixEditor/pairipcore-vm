use std::collections::{HashMap, HashSet};

use pairipcore::{ctx::Ctx, error::Error, PhysAddress};

pub fn get_string_locs<'d>(
    ctx: &mut Ctx<'d>,
    key: &[u8],
    mut storage: Option<&mut HashMap<PhysAddress, String>>,
    start: Option<u32>,
    step: Option<u32>,
) -> Result<HashSet<(PhysAddress, u32)>, Error> {
    // prepare context
    ctx.vip = PhysAddress::new(start.unwrap_or(0x08));

    // traverse vmcode: find all strings and don't care about overlapping positions
    let mut positions: HashSet<(PhysAddress, u32)> = HashSet::with_capacity(20);

    let key_len = u16::from_le_bytes(key[0..2].try_into().unwrap()) as u32;
    let upper_bound = (ctx.data().len() - 4) as u32;
    let step = step.unwrap_or(1);
    while ctx.vip.unwrap() < upper_bound {
        // only data address is relevant here
        let data_addr = ctx.translate(ctx.read_addr());
        ctx.advance(step);
        if data_addr.unwrap() + 2 >= upper_bound {
            // in some cases, the data variable may point to the end of the file
            continue;
        }

        let data_len = ctx.read_u16_at(data_addr) as u32;
        let length = (key_len ^ data_len) + 2;
        if length > 1000 || length < 3 || (data_addr.unwrap() + length) >= upper_bound {
            // Length must be at least 3 bytes (we will filter large strings out)
            continue;
        }

        let data = ctx.slice(data_addr, length as usize);
        match decode_str(data, key) {
            Some(s) => {
                if s.len() > 2 && s.chars().all(|c| c.is_ascii_graphic()) {
                    positions.insert((data_addr, length));
                    storage.as_deref_mut().unwrap().insert(data_addr, s);
                }
            }
            _ => {}
        }
    }
    Ok(positions)
}

pub fn decode_str(data: &[u8], key: &[u8]) -> Option<String> {
    let buffer = data
        .iter()
        .skip(2)
        .enumerate()
        .map(|(i, x)| key[(i + 2) % 0xFF] ^ *x)
        .collect();

    String::from_utf8(buffer).ok()
}
