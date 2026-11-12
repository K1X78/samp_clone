/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004714c0
 * Name: FUN_004714c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004714c0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  uVar1 = *(ushort *)(param_2 + 4);
  if ((iVar2 != 0) && (uVar1 < 1000)) {
    if ((*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0) &&
       ((iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4), iVar2 != 0 &&
        (fVar5 = *(float *)(iVar2 + 0x2d05) - *(float *)(param_2 + 0x14),
        fVar4 = *(float *)(iVar2 + 0x2d01) - *(float *)(param_2 + 0x10),
        fVar3 = *(float *)(iVar2 + 0x2cfd) - *(float *)(param_2 + 0xc),
        fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 <=
        *(float *)(param_2 + 8) * *(float *)(param_2 + 8))))) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004714c0 */
