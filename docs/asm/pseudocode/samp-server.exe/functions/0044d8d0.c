/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d8d0
 * Name: FUN_0044d8d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0044d8d0(void *this,size_t param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((int)param_1 < 0x101) {
    *(int *)((int)this + 0xc) = (int)this + 0x11;
    *(undefined4 *)((int)this + 4) = 0x800;
    *(undefined1 *)((int)this + 0x10) = 1;
    return this;
  }
  pvVar1 = _malloc(param_1);
  *(void **)((int)this + 0xc) = pvVar1;
  *(size_t *)((int)this + 4) = param_1 * 8;
  *(undefined1 *)((int)this + 0x10) = 1;
  return this;
}


/* END FUNCTION 0x0044d8d0 */
