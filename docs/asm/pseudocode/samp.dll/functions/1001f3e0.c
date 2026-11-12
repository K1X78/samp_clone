/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f3e0
 * Name: FUN_1001f3e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_1001f3e0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  bVar1 = *(byte *)((iVar2 >> 3) + *(int *)(param_1 + 0xc));
  *(int *)(param_1 + 8) = iVar2 + 1;
  if (((byte)(0x80 >> ((byte)iVar2 & 7)) & bVar1) != 0) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x1001f3e0 */
