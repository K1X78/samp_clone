/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef590
 * Name: FUN_100ef590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ef590(int param_1,uint param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  if (*(int *)(iVar1 + 0x38) == 0) {
    iVar2 = (**(code **)(in_EAX + 0x20))
                      (*(undefined4 *)(in_EAX + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f),1);
    *(int *)(iVar1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(int *)(iVar1 + 0x2c) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f);
  }
  uVar4 = *(uint *)(iVar1 + 0x2c);
  if (uVar4 <= param_2) {
    puVar5 = (undefined4 *)(param_1 - uVar4);
    puVar6 = *(undefined4 **)(iVar1 + 0x38);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    return 0;
  }
  uVar4 = uVar4 - *(int *)(iVar1 + 0x34);
  if (param_2 < uVar4) {
    uVar4 = param_2;
  }
  puVar5 = (undefined4 *)(param_1 - param_2);
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x38) + *(int *)(iVar1 + 0x34));
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  param_2 = param_2 - uVar4;
  if (param_2 != 0) {
    puVar5 = (undefined4 *)(param_1 - param_2);
    puVar6 = *(undefined4 **)(iVar1 + 0x38);
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(iVar1 + 0x34) = param_2;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    return 0;
  }
  uVar3 = *(int *)(iVar1 + 0x34) + uVar4;
  *(uint *)(iVar1 + 0x34) = uVar3;
  if (uVar3 == *(uint *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x2c)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) + uVar4;
  }
  return 0;
}


/* END FUNCTION 0x100ef590 */
