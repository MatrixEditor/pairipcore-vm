# Run the following command to ge the image from the documentation
# python3 tools/cfg.py -in assets/data.vmcode -depth 5 -path 0x58,0x41,0x68,0x49,0x46,0x46,0x46,0x75,0x75,0x75,0x75,0x3D,0x00| dot -Tsvg > flowgraph_init.svg
#

import json
import argparse

from pairipcore.cfg import new_cfg
from pairipcore.context import VM
from pairipcore import decode_opcode_v0, decode_entry_point_v0
from pairipcore.insn import FormatIDs


if __name__ == "__main__":

    def hexint(value: str):
        try:
            return int(value, 16)
        except ValueError:
            return int(value)

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-in",
        type=argparse.FileType("rb"),
        help="Bytecode file",
        dest="input_file",
        required=True,
    )
    parser.add_argument(
        "-out",
        type=argparse.FileType("w", encoding="utf-8"),
        default=None,
        dest="out_file",
    )
    parser.add_argument(
        "-depth", type=int, default=-1, help="Maximum depth (default=None)"
    )
    parser.add_argument(
        "-ep", "--entry-point", type=hexint, dest="entry_point", default=-1
    )
    parser.add_argument(
        "-locdb", type=argparse.FileType("r", encoding="utf-8"), default=None
    )
    parser.add_argument(
        "-opcodes",
        type=argparse.FileType("r", encoding="utf-8"),
        required=False,
        dest="opcodes",
    )
    parser.add_argument("-layout", type=str, default="TB")
    parser.add_argument(
        "-path", type=lambda x: [hexint(o) for o in x.split(",")], default=None
    )

    argv = parser.parse_args()
    vm = VM(argv.input_file.read(), decode_opcode_v0, decode_entry_point_v0)
    vm.context.pc = (
        vm.entry_point() if argv.entry_point < 0 else argv.entry_point
    )

    if argv.opcodes:
        opcode_def = json.loads(argv.opcodes.read())
    else:
        opcode_def = {str(x): str(y) for x, y in FormatIDs.items()}

    dot = new_cfg(vm, opcode_def, depth=argv.depth, path=argv.path)

    if argv.out_file:
        argv.out_file.write(str(dot))
    else:
        print(dot)
