/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004943d0
 * Name: FUN_004943d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004943d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x86) < 0x13f) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x86) * 0x32 + 0x8a + (int)this);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = *(undefined2 *)param_1;
    iVar1 = *(int *)((int)this + 0x86);
    *(int *)((int)this + 0x86) = iVar1 + 1;
    return iVar1;
  }
  return 0x13f;
}


/* END FUNCTION 0x004943d0 */
