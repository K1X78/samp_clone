/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f780
 * Name: FUN_0041f780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041f780(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  char *unaff_EDI;
  
  if (*unaff_EDI == '\0') {
    bVar3 = unaff_EDI[5];
    iVar6 = *(int *)(unaff_EDI + 0x40);
    iVar13 = *(int *)(unaff_EDI + 0x3c);
    pbVar1 = (byte *)((uint)bVar3 + iVar6);
    iVar10 = FUN_0041f710((uint)*pbVar1);
    if (iVar10 != 0) {
      uVar11 = FUN_0041d790();
      return uVar11;
    }
    *(short *)(unaff_EDI + 0x12) = *(short *)(iVar13 + 0x16) + -1;
    unaff_EDI[1] = '\0';
    uVar5 = *(ushort *)(iVar13 + 0x18);
    uVar7 = (ushort)bVar3 + (3 - (ushort)(byte)unaff_EDI[3]) * 4;
    *(ushort *)(unaff_EDI + 0xc) = uVar7;
    bVar3 = pbVar1[5];
    bVar4 = pbVar1[6];
    uVar9 = CONCAT11(pbVar1[3],pbVar1[4]);
    *(ushort *)(unaff_EDI + 0x10) = uVar9;
    if ((int)(*(ushort *)(iVar13 + 0x16) - 8) / 6 < (int)(uint)uVar9) {
      uVar11 = FUN_0041d790();
      return uVar11;
    }
    uVar2 = (uint)uVar7 + (uint)uVar9 * 2;
    uVar7 = CONCAT11(pbVar1[1],pbVar1[2]);
    iVar13 = (uint)pbVar1[7] + (uint)CONCAT11(bVar3,bVar4);
    uVar9 = (ushort)iVar13;
    uVar8 = (uint)uVar7;
    while (uVar7 != 0) {
      if ((uVar8 < uVar2) || ((int)(uVar5 - 4) < (int)uVar8)) {
        uVar11 = FUN_0041d790();
        return uVar11;
      }
      uVar7 = CONCAT11(*(undefined1 *)(uVar8 + iVar6),*(undefined1 *)(uVar8 + 1 + iVar6));
      uVar12 = (uint)CONCAT11(*(undefined1 *)(uVar8 + 2 + iVar6),*(undefined1 *)(uVar8 + 3 + iVar6))
      ;
      if (((uVar7 != 0) && ((uint)uVar7 <= uVar12 + 3 + uVar8)) || ((uint)uVar5 < uVar12 + uVar8)) {
        uVar11 = FUN_0041d790();
        return uVar11;
      }
      iVar13 = iVar13 + uVar12;
      uVar9 = (ushort)iVar13;
      uVar8 = (uint)uVar7;
    }
    if (uVar5 < uVar9) {
      uVar11 = FUN_0041d790();
      return uVar11;
    }
    *(ushort *)(unaff_EDI + 0xe) = uVar9 - (short)uVar2;
    *unaff_EDI = '\x01';
  }
  return 0;
}


/* END FUNCTION 0x0041f780 */
