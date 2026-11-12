/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10052e00
 * Name: FUN_10052e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10052e00(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)(param_1 + 0x18) + param_3 * 8;
  uVar1 = *(uint *)(param_1 + 0x18) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x18) = uVar3;
  if (uVar3 < param_3 * 8) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (param_3 >> 0x1d);
  if (uVar1 + param_3 < 0x40) {
    uVar3 = 0;
  }
  else {
    uVar3 = -uVar1 + 0x40;
    puVar4 = param_2;
    puVar5 = (undefined4 *)(uVar1 + 0x20 + param_1);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_100511e0(param_1 + 4,param_1 + 0x20);
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
      FUN_100511e0(param_1 + 4,(undefined1 *)((int)param_2 + (uVar1 - 0x3f)));
      uVar3 = uVar3 + 0x40;
    }
    uVar1 = 0;
  }
  puVar4 = (undefined4 *)((int)param_2 + uVar3);
  puVar5 = (undefined4 *)(uVar1 + 0x20 + param_1);
  for (uVar2 = param_3 - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_3 - uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


/* END FUNCTION 0x10052e00 */
