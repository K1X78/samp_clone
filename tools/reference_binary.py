"""Read verified reference metadata and disassemble official PE bytes on demand.

No assembly files are created. Pseudocode remains the primary reading artifact.
"""
from __future__ import annotations

import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def load_reference(binary: str, root: Path = ROOT) -> dict:
    path = root / "docs/asm/pseudocode" / binary / "reference.json"
    data = json.loads(path.read_text(encoding="utf-8"))
    if data.get("schema") != 1 or data.get("binary") != binary:
        raise ValueError(f"Invalid reference identity: {path}")
    addresses = [row["address"] for row in data["regions"]]
    if not addresses or len(addresses) != len(set(addresses)):
        raise ValueError(f"Empty or duplicate reference regions: {path}")
    return data


class ReferenceImage:
    def __init__(self, binary: str, root: Path = ROOT, expected_sha256: str | None = None):
        import pefile

        self.path = root / "GTA Sa samp_clone" / f"{binary}.official"
        data = self.path.read_bytes()
        self.sha256 = hashlib.sha256(data).hexdigest()
        expected = expected_sha256 or load_reference(binary, root)["sha256"]
        if self.sha256.lower() != expected.lower():
            raise ValueError(f"Official binary SHA-256 mismatch: {self.path}")
        pe = pefile.PE(data=data, fast_load=True)
        if pe.OPTIONAL_HEADER.Magic != 0x10B:
            raise ValueError(f"Expected the official PE32 image: {self.path}")
        self.sections = []
        for section in pe.sections:
            size = max(section.Misc_VirtualSize, section.SizeOfRawData)
            self.sections.append((pe.OPTIONAL_HEADER.ImageBase + section.VirtualAddress,
                                  size, section.get_data()[:size].ljust(size, b"\0")))

    def read(self, address: int, size: int) -> bytes:
        if size < 0:
            raise ValueError("Negative byte range")
        for start, length, data in self.sections:
            if start <= address and address + size <= start + length:
                return data[address - start:address - start + size]
        raise ValueError(f"Range outside the official PE sections: {address:#x}+{size:#x}")


def disassemble(image: ReferenceImage, start: int, size: int) -> list[str]:
    import capstone

    data = image.read(start, size)
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    lines = []
    consumed = 0
    while consumed < len(data):
        address = start + consumed
        instruction = next(decoder.disasm(data[consumed:], address, count=1), None)
        if instruction is None:
            lines.append(f"    .byte 0x{data[consumed]:02x} /* 0x{address:08x} */")
            consumed += 1
        else:
            raw = " ".join(f"{byte:02x}" for byte in instruction.bytes)
            operands = f" {instruction.op_str}" if instruction.op_str else ""
            lines.append(f"    {instruction.mnemonic}{operands} /* 0x{address:08x}: {raw} */")
            consumed += instruction.size
    return lines
