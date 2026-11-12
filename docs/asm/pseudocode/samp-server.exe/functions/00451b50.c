/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451b50
 * Name: FUN_00451b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00451b50(int param_1)

{
  uint uVar1;
  
  FUN_004629a0((LPCRITICAL_SECTION)(param_1 + 0x394));
  if (*(int *)(param_1 + 0x3b0) != 0) {
    uVar1 = 0;
    do {
      _free((void *)**(undefined4 **)(*(int *)(param_1 + 0x3ac) + uVar1 * 4));
      _free(*(void **)(*(int *)(param_1 + 0x3ac) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x3b0));
  }
  FUN_00463630((void *)(param_1 + 0x3ac),'\0');
  FUN_004629b0((LPCRITICAL_SECTION)(param_1 + 0x394));
  return;
}


/* END FUNCTION 0x00451b50 */
