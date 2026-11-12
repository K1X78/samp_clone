/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100adf30
 * Name: FUN_100adf30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100adf30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      return *(undefined4 *)(*(int *)(param_1 + 0x2a4) + 0x78c);
    }
  }
  return 0;
}


/* END FUNCTION 0x100adf30 */
