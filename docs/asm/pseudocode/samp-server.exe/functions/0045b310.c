/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b310
 * Name: FUN_0045b310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045b310(void *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((*(uint *)((int)this + 4) != 0) && (param_3 < *(uint *)((int)this + 4))) {
    *(undefined4 *)(*(int *)this + param_3 * 4) = param_1;
    return;
  }
  if (*(uint *)((int)this + 8) <= param_3) {
    *(uint *)((int)this + 8) = param_3 + 1;
    puVar1 = operator_new((param_3 + 1) * 4);
    puVar4 = *(undefined4 **)this;
    puVar5 = puVar1;
    for (uVar2 = *(uint *)((int)this + 4) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    _free(*(void **)this);
    *(undefined4 **)this = puVar1;
  }
  uVar2 = *(uint *)((int)this + 4);
  while (uVar2 < param_3) {
    *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = param_2;
    uVar2 = *(int *)((int)this + 4) + 1;
    *(uint *)((int)this + 4) = uVar2;
  }
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


/* END FUNCTION 0x0045b310 */
