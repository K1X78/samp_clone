/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac730
 * Name: FUN_100ac730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ac730(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2a4) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) == 0)) {
    iVar1 = FUN_1009f210();
    if (iVar1 != 0) {
      iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
      if (iVar1 != 0) {
        FUN_100b1f10(&DAT_1011f1ac,*(undefined4 *)(param_1 + 0x44),0xfffffffe);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100ac730 */
