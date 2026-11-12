/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acc50
 * Name: FUN_100acc50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100acc50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if ((iVar1 != 0) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x10), iVar1 != 0)) {
      iVar1 = FUN_100b3ca0(iVar1);
      if (iVar1 == 0x3fe) {
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100acc50 */
