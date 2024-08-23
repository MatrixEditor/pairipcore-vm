import argparse

from pairipcore import VM, addr_t


KEY = (
    b'\xab\x16+\xc0/D7\xb6\x7fQ1\x8f9@\x13\x11*\xec8\xdd7\xdaO"_T\x97\x00\x1d;\
\xa6T`\xad\xbfP\x8c\x86\xfeg\xc9\xc2\xaf\xaf_\xbaq\xc1\x9a6\x1bq.\xb6C3\n\xa5\xe5\
\xea\xf9 Y\xf1t\x11\x13%\xf2\x87\xd8\xb6\x8e\xcd\xa8#\xb3o\xd8NR\xe8\xbe\xd9\xc1\
\xa0j\xc2(Vw\xd9C\xfc\x92k\x0c#\xf8\xa9h\xb8\xf7\xd4$\xac\xad-\x88W\x92\x8a\xb3y\
\xcdYe\xd9\xab\xa8\xd1\x93\x87\x91o\xf5c\xeb\xa0\x05\xc7\xd4\xc6?\x80\xb9\xf5\xa3\
\xd0|\x7fO\n\'\xe1\xf5\xbe\x98\xb5\xd1\xd9P_lI\x18x\xa2\x16\xf8\xf7\xab\x03\xf0\xaf_\
\xe8\xf8\xf6\xce\xcc\r\xd2\xb3\xb4fO\xf2\xa9<\xd7\x0e\x04\x05\xa4\x85\xb5&\xcf\xbc\
\x16\xd3\xfe\x0b\xb8\xfa\xb1\xfb4\xf8\x16v\x92\x96\xe3\xee\x97\xf1\xc1\xad\x15\xe3\
\x0f\x18:^/\xfe\x14\x1a\xdd\x1b\xe9q\x11\xc8\xc3\xaa\xf2\xa0\xca"}\x91\xcd\xc8\x01\
_8H\xe9j\xbe\xf4\x1aB\xccm\xa2)\\\x1df\xb68'
)

KEY__LEN = 5803


def decode_string(vm: VM, data_addr: addr_t, length: int) -> str | None:
    result = bytearray(length)
    try:
        for i in range(length):
            result[i] = vm.context[data_addr + i] ^ KEY[i & 0xFF]
    except IndexError:
        return
    try:
        return result[2:].decode()
    except UnicodeDecodeError:
        return


def address_based(vm: VM, start_addr: addr_t, strings: set) -> None:
    for i in range(start_addr, len(vm.context), 4):
        vm.context.pc = i
        if i > len(vm.context) - 4:
            break
        p_data = vm.context.addr(0x00)
        len__a = vm.context.u16(p_data)
        length = (len__a ^ KEY__LEN) + 2
        if length > 1000:
            continue

        result = decode_string(vm, p_data, length)
        if result:
            print(f"{vm.context.pc}:{vm.context.pc+length}")
            # strings.add(result)


def length_based(vm: VM, start_addr: addr_t, strings: set) -> None:
    for i in range(start_addr, len(vm.context), 2):
        vm.context.pc = i
        if i > len(vm.context) - 2:
            break
        len__a = vm.context.u16()
        length = (len__a ^ KEY__LEN) + 2
        if length > 1000:
            continue

        result = decode_string(vm, vm.context.pc, length)
        if result:
            print(f"{vm.context.pc}:{vm.context.pc+length}")
            # strings.add(result)


def hexint(value: str):
    try:
        return int(value, 16)
    except ValueError:
        return int(value)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-in",
        metavar="VMCODE",
        dest="input_file",
        required=True,
        type=argparse.FileType("rb"),
    )
    parser.add_argument(
        "-out",
        metavar="OUTPUT",
        dest="output_file",
        required=False,
        type=argparse.FileType("w", encoding="utf-8"),
    )
    parser.add_argument(
        "-start",
        metavar="STARTADDR",
        dest="start_addr",
        type=hexint,
        required=False,
        default=0x08,
    )
    parser.add_argument("--length-based", action="store_true")
    parser.add_argument("--address-based", action="store_true")

    strings = set()
    argv = parser.parse_args()
    if not argv.length_based and not argv.address_based:
        argv.length_based = True

    context = VM(argv.input_file.read())
    if argv.length_based:
        # print("[*] Running length-based heuristic scan...")
        length_based(context, argv.start_addr, strings)

    if argv.address_based:
        # print("[*] Running address-based heuristic scan...")
        address_based(context, argv.start_addr, strings)

    if argv.output_file:
        argv.output_file.write("\n".join(strings))
    else:
        print("\n".join(strings))
