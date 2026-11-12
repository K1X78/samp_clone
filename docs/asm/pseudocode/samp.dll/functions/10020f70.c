/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020f70
 * Name: FUN_10020f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10020f70(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    _eh_vector_destructor_iterator_(iVar1,7,*(undefined4 *)(iVar1 + -4),FUN_10020550);
    _free((void *)(iVar1 + -4));
  }
  return;
}


/* END FUNCTION 0x10020f70 */
