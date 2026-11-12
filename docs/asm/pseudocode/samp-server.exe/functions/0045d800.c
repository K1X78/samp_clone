/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d800
 * Name: thunk_FUN_0045c920
 * Status: ok
 * Single JMP forwarder to 0x0045c920; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_0045c920(void *this,uint param_1)

{
  void *_Dst;
  
  if (param_1 < *(uint *)((int)this + 4)) {
    _Dst = (void *)(*(int *)this + param_1 * 4);
    _memmove(_Dst,(void *)((int)_Dst + 4),(*(uint *)((int)this + 4) - param_1) * 4 - 4);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return;
}


/* END FUNCTION 0x0045d800 */
