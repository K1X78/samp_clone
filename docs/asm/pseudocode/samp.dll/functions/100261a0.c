/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100261a0
 * Name: FUN_100261a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100261a0(int *param_1,undefined4 *param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_10026000();
  if (param_3 <= uVar1) {
    uVar3 = param_1[3] - param_1[1];
    puVar4 = (undefined4 *)(*param_1 + param_1[1]);
    uVar1 = param_3;
    if (uVar3 < param_3) {
      puVar5 = param_2;
      for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar4 = (undefined4 *)*param_1;
      param_2 = (undefined4 *)((param_1[3] - param_1[1]) + (int)param_2);
      uVar1 = (param_1[1] - param_1[3]) + param_3;
    }
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    uVar2 = (undefined3)(uVar1 >> 8);
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    if (param_4 == '\0') {
      FUN_10026020(param_3);
      uVar2 = extraout_var;
    }
    return CONCAT31(uVar2,1);
  }
  return uVar1 & 0xffffff00;
}


/* END FUNCTION 0x100261a0 */
