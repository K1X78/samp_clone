/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e190
 * Name: FUN_0040e190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_0040e190(int param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  if (((*(uint *)(param_1 + 0x18) == param_4) && (*(uint *)(param_1 + 0x1c) == param_5)) &&
     (param_4 != 0 || param_5 != 0)) {
    puVar4 = *(undefined4 **)(param_1 + 0x20);
  }
  else {
    uVar8 = 0;
    iVar6 = 0;
    for (puVar4 = *(undefined4 **)(param_1 + 4); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      bVar9 = 0xfffffc03 < uVar8;
      uVar8 = uVar8 + 0x3fc;
      iVar6 = iVar6 + (uint)bVar9;
      if (((int)param_5 < iVar6) || (((int)param_5 <= iVar6 && (param_4 < uVar8)))) break;
    }
  }
  uVar10 = __allrem(param_4,param_5,0x3fc,0);
  iVar6 = (int)uVar10;
  uVar8 = param_3;
  do {
    uVar3 = 0x3fc - iVar6;
    uVar1 = uVar8;
    if ((int)uVar3 <= (int)uVar8) {
      uVar1 = uVar3;
    }
    puVar5 = (undefined4 *)(iVar6 + 4 + (int)puVar4);
    puVar7 = param_2;
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    param_2 = (undefined4 *)((int)param_2 + uVar1);
    uVar8 = uVar8 - uVar3;
    iVar6 = 0;
  } while (((-1 < (int)uVar8) && (puVar4 = (undefined4 *)*puVar4, puVar4 != (undefined4 *)0x0)) &&
          (0 < (int)uVar8));
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  *(uint *)(param_1 + 0x18) = param_3 + param_4;
  *(uint *)(param_1 + 0x1c) = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
  return 0;
}


/* END FUNCTION 0x0040e190 */
