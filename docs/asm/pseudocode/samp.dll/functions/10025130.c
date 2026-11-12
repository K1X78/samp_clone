/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10025130
 * Name: FUN_10025130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10025130(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,int *param_5)

{
  undefined1 uVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  uVar1 = FUN_100436c0();
  bVar5 = 0xf - ((char)param_3 + 5U & 0xf);
  cVar2 = FUN_100436c0();
  uVar6 = (uint)bVar5;
  *param_5 = uVar6 + 6 + param_3;
  if (param_2 == param_4) {
    _memmove((void *)(uVar6 + 6 + (int)param_4),param_2,param_3);
  }
  else {
    puVar9 = (undefined4 *)(uVar6 + 6 + (int)param_4);
    for (uVar8 = param_3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar9 = *param_2;
      param_2 = param_2 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = param_3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  uVar8 = 0;
  *(undefined1 *)(param_4 + 1) = uVar1;
  *(byte *)((int)param_4 + 5) = cVar2 << 4 | bVar5;
  if (uVar6 != 0) {
    do {
      uVar1 = FUN_100436c0();
      *(undefined1 *)(uVar8 + 6 + (int)param_4) = uVar1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  FUN_1001fce0(param_4 + 1,uVar6 + 2 + param_3);
  *param_4 = 0;
  FUN_1004dd00(param_1 + 0x234,param_1,param_4,0x10,param_4);
  uVar6 = *param_5 - 0x10;
  if (0xf < uVar6) {
    pbVar7 = (byte *)(uVar6 + (int)param_4);
    uVar8 = 0;
    do {
      uVar4 = 0;
      pbVar3 = pbVar7;
      do {
        *pbVar3 = *pbVar3 ^ pbVar3[uVar8 - uVar6];
        pbVar3[1] = pbVar3[1] ^ *(byte *)((int)param_4 + uVar4 + uVar8 + 1);
        pbVar3[2] = pbVar3[2] ^ *(byte *)((int)param_4 + uVar4 + uVar8 + 2);
        pbVar3[3] = pbVar3[3] ^ *(byte *)((int)param_4 + uVar4 + uVar8 + 3);
        uVar4 = uVar4 + 4;
        pbVar3 = pbVar3 + 4;
      } while (uVar4 < 0x10);
      FUN_1004dd00(param_1 + 0x234,param_1,pbVar7,0x10,pbVar7);
      uVar4 = uVar6 - 0x10;
      pbVar7 = pbVar7 + -0x10;
      uVar8 = uVar6;
      uVar6 = uVar4;
    } while (0xf < uVar4);
  }
  return;
}


/* END FUNCTION 0x10025130 */
