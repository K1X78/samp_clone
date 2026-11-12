/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a23d1
 * Name: exception
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall exception(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  uint *puVar3;
  
  *(undefined ***)this = &PTR_FUN_004c05b8;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_1 + 4));
    puVar3 = _malloc(sVar2 + 1);
    *(uint **)((int)this + 4) = puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_004a68f0(puVar3,*(uint **)(param_1 + 4));
    }
  }
  return this;
}


/* END FUNCTION 0x004a23d1 */
