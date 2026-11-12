/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae2e0
 * Name: FUN_100ae2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100ae2e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_100b3ca0(iVar2);
  if ((iVar1 == 0x191) || (iVar1 = FUN_100b3ca0(iVar2), iVar1 == 0x3a6)) {
    return iVar2;
  }
  iVar2 = FUN_100b3c50(iVar2);
  if (iVar2 != 0) {
    while ((iVar1 = FUN_100b3ca0(iVar2), iVar1 != 0x191 &&
           (iVar1 = FUN_100b3ca0(iVar2), iVar1 != 0x3a6))) {
      iVar2 = FUN_100b3c50(iVar2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar2 != 0) {
      iVar1 = FUN_100b3ca0(iVar2);
      if (iVar1 == 0x191) {
        return iVar2;
      }
      iVar1 = FUN_100b3ca0(iVar2);
      if (iVar1 == 0x3a6) {
        return iVar2;
      }
      return 0;
    }
  }
  return 0;
}


/* END FUNCTION 0x100ae2e0 */
