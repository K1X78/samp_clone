/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac260
 * Name: FUN_100ac260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ac260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x2a4) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x2a4) + 0x47c), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) {
    iVar1 = FUN_100b3ca0(iVar1);
    if (iVar1 == 0x2c0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100ac260 */
