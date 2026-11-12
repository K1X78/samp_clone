/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045ae70
 * Name: FUN_0045ae70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0045ae70(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = &DAT_004ed7d0;
  puVar7 = &DAT_004ed7d8;
  if (DAT_004cac5c < -1) {
    FUN_0045ae40(0x1105);
  }
  DAT_004cac5c = 0x26f;
  DAT_004ee194 = &DAT_004ed7d4;
  iVar4 = 0xe3;
  uVar1 = DAT_004ed7d4;
  uVar5 = DAT_004ed7d0;
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
  puVar6 = &DAT_004ed7d0;
  iVar4 = 0x18c;
  do {
    uVar2 = uVar1;
    *puVar8 = ((uVar2 ^ uVar3) & 0x7ffffffe ^ uVar3) >> 1 ^ -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^
              *puVar6;
    uVar5 = DAT_004ed7d0;
    uVar1 = *puVar7;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
    uVar3 = uVar2;
  } while (iVar4 != 0);
  *puVar8 = ((DAT_004ed7d0 ^ uVar2) & 0x7ffffffe ^ uVar2) >> 1 ^
            -(uint)((DAT_004ed7d0 & 1) != 0) & 0x9908b0df ^ *puVar6;
  uVar5 = uVar5 ^ uVar5 >> 0xb;
  uVar5 = uVar5 ^ (uVar5 & 0xff3a58ad) << 7;
  uVar5 = uVar5 ^ (uVar5 & 0xffffdf8c) << 0xf;
  return uVar5 >> 0x12 ^ uVar5;
}


/* END FUNCTION 0x0045ae70 */
