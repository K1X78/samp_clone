/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad060
 * Name: FUN_100ad060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ad060(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if (iVar2 != 0) {
    iVar2 = FUN_1009f210();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x2b9) != 0)) {
      cVar1 = FUN_100ab870();
      if (cVar1 != '.') {
        FUN_100b1f10(&DAT_1011f15c,*(undefined4 *)(param_1 + 0x2b9),0,0,0,0);
        FUN_100b1f10(&DAT_1011f148,*(undefined4 *)(param_1 + 0x2b9));
        *(undefined4 *)(param_1 + 0x2b9) = 0;
      }
    }
  }
  return;
}


/* END FUNCTION 0x100ad060 */
