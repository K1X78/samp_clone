/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a720
 * Name: FUN_0040a720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_0040a720(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  uVar4 = param_1;
  uVar8 = *(int *)(param_1 + 0x18) << 1;
  if (uVar8 < 0x100) {
    uVar8 = 0x100;
  }
  FUN_00407e90(DAT_004ed2ec);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00407d90();
  }
  puVar5 = (undefined4 *)FUN_0043aa50(uVar8 * 4);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00407da0();
  }
  FUN_00407e50(DAT_004ed2ec);
  if (puVar5 != (undefined4 *)0x0) {
    puVar9 = puVar5;
    for (uVar6 = uVar8 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    piVar1 = (int *)(param_1 + 0x18);
    param_1 = 0;
    if (*piVar1 != 0) {
      do {
        puVar3 = *(uint **)(*(int *)(uVar4 + 0x1c) + param_1 * 4);
        while (puVar3 != (uint *)0x0) {
          puVar2 = (uint *)puVar3[1];
          puVar3[1] = puVar5[*puVar3 % uVar8];
          puVar5[*puVar3 % uVar8] = puVar3;
          puVar3 = puVar2;
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(uint *)(uVar4 + 0x18));
    }
    FUN_004080d0(*(int *)(uVar4 + 0x1c));
    *(undefined4 **)(uVar4 + 0x1c) = puVar5;
    *(uint *)(uVar4 + 0x18) = uVar8;
  }
  return (*(int *)(uVar4 + 0x1c) != 0) - 1U & 7;
}


/* END FUNCTION 0x0040a720 */
