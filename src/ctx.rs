use std::io::Cursor;

use crate::{
    error::Error,
    insn::{Instruction, InstructionFormat},
    PhysAddress, VirtAddress,
};

pub struct Ctx<'d> {
    data: &'d [u8],
    cursor: Cursor<&'d [u8]>,

    pub vip: PhysAddress,
}

impl<'d> Ctx<'d> {
    pub fn new(data: &'d [u8]) -> Self {
        Ctx {
            data,
            vip: 0.into(),
            cursor: Cursor::new(data),
        }
    }

    pub fn new_with_vip(data: &'d [u8], vip: u32) -> Self {
        let mut ctx = Ctx::new(data);
        ctx.vip = vip.into();
        ctx
    }

    pub fn data(&self) -> &'d [u8] {
        self.data
    }

    pub fn slice(&self, start: PhysAddress, length: usize) -> &'d [u8] {
        &self.data[start.unwrap() as usize..start.unwrap() as usize + length]
    }

    pub fn translate(&self, addr: VirtAddress) -> PhysAddress {
        addr.decode(self.data.len() as u32)
    }

    pub fn read_insn_at(
        &mut self,
        addr: PhysAddress,
        format: &InstructionFormat,
    ) -> Result<Instruction, Error> {
        let offset: u32 = addr.into();
        let mut insn = Instruction::default();

        self.cursor.set_position(offset as u64);
        insn.read(&mut self.cursor, format)?;
        self.cursor.set_position(self.vip.unwrap() as u64);
        Ok(insn)
    }

    pub fn read_insn(&mut self, format: &InstructionFormat) -> Result<Instruction, Error> {
        let mut insn = Instruction::default();
        insn.read(&mut self.cursor, format)?;
        Ok(insn)
    }

    pub fn read_u16_at(&self, addr: PhysAddress) -> u16 {
        let offset: usize = addr.unwrap() as usize;
        u16::from_le_bytes(self.data[offset..offset + 2].try_into().unwrap())
    }

    pub fn read_addr_at(&self, addr: PhysAddress) -> VirtAddress {
        let offset: usize = addr.unwrap() as usize;
        let raw_addr = u32::from_le_bytes(self.data[offset..offset + 4].try_into().unwrap());
        raw_addr.into()
    }

    pub fn read_u16(&self) -> u16 {
        self.read_u16_at(self.vip)
    }

    pub fn read_addr(&self) -> VirtAddress {
        self.read_addr_at(self.vip)
    }

    pub fn advance(&mut self, count: u32) {
        self.vip = (self.vip.unwrap() + count).into();
    }

    pub fn regs_to_vars(&mut self, regs: &[VirtAddress]) -> Vec<PhysAddress> {
        regs.iter().map(|reg| self.translate(*reg)).collect()
    }
}
