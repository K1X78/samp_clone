/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1240
 * Name: FUN_100f1240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f1240(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (((((param_2 == (undefined4 *)0x0) || ((code *)param_2[8] == (code *)0x0)) || (param_2[9] == 0)
       ) || ((puVar7 = (undefined4 *)param_2[7], puVar7 == (undefined4 *)0x0 ||
             ((undefined4 *)*puVar7 != param_2)))) ||
     (((int)puVar7[1] < 0x3f34 || ((0x3f53 < (int)puVar7[1] || (param_1 == (undefined4 *)0x0)))))) {
    return 0xfffffffe;
  }
  puVar1 = (undefined4 *)(*(code *)param_2[8])(param_2[10],1,0x1bd0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  puVar2 = (undefined4 *)0x0;
  if ((puVar7[0xe] != 0) &&
     (puVar2 = (undefined4 *)(*(code *)param_2[8])(param_2[10],1 << ((byte)puVar7[10] & 0x1f),1),
     puVar2 == (undefined4 *)0x0)) {
    (*(code *)param_2[9])(param_2[10],puVar1);
    return 0xfffffffc;
  }
  puVar5 = param_1;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar5 = puVar7;
  puVar8 = puVar1;
  for (iVar3 = 0x6f4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  *puVar1 = param_1;
  puVar5 = (undefined4 *)puVar7[0x14];
  if ((puVar7 + 0x14d <= puVar5) && (puVar5 <= puVar7 + 0x6f0)) {
    puVar1[0x14] = puVar1 + ((int)puVar5 + (-0x534 - (int)puVar7) >> 2) + 0x14d;
    puVar1[0x15] = puVar1 + ((puVar7[0x15] - (int)puVar7) + -0x534 >> 2) + 0x14d;
  }
  puVar1[0x1c] = puVar1 + ((puVar7[0x1c] - (int)puVar7) + -0x534 >> 2) + 0x14d;
  if (puVar2 != (undefined4 *)0x0) {
    uVar6 = 1 << ((byte)puVar7[10] & 0x1f);
    puVar7 = (undefined4 *)puVar7[0xe];
    puVar5 = puVar2;
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  puVar1[0xe] = puVar2;
  param_1[7] = puVar1;
  return 0;
}


/* END FUNCTION 0x100f1240 */
