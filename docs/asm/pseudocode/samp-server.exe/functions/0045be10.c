/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045be10
 * Name: FUN_0045be10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0045be10(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)((int)this + 0x708) != '\0') {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) < uVar1) {
    iVar3 = *(int *)((int)this + 0x18) - uVar1;
  }
  else {
    iVar3 = -uVar1;
  }
  if (*(uint *)((int)this + 0x14) + iVar3 != 0) {
    iVar3 = *(int *)((int)this + 0x10) + 1;
    *(int *)((int)this + 0x10) = iVar3;
    if (iVar3 == *(int *)((int)this + 0x18)) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if (*(int *)((int)this + 0x10) == 0) {
      iVar3 = *(int *)(*(int *)((int)this + 0xc) + -4 + *(int *)((int)this + 0x18) * 4);
    }
    else {
      iVar3 = *(int *)(*(int *)((int)this + 0xc) + -4 + *(int *)((int)this + 0x10) * 4);
    }
    *param_1 = *(undefined4 *)(iVar3 + 0x34);
    uVar2 = *(undefined4 *)(iVar3 + 0x30);
    FUN_0044eb60((void *)((int)this + 0x728),iVar3);
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x0045be10 */
