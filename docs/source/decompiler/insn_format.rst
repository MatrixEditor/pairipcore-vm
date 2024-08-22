.. _insn_format:

Instruction Format
==================

.. margin:: Struct Names

  The types are named according to their corresponding opcodes. For example, the type
  :code:`insn_0x21_t` corresponds to opcode :code:`0x21`.

Most of the structures for `vm_dispatch_0` and `vm_dispatch_2` have been recreated based on
their decompiled source code. These structures can be found in :code:`_vm_ops.h`.
The type definitions might include fields that are not used within the implementation but
are present within the instruction format.

The :class:`InsnFormat` class represents an instruction format and is responsible for
storing the offset positions of all variables.

.. autoclass:: pairipcore.insn.InsnFormat
  :no-index:
  :special-members: __info_begin_, __stack_, __extra_, __store_
  :no-undoc-members:
  :exclude-members: __init__, __new__

These four attributes can be used to represent a generic instruction format. The offset
positions of all variables and can be inferred using the class attributes shown above.

Based on initial analysis, several instruction formats have been identified. Each format
is assigned a unique ID based on its behavior. The naming convention for these formats
follows a simple scheme where an ID is used to describe the format's function and its
structure.

Format IDs
**********

Format IDs are used to describe the structure of each instruction. They generally consist
of three characters: two digits followed by a letter.

- The first digit specifies the number of variables taken from the compiled stack.
- The second digit indicates the number of additional variables that need to be loaded.
- The final letter denotes which variable is used to store the result of the operation, if applicable.

For example, the format :code:`"20a"` means the instruction reads two variables from the
stack, does not load any additional variables, and stores the result in variable :code:`'a'`.
If the letter is :code:`"z"`, it indicates that no data is being stored.

.. note::

  Note there is one additional special letter :code:`'x'` which indicates that the
  storage variable has not yet been identified.

The following format IDs have been identified so far:

.. list-table:: Format ID Mapping
  :widths: 15 30
  :header-rows: 1

  * - Format ID
    - Opcodes
  * - :code:`"13x"`
    - 0x00, 0x4c
  * - :code:`"21x"`
    - 0x05, 0x34, 0x35, 0x3b, 0x4b, 0x4d, 0x60, 0x66, 0x73, 0x8e
  * - :code:`"30x"`
    - 0x06, 0x0e, 0x47, 0x48, 0x49, 0x4f, 0x50, 0x5f, 0x64, 0x65, 0x6b, 0x74, 0x7b, 0x7e
  * - :code:`"02b"`
    - 0x07, 0x12
  * - :code:`"11x"`
    - 0x08, 0x18, 0x1e, 0x26, 0x3a, 0x44, 0x68, 0x6d, 0x83, 0x8d, 0x96
  * - :code:`"03x"`
    - 0x09, 0x0d, 0x42, 0x54, 0x5a, 0x71, 0x72, 0x87, 0x93
  * - :code:`"32x"`
    - 0x0C, 0x9a
  * - :code:`"40x"`
    - 0x0f, 0x19, 0x30, 0x38, 0x5e
  * - :code:`"12b"`
    - 0x10, 0x2c
  * - :code:`"12x"`
    - 0x1C, 0x2d, 0x2f, 0x43, 0x5c, 0x77, 0x89, 0x8b, 0x8c, 0x95
  * - :code:`"20x"`
    - 0x11, 0x1a, 0x57, 0x5b, 0x76, 0x7a, 0x82, 0x85, 0x98
  * - :code:`"11a"`
    - 0x13
  * - :code:`"20a"`
    - 0x15, 0x2E
  * - :code:`"03a"`
    - 0x1B
  * - :code:`"03b"`
    - 0x1F
  * - :code:`"22x"`
    - 0x21, 0x70, 0x84
  * - :code:`"30c"`
    - 0x25
  * - :code:`"22d"`
    - 0x28
  * - :code:`"04a"`
    - 0x2A
  * - :code:`"10x"`
    - 0x33, 0x6c
  * - :code:`"23x"`
    - 0x37
  * - :code:`"41x"`
    - 0x3d, 0x59
  * - :code:`"01a"`
    - 0x41, 0x58
  * - :code:`"01x"`
    - 0x46
  * - :code:`"02x"`
    - 0x4a, 0x6e
  * - :code:`"00z"`
    - 0x75


Opcode IDs
**********

Opcode IDs follow a specific naming convention, similar to format IDs. Each opcode ID
consists of:

- The instruction ID: A descriptive name that clearly identifies the type of instruction.
- Optional type specifications: These can include details like data type (e.g., UInt, Byte).
- The instruction format ID: The format ID associated with the opcode, which describes the structure of the instruction.

For example, the opcode :code:`0x07` performs an unsigned integer assignment (right-to-left).
Its format ID is :code:`"02b"`, leading to the opcode ID "Assign_UInt_02b".

You can find all available opcode IDs and their corresponding format IDs in the file
:code:`insn.py`.
