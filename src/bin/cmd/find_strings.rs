use std::{collections::HashMap, fs, io::Write};

use colored::Colorize;
use itertools::Itertools;
use pairipcore::{ctx::Ctx, error::Error};

use crate::{util, FindStringsOptions};

pub fn main(options: &FindStringsOptions) -> Result<(), Error> {
    if let Some(vmcode_file) = &options.input.vmcode_file {
        let data = std::fs::read(vmcode_file).unwrap();
        let mut ctx = Ctx::new(&data);
        let fmt_ids = util::get_format_ids_or_default(options.fmt_ids.as_ref());
        let key;
        if let Some(key_file) = &options.key {
            if fs::exists(key_file)? {
                key = fs::read(key_file)?;
            } else {
                key = hex::decode(key_file).unwrap();
            }
        } else {
            println!(
                " {}",
                "WARNING: key not specified, trying to resolve dynamically...".yellow()
            );
            if let Ok(key_addr) = util::key::find_key_loc(&mut ctx, &fmt_ids) {
                key = ctx.slice(key_addr, 0xFF).to_vec();
            } else {
                println!(
                    " {}",
                    "UNIVERSE BROKE, key not specified and not resolved using given formatids"
                        .red()
                );
                return Ok(());
            }
        }

        iter_strings(&mut ctx, &key, options)?;
    }
    Ok(())
}

fn iter_strings<'d>(
    ctx: &mut Ctx<'d>,
    key: &[u8],
    options: &FindStringsOptions,
) -> Result<(), Error> {
    // prepare context
    let mut strings = HashMap::new();
    let positions = util::strings::get_string_locs(
        ctx,
        key,
        Some(&mut strings),
        options.start.clone(),
        options.step.clone(),
    )?;
    if let Some(out_file) = &options.output {
        let f = std::fs::File::create(out_file)?;
        let mut w = std::io::BufWriter::new(f);
        for addr in strings.keys().sorted() {
            let s = &strings[&addr];
            w.write(s.as_bytes())?;
        }
        w.flush()?
    } else {
        for (addr, _) in positions.iter().sorted() {
            let s = &strings[&addr];
            if options.show_addr {
                println!("{:#08x}: {}", addr.unwrap(), s);
            } else {
                println!("{}", s);
            }
        }
    }

    Ok(())
}
