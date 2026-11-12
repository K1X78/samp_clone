/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f2a0
 * Name: FUN_1004f2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1004f2a0(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    _eh_vector_destructor_iterator_(iVar1,9,*(undefined4 *)(iVar1 + -4),FUN_1004eb60);
    _free((void *)(iVar1 + -4));
  }
  return;
}


/* END FUNCTION 0x1004f2a0 */
