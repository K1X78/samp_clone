/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471550
 * Name: FUN_00471550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00471550(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  uVar1 = *(ushort *)(param_2 + 4);
  if ((iVar2 != 0) && (uVar1 < 1000)) {
    if ((*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0) &&
       (iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4), iVar2 != 0)) {
      fVar3 = FUN_004840f0(iVar2,*(float *)(param_2 + 8),*(float *)(param_2 + 0xc),
                           *(float *)(param_2 + 0x10));
      return (float)fVar3;
    }
  }
  return 0.0;
}


/* END FUNCTION 0x00471550 */
