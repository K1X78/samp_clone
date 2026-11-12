/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020920
 * Name: FUN_10020920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10020920(int *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *_Src;
  undefined4 *puVar5;
  
  iVar1 = param_1[2];
  if (param_1[1] == iVar1) {
    if (iVar1 == 0) {
      param_1[2] = 0x10;
    }
    else {
      param_1[2] = iVar1 * 2;
    }
    puVar2 = operator_new(param_1[2] * 6);
    iVar1 = param_1[1];
    puVar3 = (undefined4 *)*param_1;
    puVar5 = puVar2;
    for (uVar4 = (uint)(iVar1 * 6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = iVar1 * 6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    _free((void *)*param_1);
    *param_1 = (int)puVar2;
  }
  _Src = (void *)(*param_1 + param_4 * 6);
  _memmove((void *)((int)_Src + 6),_Src,(param_1[1] - param_4) * 6);
  puVar3 = (undefined4 *)(*param_1 + param_4 * 6);
  *puVar3 = param_2;
  *(undefined2 *)(puVar3 + 1) = param_3;
  param_1[1] = param_1[1] + 1;
  return;
}


/* END FUNCTION 0x10020920 */
