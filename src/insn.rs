use std::fmt::Display;

use byteorder::{LittleEndian, ReadBytesExt};

use crate::{error::Error, VirtAddress};

pub struct InstructionFormat {
    pub load_reg: u32,
    pub extra_reg: u32,
    pub store_reg: Option<u8>,
}

impl InstructionFormat {
    pub const fn new(load_reg: u32, extra_reg: u32, store_reg: Option<u8>) -> Self {
        InstructionFormat {
            load_reg,
            extra_reg,
            store_reg,
        }
    }

    pub const fn parse(format: &str) -> InstructionFormat {
        if format.len() != 3 {
            panic!("Invalid format - must be 3 characters long");
        }

        let chars = format.as_bytes();
        InstructionFormat {
            load_reg: chars[0] as u32,
            extra_reg: chars[1] as u32,
            store_reg: if chars[2] == b'x' {
                None
            } else {
                Some(chars[2] - b'a')
            },
        }
    }

    pub fn var_count(&self) -> u32 {
        self.load_reg + self.extra_reg
    }

    pub fn len(&self) -> u32 {
        0x1A + self.var_count() * 4
    }
}

impl Display for InstructionFormat {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(
            f,
            "{}{}{}",
            self.load_reg,
            self.extra_reg,
            char::from_u32((self.store_reg.unwrap_or(23) + b'a') as u32).unwrap()
        )
    }
}

pub struct Instruction {
    pub next_addr: VirtAddress,
    pub fallback_addr: VirtAddress,
    pub hash: u64,
    pub hash_addr: VirtAddress,
    pub hash_len: u16,
    pub hash_key_addr: VirtAddress,

    reg: Vec<VirtAddress>,
}

impl Default for Instruction {
    fn default() -> Self {
        Instruction {
            next_addr: VirtAddress::new(0),
            fallback_addr: VirtAddress::new(0),
            hash: 0,
            hash_addr: VirtAddress::new(0),
            hash_len: 0,
            hash_key_addr: VirtAddress::new(0),
            reg: Vec::new(),
        }
    }
}

impl Instruction {
    pub fn read<R>(&mut self, reader: &mut R, format: &InstructionFormat) -> Result<(), Error>
    where
        R: std::io::Read,
    {
        // typedef struct {
        //     addr_t a;                 // +0x0
        //     addr_t b;                 // +0x4
        //     insn_info_t info;         // +0x8
        //     addr_t c;                 // +0x22
        // } insn_0x05_t;

        for _ in 0..format.load_reg {
            self.reg
                .push(VirtAddress::new(reader.read_u32::<LittleEndian>()?));
        }

        // typedef struct {
        //     addr_t aXorValue;         // +0x0
        //     ulong  ulHash;            // +0x4
        //     addr_t aHashDataAddr;     // +0xc
        //     short  aHashDataLen;      // +0x10
        //     addr_t aNext;             // +0x12
        //     addr_t aFallback;         // +0x16
        // } insn_info_t;
        self.hash_key_addr = VirtAddress::new(reader.read_u32::<LittleEndian>()?);
        self.hash = reader.read_u64::<LittleEndian>()?;
        self.hash_addr = VirtAddress::new(reader.read_u32::<LittleEndian>()?);
        self.hash_len = reader.read_u16::<LittleEndian>()?;
        self.next_addr = VirtAddress::new(reader.read_u32::<LittleEndian>()?);
        self.fallback_addr = VirtAddress::new(reader.read_u32::<LittleEndian>()?);

        for _ in 0..format.extra_reg {
            self.reg
                .push(VirtAddress::new(reader.read_u32::<LittleEndian>()?));
        }
        Ok(())
    }

    pub fn get_reg(&self, idx: u32) -> VirtAddress {
        return self.reg[idx as usize];
    }

    pub fn len(&self) -> usize {
        0x1A + self.reg.len() * 4
    }

    pub fn regs(&self) -> &[VirtAddress] {
        &self.reg
    }
}
