import sys

from pairipcore import gvm, interpret

with open(sys.argv[1], "rb") as fp:
    bytecode = fp.read()

interpret(bytecode, gvm.Decompiler, verbose=True)
