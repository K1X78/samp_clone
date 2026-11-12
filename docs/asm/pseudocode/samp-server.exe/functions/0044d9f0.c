/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d9f0
 * Name: FUN_0044d9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0044d9f0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint3 uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  bVar1 = *(byte *)((iVar2 >> 3) + *(int *)(param_1 + 0xc));
  *(int *)(param_1 + 8) = iVar2 + 1;
  uVar3 = (uint3)((uint)param_1 >> 8);
  if (((byte)(0x80 >> ((byte)iVar2 & 7)) & bVar1) != 0) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}


/* END FUNCTION 0x0044d9f0 */
