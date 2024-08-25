# type: ignore

# -----------------------------------------------------------------------------
# Typing
# -----------------------------------------------------------------------------
# An address is basically an offset within the bytecode stream
type addr_t = int
# whereas a pointer refers to an allocated object
type ptr_t = int
# explicit opcode type
type opcode_t = int

type vector_t = list
