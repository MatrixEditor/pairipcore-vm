from pairipcore import interpret, gvm

if __name__ == "__main__":
    with open("data.vmcode", "rb") as fp:
        blob = fp.read()

    interpret(blob, gvm.Disassembler, verbose=True)
