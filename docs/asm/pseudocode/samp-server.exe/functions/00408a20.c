/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408a20
 * Name: FUN_00408a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_00408a20(uint *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  longlong lVar11;
  
  uVar6 = 0;
  uVar5 = 0;
  bVar2 = (&DAT_004b29c8)[*in_EAX];
  while ((bVar2 & 1) != 0) {
    pbVar9 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar2 = (&DAT_004b29c8)[*pbVar9];
  }
  if (*in_EAX == 0x2d) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
    if (*in_EAX != 0x2b) goto LAB_00408a66;
  }
  in_EAX = in_EAX + 1;
LAB_00408a66:
  bVar2 = *in_EAX;
  pbVar9 = in_EAX;
  while (bVar2 == 0x30) {
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar1;
  }
  iVar8 = 0;
  bVar2 = *pbVar9;
  while ((iVar3 = (int)(char)bVar2, 0x2f < iVar3 && (iVar3 < 0x3a))) {
    lVar11 = __allmul(uVar6,uVar5,10,0);
    iVar4 = iVar8 + 1;
    uVar5 = (uint)(lVar11 + iVar3);
    uVar6 = uVar5 - 0x30;
    uVar5 = (int)((ulonglong)(lVar11 + iVar3) >> 0x20) - (uint)(uVar5 < 0x30);
    iVar8 = iVar8 + 1;
    bVar2 = pbVar9[iVar4];
  }
  if (iVar7 != 0) {
    bVar10 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar10);
  }
  *param_1 = uVar6;
  param_1[1] = uVar5;
  if (iVar3 == 0) {
    if (iVar8 == 0) {
      if (in_EAX != pbVar9) {
        return true;
      }
    }
    else if (iVar8 < 0x14) {
      if (iVar8 < 0x13) {
        return true;
      }
      iVar8 = FUN_004089f0(uVar6,pbVar9);
      return iVar8 < iVar7;
    }
  }
  return false;
}


/* END FUNCTION 0x00408a20 */
