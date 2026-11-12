/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b1f0
 * Name: FUN_0045b1f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0045b1f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)((int)this + 0x420) + 0x20;
  if (((iVar1 == 7) || (iVar1 == 10)) || (iVar1 == 9)) {
    iVar2 = *(int *)((int)this + 0x420) + 0x35;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    return iVar2 + 0x61;
  }
  return iVar2 + 0x11;
}


/* END FUNCTION 0x0045b1f0 */
