import sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_16

path = sys.argv[1] if len(sys.argv) > 1 else r"C:\Users\yotam\projects\gunship_2000\game\GS2000.COM"
start = int(sys.argv[2], 0) if len(sys.argv) > 2 else 0
data = open(path, "rb").read()
md = Cs(CS_ARCH_X86, CS_MODE_16)
md.detail = False
for insn in md.disasm(data[start:], start):
    hexs = insn.bytes.hex()
    print(f"{insn.address:04X}: {hexs:<24} {insn.mnemonic:<8} {insn.op_str}")
