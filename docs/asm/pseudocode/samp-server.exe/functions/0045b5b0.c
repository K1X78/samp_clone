/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b5b0
 * Name: FUN_0045b5b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045b5b0(void *this,int param_1)

{
  void *pvVar1;
  
  _free(*(void **)this);
  pvVar1 = operator_new(param_1 * 8);
  *(void **)this = pvVar1;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


/* END FUNCTION 0x0045b5b0 */
