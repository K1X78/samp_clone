/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a9b0
 * Name: FUN_0048a9b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048a9b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar4 = FUN_0048a990();
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  puVar3 = (uint *)((int)uVar4 + 0x60);
  do {
    uVar1 = ~((uVar2 & 1) - 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    *puVar3 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 0x100);
  return;
}


/* END FUNCTION 0x0048a9b0 */
