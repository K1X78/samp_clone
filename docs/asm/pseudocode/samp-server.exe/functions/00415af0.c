/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415af0
 * Name: FUN_00415af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00415af0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this != (void *)0x0) {
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 0xc);
    iVar3 = FUN_00412ab0();
    *(int *)(iVar2 + iVar1 * 0x14 + -0x10) = iVar3;
    if ((param_2 != 0) && (iVar3 != 0)) {
      FUN_004083a0();
    }
  }
  return;
}


/* END FUNCTION 0x00415af0 */
