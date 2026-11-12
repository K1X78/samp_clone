/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7830
 * Name: FUN_100b7830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b7830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if ((((iVar1 != 2) && (iVar1 != 4)) && (iVar1 != 7)) && (iVar1 != 6)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x4c4);
      if ((iVar1 != 0) && (DAT_102aca24 != 0)) {
        uVar2 = FUN_1001e650(iVar1);
        if ((short)uVar2 != -1) {
          iVar1 = FUN_10001150(uVar2);
          if (iVar1 != 0) {
            uVar2 = FUN_10001120(uVar2);
            return uVar2;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b7830 */
