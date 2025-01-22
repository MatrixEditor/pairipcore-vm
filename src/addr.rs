#[repr(transparent)]
#[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct VirtAddress(u32);

#[repr(transparent)]
#[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct PhysAddress(u32);

impl VirtAddress {
    #[inline]
    pub const fn new(addr: u32) -> Self {
        VirtAddress(addr)
    }

    pub fn decode(self, upper_bound: u32) -> PhysAddress {
        return ((self.0 ^ !upper_bound) % upper_bound).into();
    }
}

impl From<u32> for VirtAddress {
    fn from(addr: u32) -> Self {
        VirtAddress(addr)
    }
}

impl Into<u32> for PhysAddress {
    fn into(self) -> u32 {
        self.0
    }
}

impl From<u32> for PhysAddress {
    fn from(addr: u32) -> Self {
        PhysAddress(addr)
    }
}

impl Into<u32> for VirtAddress {
    fn into(self) -> u32 {
        self.0
    }
}

impl PhysAddress {
    pub const fn unwrap(&self) -> u32 {
        self.0
    }

    pub const fn new(addr: u32) -> Self {
        PhysAddress(addr)
    }
}
impl AsRef<u32> for PhysAddress {
    fn as_ref(&self) -> &u32 {
        &self.0
    }
}
