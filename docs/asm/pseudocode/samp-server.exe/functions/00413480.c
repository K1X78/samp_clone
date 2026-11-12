/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413480
 * Name: FUN_00413480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00413480(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar6 = param_2 - 1;
  if (*param_1 < 0xfa1) {
LAB_004134e2:
    pbVar1 = (byte *)((uVar6 >> 3) + 0xc + (int)param_1);
    *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar6 & 7);
    return 0;
  }
  do {
    uVar3 = param_1[2];
    if (uVar3 == 0) break;
    uVar2 = uVar6 / uVar3;
    uVar6 = uVar6 % uVar3;
    if (param_1[uVar2 + 3] == 0) {
      uVar3 = FUN_00413460(uVar3);
      param_1[uVar2 + 3] = uVar3;
      if (uVar3 == 0) {
        return 7;
      }
    }
    param_1 = (uint *)param_1[uVar2 + 3];
  } while (4000 < *param_1);
  if (*param_1 < 0xfa1) goto LAB_004134e2;
  uVar2 = uVar6 % 0x7d;
  uVar6 = uVar6 + 1;
  uVar3 = param_1[uVar2 + 3];
  if (uVar3 == 0) {
    uVar3 = param_1[1];
    if (uVar3 < 0x7c) goto LAB_0041351c;
  }
  else {
    do {
      if (uVar3 == uVar6) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      if (0x7c < uVar2) {
        uVar2 = 0;
      }
      uVar3 = param_1[uVar2 + 3];
    } while (uVar3 != 0);
  }
  uVar3 = param_1[1];
  if (0x3d < uVar3) {
    puVar4 = FUN_00412930(500);
    if (puVar4 == (uint *)0x0) {
      return 7;
    }
    puVar7 = param_1 + 3;
    puVar8 = puVar4;
    for (iVar5 = 0x7d; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = param_1 + 3;
    for (iVar5 = 0x7d; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    param_1[2] = (*param_1 + 0x7c) / 0x7d;
    uVar6 = FUN_00413480(param_1,uVar6);
    uVar3 = 0;
    do {
      if (puVar4[uVar3] != 0) {
        uVar2 = FUN_00413480(param_1,puVar4[uVar3]);
        uVar6 = uVar6 | uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x7d);
    FUN_00408130(0);
    return uVar6;
  }
LAB_0041351c:
  param_1[1] = uVar3 + 1;
  param_1[uVar2 + 3] = uVar6;
  return 0;
}


/* END FUNCTION 0x00413480 */
