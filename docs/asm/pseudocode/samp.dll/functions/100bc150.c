/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc150
 * Name: FUN_100bc150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100bc150(int *param_1,undefined4 *param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((uint)param_1[2] < param_1[1] + param_3) {
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      FUN_100bc110();
    }
    iVar3 = (param_3 - param_1[2]) + param_1[1];
    pvVar1 = _realloc((void *)*param_1,param_1[2] + iVar3);
    *param_1 = (int)pvVar1;
    param_1[2] = param_1[2] + iVar3;
  }
  puVar4 = (undefined4 *)(*param_1 + param_1[1]);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  param_1[1] = param_1[1] + param_3;
  return param_3;
}


/* END FUNCTION 0x100bc150 */
