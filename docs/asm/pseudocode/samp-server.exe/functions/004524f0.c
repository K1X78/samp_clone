/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004524f0
 * Name: FUN_004524f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004524f0(void *this,uint param_1)

{
  void *_Dst;
  
  if (param_1 < *(uint *)((int)this + 4)) {
    _Dst = (void *)(*(int *)this + param_1 * 0xc);
    _memmove(_Dst,(void *)((int)_Dst + 0xc),((*(uint *)((int)this + 4) - param_1) + -1) * 0xc);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return;
}


/* END FUNCTION 0x004524f0 */
