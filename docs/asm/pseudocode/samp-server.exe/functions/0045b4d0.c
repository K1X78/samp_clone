/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b4d0
 * Name: FUN_0045b4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0045b4d0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 4) + param_1;
  if (*(uint *)((int)this + 0xc) <= uVar1) {
    return *(int *)this + ((*(int *)((int)this + 4) - *(uint *)((int)this + 0xc)) + param_1) * 8;
  }
  return *(int *)this + uVar1 * 8;
}


/* END FUNCTION 0x0045b4d0 */
