/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004512c0
 * Name: FUN_004512c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004512c0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 7;
  puVar3 = (uint *)(param_2 + 0x1c);
  do {
    uVar1 = *(uint *)((param_1 - param_2) + (int)puVar3);
    uVar2 = *puVar3;
    if (uVar1 >= uVar2 && uVar1 != uVar2) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
    if (uVar1 < uVar2) break;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar4);
  return (uint)puVar3 & 0xffffff00;
}


/* END FUNCTION 0x004512c0 */
