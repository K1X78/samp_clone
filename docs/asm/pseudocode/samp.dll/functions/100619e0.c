/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100619e0
 * Name: FUN_100619e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100619e0(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)(param_2 + 0x14) < param_3) {
    FUN_100f8215();
  }
  uVar1 = *(int *)(param_2 + 0x14) - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (-*(int *)(param_1 + 0x14) - 1U <= param_4) {
    FUN_100f826d();
  }
  if (param_4 != 0) {
    uVar1 = *(int *)(param_1 + 0x14) + param_4;
    if (uVar1 == 0xffffffff) {
      FUN_100f826d();
    }
    if (*(uint *)(param_1 + 0x18) < uVar1) {
      FUN_1000ae00(uVar1,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        *(undefined1 *)(param_1 + 4) = 0;
        return param_1;
      }
      **(undefined1 **)(param_1 + 4) = 0;
      return param_1;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(int *)(param_2 + 4);
      }
      puVar4 = (undefined4 *)(param_1 + 4);
      puVar2 = puVar4;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar2 = (undefined4 *)*puVar4;
      }
      puVar5 = (undefined4 *)(param_3 + param_2);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + (int)puVar2);
      for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)(param_1 + 0x14) = uVar1;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)((int)puVar4 + uVar1) = 0;
    }
  }
  return param_1;
}


/* END FUNCTION 0x100619e0 */
