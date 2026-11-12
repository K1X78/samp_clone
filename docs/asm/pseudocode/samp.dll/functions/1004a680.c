/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004a680
 * Name: FUN_1004a680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004a680(int *param_1,undefined4 param_2,int param_3)

{
  void *_Src;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = param_1[2];
  if (param_1[1] == iVar3) {
    if (iVar3 == 0) {
      param_1[2] = 0x10;
    }
    else {
      param_1[2] = iVar3 * 2;
    }
    puVar1 = operator_new(param_1[2] << 2);
    puVar4 = (undefined4 *)*param_1;
    puVar5 = puVar1;
    for (uVar2 = param_1[1] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    _free((void *)*param_1);
    *param_1 = (int)puVar1;
  }
  _Src = (void *)(*param_1 + param_3 * 4);
  _memmove((void *)((int)_Src + 4),_Src,(param_1[1] - param_3) * 4);
  *(undefined4 *)(*param_1 + param_3 * 4) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


/* END FUNCTION 0x1004a680 */
