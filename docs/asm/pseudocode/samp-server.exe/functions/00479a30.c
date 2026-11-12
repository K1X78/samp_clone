/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479a30
 * Name: FUN_00479a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479a30(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 0x28);
  if (((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
     (*(int *)(iVar2 + 4000 + (uint)uVar1 * 4) != 0)) {
    if (999 < uVar1) {
      FUN_0048f600(0);
      return 1;
    }
    FUN_0048f600(*(int *)(iVar2 + 8000 + (uint)uVar1 * 4));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00479a30 */
