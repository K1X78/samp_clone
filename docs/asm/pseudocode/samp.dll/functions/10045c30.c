/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045c30
 * Name: FUN_10045c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10045c30(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    _eh_vector_destructor_iterator_(iVar1,4,*(undefined4 *)(iVar1 + -4),&DAT_10044370);
    _free((void *)(iVar1 + -4));
  }
  return;
}


/* END FUNCTION 0x10045c30 */
