/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004a200
 * Name: FUN_1004a200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004a200(int *param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
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
    puVar2 = operator_new(param_1[2] * 5);
    iVar1 = param_1[1];
    puVar4 = (undefined4 *)*param_1;
    puVar5 = puVar2;
    for (uVar3 = (uint)(iVar1 * 5) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = iVar1 * 5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    _free((void *)*param_1);
    *param_1 = (int)puVar2;
  }
  _Src = (void *)(*param_1 + param_4 * 5);
  _memmove((void *)((int)_Src + 5),_Src,(param_1[1] - param_4) * 5);
  puVar4 = (undefined4 *)(*param_1 + param_4 * 5);
  *puVar4 = param_2;
  *(undefined1 *)(puVar4 + 1) = param_3;
  param_1[1] = param_1[1] + 1;
  return;
}


/* END FUNCTION 0x1004a200 */
