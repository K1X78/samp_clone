/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b77d0
 * Name: FUN_100b77d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b77d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 0x4c8);
  if ((iVar2 != 0) && (DAT_102aca24 != 0)) {
    uVar1 = FUN_1001e650(iVar2);
    if ((short)uVar1 != -1) {
      iVar2 = FUN_10001150(uVar1);
      if (iVar2 != 0) {
        uVar1 = FUN_10001120(uVar1);
        return uVar1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100b77d0 */
