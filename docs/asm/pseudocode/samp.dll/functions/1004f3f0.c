/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f3f0
 * Name: FUN_1004f3f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004f3f0(int *param_1,char param_2)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    if ((0x200 < (uint)param_1[2]) && (param_2 == '\0')) {
      iVar1 = *param_1;
      if (iVar1 != 0) {
        _eh_vector_destructor_iterator_(iVar1,9,*(undefined4 *)(iVar1 + -4),FUN_1004eb60);
        _free((void *)(iVar1 + -4));
      }
      param_1[2] = 0;
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}


/* END FUNCTION 0x1004f3f0 */
