/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022340
 * Name: FUN_10022340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10022340(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    _free(*(void **)(param_1 + 0x2c));
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      _eh_vector_destructor_iterator_(iVar1,7,*(undefined4 *)(iVar1 + -4),FUN_10020550);
      _free((void *)(iVar1 + -4));
    }
    FUN_100217f0();
    return;
  }
  return;
}


/* END FUNCTION 0x10022340 */
