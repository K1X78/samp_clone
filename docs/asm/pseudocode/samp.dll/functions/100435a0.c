/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100435a0
 * Name: FUN_100435a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100435a0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = &DAT_10156ef0;
  puVar7 = &DAT_10156ef8;
  if (DAT_1013c7ec < -1) {
    FUN_10043570(0x1105);
  }
  DAT_1013c7ec = 0x26f;
  DAT_101578b4 = &DAT_10156ef4;
  iVar4 = 0xe3;
  uVar1 = DAT_10156ef4;
  uVar5 = DAT_10156ef0;
  do {
    uVar3 = uVar1;
    *puVar8 = ((uVar3 ^ uVar5) & 0x7ffffffe ^ uVar5) >> 1 ^ -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^
              puVar7[0x18b];
    uVar1 = *puVar7;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
    uVar5 = uVar3;
  } while (iVar4 != 0);
  puVar6 = &DAT_10156ef0;
  iVar4 = 0x18c;
  do {
    uVar2 = uVar1;
    *puVar8 = ((uVar2 ^ uVar3) & 0x7ffffffe ^ uVar3) >> 1 ^ -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^
              *puVar6;
    uVar5 = DAT_10156ef0;
    uVar1 = *puVar7;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
    uVar3 = uVar2;
  } while (iVar4 != 0);
  *puVar8 = ((DAT_10156ef0 ^ uVar2) & 0x7ffffffe ^ uVar2) >> 1 ^
            -(uint)((DAT_10156ef0 & 1) != 0) & 0x9908b0df ^ *puVar6;
  uVar5 = uVar5 ^ uVar5 >> 0xb;
  uVar5 = uVar5 ^ (uVar5 & 0xff3a58ad) << 7;
  uVar5 = uVar5 ^ (uVar5 & 0xffffdf8c) << 0xf;
  return uVar5 >> 0x12 ^ uVar5;
}


/* END FUNCTION 0x100435a0 */
