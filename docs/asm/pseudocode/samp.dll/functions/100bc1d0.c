/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc1d0
 * Name: FUN_100bc1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100bc1d0(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  iVar1 = param_1[1];
  if ((uint)param_1[2] < iVar1 + param_3) {
    param_3 = param_1[2] - iVar1;
  }
  if (param_3 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)(*param_1 + iVar1);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_1[1] + param_3 < (uint)param_1[2]) {
    param_1[1] = param_1[1] + param_3;
    return param_3;
  }
  param_1[1] = param_1[2];
  *(undefined1 *)(param_1 + 3) = 1;
  return param_3;
}


/* END FUNCTION 0x100bc1d0 */
