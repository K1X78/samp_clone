/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f960
 * Name: FUN_1001f960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1001f960(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1[2];
  if ((uVar3 & 7) != 0) {
    uVar1 = FUN_1001f470(param_2,param_3 * 8,1);
    return uVar1;
  }
  if (*param_1 < (int)(uVar3 + param_3 * 8)) {
    return 0;
  }
  puVar4 = (undefined4 *)(((int)uVar3 >> 3) + param_1[3]);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  param_1[2] = param_1[2] + param_3 * 8;
  return 1;
}


/* END FUNCTION 0x1001f960 */
