/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004715d0
 * Name: FUN_004715d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_004715d0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  uVar1 = *(ushort *)(param_2 + 4);
  if ((iVar2 != 0) && (uVar1 < 2000)) {
    if ((*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0) &&
       (pfVar3 = *(float **)(iVar2 + 0x3f54 + (uint)uVar1 * 4), pfVar3 != (float *)0x0)) {
      fVar4 = FUN_00489970(pfVar3,*(float *)(param_2 + 8),*(float *)(param_2 + 0xc),
                           *(float *)(param_2 + 0x10));
      return (float)fVar4;
    }
  }
  return 0.0;
}


/* END FUNCTION 0x004715d0 */
