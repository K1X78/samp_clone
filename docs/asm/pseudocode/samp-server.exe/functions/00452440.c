/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452440
 * Name: FUN_00452440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00452440(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  undefined4 *puVar5;
  
  iVar4 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar4) {
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 8) = 0x10;
    }
    else {
      *(int *)((int)this + 8) = iVar4 * 2;
    }
    puVar1 = operator_new(*(int *)((int)this + 8) * 0xc);
    puVar2 = *(undefined4 **)this;
    puVar5 = puVar1;
    for (uVar3 = *(int *)((int)this + 4) * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    _free(*(void **)this);
    *(undefined4 **)this = puVar1;
  }
  _Src = (void *)(*(int *)this + param_4 * 0xc);
  _memmove((void *)((int)_Src + 0xc),_Src,(*(int *)((int)this + 4) - param_4) * 0xc);
  puVar2 = (undefined4 *)(*(int *)this + param_4 * 0xc);
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = param_2;
  puVar2[2] = param_3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


/* END FUNCTION 0x00452440 */
