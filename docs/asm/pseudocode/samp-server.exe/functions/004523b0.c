/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004523b0
 * Name: FUN_004523b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004523b0(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar3) {
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 8) = 0x10;
    }
    else {
      *(int *)((int)this + 8) = iVar3 * 2;
    }
    puVar1 = operator_new(*(int *)((int)this + 8) * 0xc);
    puVar4 = *(undefined4 **)this;
    puVar5 = puVar1;
    for (uVar2 = *(int *)((int)this + 4) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
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
  puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 0xc);
  *puVar4 = param_1;
  *(undefined2 *)(puVar4 + 1) = param_2;
  puVar4[2] = param_3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


/* END FUNCTION 0x004523b0 */
