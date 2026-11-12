/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408d50
 * Name: FUN_00408d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00408d50(void)

{
  byte bVar1;
  byte *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_EDI;
  
  uVar3 = (uint)*in_EAX;
  if (-1 < (char)*in_EAX) {
    *unaff_EDI = uVar3;
    unaff_EDI[1] = 0;
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar2 = (uint)in_EAX[1];
  if (-1 < (char)in_EAX[1]) {
    *unaff_EDI = (uVar3 & 0x7f) << 7 | uVar2;
    unaff_EDI[1] = 0;
    return CONCAT31((int3)((uint)(in_EAX + 1) >> 8),2);
  }
  bVar1 = in_EAX[2];
  uVar3 = uVar3 << 0xe | (uint)bVar1;
  if (-1 < (char)bVar1) {
    *unaff_EDI = (uVar2 & 0x7f) << 7 | uVar3 & 0x1fc07f;
    unaff_EDI[1] = 0;
    return CONCAT31((int3)((uint)(in_EAX + 2) >> 8),3);
  }
  uVar3 = uVar3 & 0x1fc07f;
  uVar2 = uVar2 << 0xe | (uint)in_EAX[3];
  if (-1 < (char)in_EAX[3]) {
    *unaff_EDI = uVar2 & 0x1fc07f | uVar3 << 7;
    unaff_EDI[1] = 0;
    return CONCAT31((int3)((uint)(in_EAX + 3) >> 8),4);
  }
  uVar2 = uVar2 & 0x1fc07f;
  uVar4 = uVar3 << 0xe | (uint)in_EAX[4];
  if (-1 < (char)in_EAX[4]) {
    unaff_EDI[1] = uVar3 >> 0x12;
    *unaff_EDI = uVar2 << 7 | uVar4;
    return 5;
  }
  uVar5 = uVar3 << 7 | uVar2;
  uVar3 = uVar2 << 0xe | (uint)in_EAX[5];
  if (-1 < (char)in_EAX[5]) {
    unaff_EDI[1] = uVar5 >> 0x12;
    *unaff_EDI = (uVar4 & 0x1fc07f) << 7 | uVar3;
    return CONCAT31((uint3)(uVar5 >> 0x1a),6);
  }
  uVar2 = uVar4 << 0xe | (uint)in_EAX[6];
  if (-1 < (char)in_EAX[6]) {
    *unaff_EDI = (uVar3 << 7 ^ uVar2) & 0xfe03f80 ^ uVar2;
    unaff_EDI[1] = uVar5 >> 0xb;
    return 7;
  }
  uVar3 = uVar3 << 0xe | (uint)in_EAX[7];
  uVar2 = (uVar2 & 0x1fc07f) << 7;
  if (-1 < (char)in_EAX[7]) {
    *unaff_EDI = uVar3 & 0xf01fc07f | uVar2;
    unaff_EDI[1] = uVar5 >> 4;
    return 8;
  }
  bVar1 = in_EAX[8];
  unaff_EDI[1] = in_EAX[4] >> 3 & 0xf | uVar5 << 4;
  *unaff_EDI = (uVar3 & 0x1fc07f | uVar2) << 8 | (uint)bVar1;
  return CONCAT31((int3)((uVar5 << 4) >> 8),9);
}


/* END FUNCTION 0x00408d50 */
