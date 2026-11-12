/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10057df0
 * Name: FUN_10057df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10057df0(int param_1,uint param_2,uint param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_100f8215();
  }
  if (-*(int *)(param_1 + 0x14) - 1U <= param_3) {
    FUN_100f826d();
  }
  if (param_3 != 0) {
    uVar5 = *(int *)(param_1 + 0x14) + param_3;
    if (uVar5 == 0xffffffff) {
      FUN_100f826d();
    }
    if (*(uint *)(param_1 + 0x18) < uVar5) {
      FUN_1000ae00(uVar5,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar5 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        **(undefined1 **)(param_1 + 4) = 0;
        return param_1;
      }
      *(undefined1 *)(param_1 + 4) = 0;
      return param_1;
    }
    if (uVar5 != 0) {
      puVar4 = (undefined4 *)(param_1 + 4);
      puVar1 = puVar4;
      puVar3 = puVar4;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar1 = (undefined4 *)*puVar4;
        puVar3 = (undefined4 *)*puVar4;
      }
      _memmove((void *)((int)puVar1 + param_3 + param_2),(void *)((int)puVar3 + param_2),
               *(int *)(param_1 + 0x14) - param_2);
      puVar3 = puVar4;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar3 = (undefined4 *)*puVar4;
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_2);
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
        puVar3 = puVar3 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar3 = param_4;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(uint *)(param_1 + 0x14) = uVar5;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)(uVar5 + (int)puVar4) = 0;
    }
  }
  return param_1;
}


/* END FUNCTION 0x10057df0 */
