/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045cb80
 * Name: FUN_0045cb80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045cb80(void *this,char param_1)

{
  int iVar1;
  
  if (*(uint *)((int)this + 8) != 0) {
    if ((0x200 < *(uint *)((int)this + 8)) && (param_1 == '\0')) {
      iVar1 = *(int *)this;
      if (iVar1 != 0) {
        _eh_vector_destructor_iterator_(iVar1,4,*(int *)(iVar1 + -4),FUN_0044e1b0);
        _free((void *)(iVar1 + -4));
      }
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x0045cb80 */
