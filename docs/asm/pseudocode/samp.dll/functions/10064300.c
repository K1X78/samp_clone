/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064300
 * Name: FUN_10064300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10064300(byte *param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar3 = param_1;
  do {
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar2 != 0);
  uVar4 = (int)pbVar3 - (int)(param_1 + 1);
  uVar8 = (DAT_10140778 ^ 0x3d3e7) << 0xd | (DAT_10140778 ^ 0xc107ffff) >> 0x13;
  uVar7 = 0x12345678;
  pbVar3 = param_1;
  uVar6 = uVar4;
  uVar5 = uVar8;
  if (0xb < uVar4) {
    param_1 = (byte *)(uVar4 / 0xc);
    do {
      iVar1 = pbVar3[4] + uVar5 + (uint)*(uint3 *)(pbVar3 + 5) * 0x100;
      uVar5 = pbVar3[8] + uVar7 + (uint)*(uint3 *)(pbVar3 + 9) * 0x100;
      uVar8 = ((*(int *)pbVar3 - uVar5) - iVar1) + uVar8 ^ uVar5 >> 0xd;
      uVar9 = (iVar1 - uVar5) - uVar8 ^ uVar8 << 8;
      uVar7 = (uVar5 - uVar9) - uVar8 ^ uVar9 >> 0xd;
      uVar5 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xc;
      uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 << 0x10;
      uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 5;
      uVar8 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 3;
      uVar5 = (uVar9 - uVar7) - uVar8 ^ uVar8 << 10;
      uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 >> 0xf;
      pbVar3 = pbVar3 + 0xc;
      uVar6 = uVar6 - 0xc;
      param_1 = (byte *)((int)param_1 - 1);
    } while (param_1 != (byte *)0x0);
  }
  uVar7 = uVar7 + uVar4;
  switch(uVar6) {
  case 0xb:
    uVar7 = uVar7 + (uint)pbVar3[10] * 0x1000000;
  case 10:
    uVar7 = uVar7 + (uint)pbVar3[9] * 0x10000;
  case 9:
    uVar7 = uVar7 + (uint)pbVar3[8] * 0x100;
  case 8:
    uVar5 = uVar5 + (uint)pbVar3[7] * 0x1000000;
  case 7:
    uVar5 = uVar5 + (uint)pbVar3[6] * 0x10000;
  case 6:
    uVar5 = uVar5 + (uint)pbVar3[5] * 0x100;
  case 5:
    uVar5 = uVar5 + pbVar3[4];
  case 4:
    uVar8 = uVar8 + (uint)pbVar3[3] * 0x1000000;
  case 3:
    uVar8 = uVar8 + (uint)pbVar3[2] * 0x10000;
  case 2:
    uVar8 = uVar8 + (uint)pbVar3[1] * 0x100;
  case 1:
    uVar8 = uVar8 + *pbVar3;
  default:
    uVar6 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar4 = (uVar5 - uVar7) - uVar6 ^ uVar6 << 8;
    uVar5 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
    uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar6 << 0x10;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar6 << 10;
    return (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
  }
}


/* END FUNCTION 0x10064300 */
