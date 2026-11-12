/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a420
 * Name: FUN_1003a420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1003a420(int param_1)

{
  uint uVar1;
  
  FUN_100532c0();
  if (*(int *)(param_1 + 0x3a5) != 0) {
    uVar1 = 0;
    do {
      _free((void *)**(undefined4 **)(*(int *)(param_1 + 0x3a1) + uVar1 * 4));
      _free(*(void **)(*(int *)(param_1 + 0x3a1) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x3a5));
  }
  FUN_10038b00(0);
  FUN_100532d0();
  return;
}


/* END FUNCTION 0x1003a420 */
