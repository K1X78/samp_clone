/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7770
 * Name: FUN_100b7770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b7770(int param_1)

{
  int iVar1;
  
  DAT_1018f5dc = 1;
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x44), iVar1 != 0)) {
    iVar1 = FUN_100b37d0(iVar1);
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x48) + 0x4c) != 0)) {
      FUN_100b1f10(&DAT_1011f7cc,*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x44),
                   *(undefined4 *)(param_1 + 0x44));
    }
  }
  DAT_1018f5dc = 0;
  return;
}


/* END FUNCTION 0x100b7770 */
