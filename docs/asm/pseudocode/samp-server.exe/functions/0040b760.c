/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b760
 * Name: FUN_0040b760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040b760(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  byte local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if (*(char *)(unaff_EBX + 0x10) == '\0') {
    return 0;
  }
  if (*(char *)(unaff_EBX + 5) == '\x04') goto LAB_0040b88c;
  uVar1 = FUN_00407bb0();
  if ((uVar1 & 0x200) == 0) {
    local_c = 0xf905d5d9;
    local_8 = 0xd763a120;
    FUN_00408fa0(local_4);
    lVar8 = FUN_0040b200();
    local_10 = (undefined4)((ulonglong)lVar8 >> 0x20);
    iVar2 = FUN_00407ad0();
    if (iVar2 == 0) {
      iVar3 = 8;
      bVar6 = false;
      iVar2 = 0;
      bVar7 = true;
      pbVar4 = local_1c;
      pbVar5 = (byte *)&DAT_004b2fcc;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pbVar4 < *pbVar5;
        bVar7 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar7);
      if (!bVar7) {
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      }
      if ((iVar2 == 0) && (iVar2 = FUN_00407af0(), iVar2 != 0)) goto LAB_0040b817;
    }
    else {
LAB_0040b817:
      if (iVar2 != 0x20a) {
        return iVar2;
      }
    }
    if (((*(char *)(unaff_EBX + 9) != '\0') && ((uVar1 & 0x400) == 0)) &&
       (iVar2 = FUN_00407b30(), iVar2 != 0)) {
      return iVar2;
    }
    iVar2 = FUN_00407af0();
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (((uVar1 & 0x400) == 0) && (iVar2 = FUN_00407b30(), iVar2 != 0)) {
    return iVar2;
  }
LAB_0040b88c:
  *(undefined1 *)(unaff_EBX + 0x10) = 0;
  *(undefined1 *)(unaff_EBX + 0x11) = 1;
  *(undefined4 *)(unaff_EBX + 0x50) = *(undefined4 *)(unaff_EBX + 0x48);
  *(undefined4 *)(unaff_EBX + 0x54) = *(undefined4 *)(unaff_EBX + 0x4c);
  FUN_0040a3d0(*(int **)(unaff_EBX + 0xa4));
  return 0;
}


/* END FUNCTION 0x0040b760 */
