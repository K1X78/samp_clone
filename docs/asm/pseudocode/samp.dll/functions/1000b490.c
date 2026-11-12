/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b490
 * Name: FUN_1000b490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1000b490(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 < 0x10) {
    puVar1 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  if (puVar1 <= param_2) {
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar3 = puVar1;
    if (0xf < uVar4) {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (param_2 < (undefined4 *)(*(int *)(param_1 + 0x14) + (int)puVar3)) {
      if (0xf < uVar4) {
        puVar1 = (undefined4 *)*puVar1;
      }
      iVar2 = FUN_1000b3a0(param_1,(int)param_2 - (int)puVar1,param_3);
      return iVar2;
    }
  }
  if (param_3 == 0xffffffff) {
    FUN_100f826d();
  }
  if (*(uint *)(param_1 + 0x18) < param_3) {
    FUN_1000ae00(param_3,*(undefined4 *)(param_1 + 0x14));
  }
  else if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      *(undefined1 *)(param_1 + 4) = 0;
      return param_1;
    }
    **(undefined1 **)(param_1 + 4) = 0;
    return param_1;
  }
  if (param_3 != 0) {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      puVar1 = (undefined4 *)(param_1 + 4);
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 4);
    }
    for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)(param_1 + 0x14) = param_3;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      *(undefined1 *)(*(int *)(param_1 + 4) + param_3) = 0;
      return param_1;
    }
    *(undefined1 *)(param_1 + 4 + param_3) = 0;
  }
  return param_1;
}


/* END FUNCTION 0x1000b490 */
