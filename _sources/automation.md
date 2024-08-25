# Automatic Analysis

Building on previous research, we can identify consistent features present in every
analysis, allowing us to create an automated tool for decoding all instructions.
These key features include:

- Three Dispatcher Functions:
  These include two switch statements and one highly obfuscated function, all of which are crucial for identifying opcode handling.
- Data Reading Pattern:
  Before any instruction handler executes its logic, all necessary data is read first. This
  means that by identifying where specific fields, such as the hash value or hash data length,
  are located, we can recreate the instruction format ID. For example, if the hash value is
  read from offset `0x08`, we can infer that one variable is taken from the stack (since `4 + 4 = 0x08`).
  The full structure of the instruction format is outlined in the previous section.
- Entry Point and Opcode Encoding: These differ across versions, adding another layer of
  complexity to the analysis.

Using these characteristics, we can attempt to create a system capable of decoding
instructions across different versions of pairipcore. The first and most crucial
abstraction involves the opcode and entry point encoding. The Python package for
this project defines two function types specifically for these purposes:

```{code-block} python
OpcodeDecoderFn     = Callable[[int], opcode_t] # fn(int) -> opcode_t
EntryPointDecoderFn = Callable[[VM], addr_t]    # fn(VM) -> addr_t
```

These functions must be provided when creating the interpreter for the current
instruction set:

```{code-block} python
from pairipcore import VM, decode_opcode_v0, decode_entry_point_v0

code: bytes = ...
vm = VM(code, decode_opcode_v0, decode_entry_point_v0)
```

It's important to note that there won't be an all-in-one Python script available for
download at the end of this chapter. The results discussed here are still in development
and are not yet ready for public release.

## Collecting Opcode Handlers

Since most of the opcode handlers are implemented via switch statements, we can leverage
Ghidra's API to enumerate them. In Ghidra, all children of a switch statement are
represented as symbols, so we can directly identify the code address of each handler function.

```{code-block} python
:caption: Using Ghidra's API to collect all opcode handlers

_defaul_cases: set[int] = ...
_case_addresses: set[int] = ...
for case_symbol_id in switch_cases:
  # get symbol from Ghidra's SymbolTable
  symbol = symbol_table.getSymbol(case_symbol_id)

  # we also know that there are default cases in both switch statements,
  # so we have to keep track of all cases to distinguish them. Default
  # cases will be present more than one time in _case_addresses
  addr = symbol.getAddress()
  addr__int = Address_ToInt(addr)
  if addr__int in _case_addresses:
    _default_cases.append(addr__int)

  # opcode number can be extracted from symbol name
  opcode = int(symbol.getName().replace("caseD_", ""), 16)
```

````{margin} **Resolving Dispatcher Functions**
Again, Ghidra's API lets us resolve any function by providing an address within that function:
```{code-block} python
func = flatapi.getFunctionContaining(address)
```
````

After collecting the addresses of all opcode handlers, we can deduce that the first switch
statement corresponds to the first dispatcher function, referred to as _vm_dispatch_0_, and
the second switch statement is associated with _vm_dispatch_2_.

## Re-creating Instruction Formats

To accurately reverse-engineer instruction formats, we can leverage the repetitive structure
found in each instruction handler. Typically, these handlers perform a sequence of operations,
such as:

1. Loading the VMContext into a register.
2. Loading the program counter (`pc`) into a register.
3. Reading all instructino variables

Instead of manually tracking every access to `vm_context->vmCode`, we focus on inspecting
each integer addition to the `pc`. These additions often contain the offsets that reveal
how the instruction reads from the compiled stack or memory.

To gather all the necessary offset positions within instructions, we can utilize Ghidra's
Pcode representation. Pcode is an intermediate representation that can help in understanding
the low-level operations being performed. By analyzing the Pcode for each instruction handler,
we can extract the offsets involved in operations such as loading and storing variables.

```{code-block} python
for op in decomp_result.getHighFunction().getPcodeOps():
  mnemonic = op.getMnemonic()
  match mnemonic:
    case "BRANCH":
      # Stop after first brach expression as we know there won't be any variables
      # read from the stream afterwards
      break
    case "INT_ADD":
      # output must be a register and inputs[1] must be the offset
      inputs = op.getInputs()
      output = op.getOutput()
      if inputs[1].isConstant() and output.isRegister():
        offset = inputs[1].getAddress().getOffset()
        # we can infer the offset position of the instruction info as
        # soon as we detect the hash value
        if offset - _prev_offset == 0x08:
          _info_begin = _prev_offset

        _prev_offset = offset
        struct_offsets.append(offset)
```

Once we have identified the offsets, we can calculate:

- The number of variables taken from the compiled stack.
- The number of extra variables loaded by the instruction.

Unfortunately, certain details, like the exact store variable or the specific operation
being performed, may remain unknown without deeper analysis or additional context. This
limitation means that while we can identify many aspects of the instruction format, some
elements might still require further investigation or heuristics to determine accurately.

```{code-block} python
stack_vars = len(list(filter(lambda x: x < _info_begin, struct_offsets)))
extra_vars = len(list(filter(lambda x: x >= _info_begin + 26, struct_offsets)))

# Use 'x' to mark the format id with an unknown result variable
format_id = f"{stack_vars}{extra_vars}x"
```

By utilizing the techniques discussed so far, we can successfully collect and re-create
approximately 90 out of the 159 (`0x9F` possible) opcodes. However, there remains a
challenge: the remaining handlers are stored within a function called _vm_dispatch_1_,
which is heavily obfuscated.

```{figure} _static/ida_vm_dispatch_1.png
Function graph of *vm_dispatch_1* using IDA (**Free** of course).
```

### How do we deal with this?

The obfuscation present in _vm_dispatch_1_ significantly complicates analysis. This function
likely employs various control flow flattening and data encoding techniques, making it
difficult to understand and reverse-engineer directly. To tackle this:

## Following States until tomorrow

Several recent articles have explored methods for analyzing and de-obfuscating
functions that employ a dispatcher pattern, similar to what is used here. Notable
examples include works by [Quarkslab](https://blog.quarkslab.com/deobfuscation-recovering-an-ollvm-protected-program.html),
[MODeflattener](https://mrt4ntr4.github.io/MODeflattener/), and many more.

After experimenting with [https://github.com/cea-sec/miasm](https://github.com/cea-sec/miasm)
for symbolic execution to trace the state machine within the function, it became
apparent that the function was too large to be quickly analyzed this way.

```{warning}
The following section discusses a workaround that is not entirely stable and
should be considered a somewhat crude method for retrieving some handlers.
```

nstead of relying on symbolic execution to trace the states within the function,
the quickest workaround was to use [https://github.com/tree-sitter/tree-sitter](https://github.com/tree-sitter/tree-sitter)
alongside the function's source code (which spans roughly 16,000 lines each time).[^mn9].

[^mn9]: {-} This approach is not bulletproof; it is merely intended to identify some of the missing handlers.

By leveraging tree-sitter's querying capabilities, we can search for all state
assignments and collect potential state variables. We know that these assignments
appear as simple if-statements in Ghidra, which allows us to locate them efficiently:

```{code-block} python
tsq_state_assignment = C.query("""\
(assignment_expression
    left: (identifier)
    right: (number_literal)
) @assign
""")

for _, match_data in tsq_state_assignment.matches(body):
  node = match_data["assign"]
  # the first state:
  condition_state_1 = node.child_by_field_name("right").text

  # We know the next (named) node must be an if-statement according
  # to Ghidra's C representation.
  if_statement = node.parent.next_named_sibling
  # --- additional checks excluded here ---

  condition = if_statement.child_by_field_name("condition")
  # The condition contains the opcode we are loooking for and the
  # operation (one of '!=' and '<')
  opcode = ...
  operation = ...
  # the 'consequence' of the if-statement includes the other state
  # variable assignment
```

Using the scheme outlined earlier, we can extract opcodes and their potential
handler state variables into a mapping between opcode and state variable. This
mapping can then be used to identify the if-statement that corresponds to each
opcode's state variable:

```{code-block} python
state__if_query = C.query(f"""\
(
    (if_statement
        condition: (parenthesized_expression
            (binary_expression
                left: (identifier)
                right: (number_literal) @state-var))) @if
    (#eq? @state-var "{potential_state_var}")
)
""")
```

If the matched if-statement includes an assignment in the following line,
we can naively assume that a handler is located within the body of that
if-statement. To accurately detect the offsets of each instruction format,
we focus on the constant expressions found in each handler, particularly
the pointer dereferences that Ghidra automatically generates.

```{code-block} python
tsq_insn_field = C.query("""\
(assignment_expression
left: (identifier)
right: (pointer_expression)
) @pc
""")

offset = 0
for _, data in tsq_insn_field.matches(if_statement_body):
  # The linw will take the following form:
  #   <variable> = *(<type> *)(...);
  # We only need the type to calculate the offset position
  line = data["pc"].text.decode().strip()
  match extract_type(line):
    case "uint" | "int" | "undefined4":
      struct_offsets.append(offset)
      offset += 4
    case "ushort" | "short" | "undefined2":
      struct_offsets.append(offset)
      offset += 4
      # Start can be calculated now
      _info_begin = offset - 0x0C
    case _:
      # all other variables must be treated as "long" (hash_value)
      _struct_offsets.append(_offset)
      _offset += 8
```

Of course, the code provided here is a simplified version and lacks certain
checks, but it illustrates the general approach for extracting potential
handler cases by tracking state variables. With this foundational understanding,
we can develop an analysis script capable of automatically extracting all
opcode format IDs.

Combining these techniques, we have successfully identified 134 out of 155
instruction format IDs, which accounts for approximately 86% coverage.
Furthermore, we have determined the addresses of all handler functions (or their
corresponding lines in the case of _vm_dispatch_1_), allowing for more detailed
subsequent analysis.
