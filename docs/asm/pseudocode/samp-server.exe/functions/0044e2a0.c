/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e2a0
 * Name: FUN_0044e2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e2a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0xc) == 0) {
    puVar1 = operator_new(0x40);
    *(undefined4 **)this = puVar1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 1;
    *puVar1 = *param_1;
    *(undefined4 *)((int)this + 0xc) = 0x10;
    return;
  }
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = *param_1;
  iVar5 = *(int *)((int)this + 8) + 1;
  *(int *)((int)this + 8) = iVar5;
  if (iVar5 == *(int *)((int)this + 0xc)) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    pvVar2 = operator_new(*(int *)((int)this + 0xc) * 8);
    uVar4 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        uVar3 = *(int *)((int)this + 4) + uVar4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)((int)pvVar2 + uVar4 * 4 + -4) =
             *(undefined4 *)(*(int *)this + (uVar3 % *(uint *)((int)this + 0xc)) * 4);
      } while (uVar4 < *(uint *)((int)this + 0xc));
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 0xc);
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) * 2;
    _free(*(void **)this);
    *(void **)this = pvVar2;
  }
  return;
}


/* END FUNCTION 0x0044e2a0 */
