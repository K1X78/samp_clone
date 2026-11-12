/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021990
 * Name: FUN_10021990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10021990(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    _eh_vector_destructor_iterator_(iVar1,0xb,*(undefined4 *)(iVar1 + -4),&DAT_10021000);
    _free((void *)(iVar1 + -4));
  }
  return;
}


/* END FUNCTION 0x10021990 */
