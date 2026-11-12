/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c960
 * Name: FUN_0045c960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045c960(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    _eh_vector_destructor_iterator_(iVar1,4,*(int *)(iVar1 + -4),FUN_0044e1b0);
    _free((void *)(iVar1 + -4));
  }
  return;
}


/* END FUNCTION 0x0045c960 */
