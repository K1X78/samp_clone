/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014730
 * Name: FUN_10014730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10014730(int param_1)

{
  int iVar1;
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_100aba90();
    if (iVar1 != 0) {
      FUN_1009e950(local_40);
      FUN_100ac190(local_10,local_c,local_8);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x10014730 */
