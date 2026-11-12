/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e340
 * Name: FUN_0041e340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041e340(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_ESI;
  uint uVar8;
  bool bVar9;
  int local_58;
  int local_54;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30 = 0;
  local_2c = 0;
  iVar1 = FUN_0040bd20();
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar6 = (undefined4 *)(unaff_ESI + 0x20);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_58 = FUN_00407b40();
  if (local_58 == 0) {
    if ((-1 < local_34) && ((0 < local_34 || (0x20 < local_38)))) {
      local_58 = FUN_00407ad0();
      if (local_58 != 0) goto LAB_0041e620;
      uVar2 = FUN_00408f80();
      uVar3 = FUN_00408f80();
      if (((((uVar2 & 0xfffffffe) == 0x377f0682) && ((uVar3 & uVar3 - 1) == 0)) &&
          ((int)uVar3 < 0x8001)) && (0x1ff < (int)uVar3)) {
        *(short *)(unaff_ESI + 0x18) = (short)uVar3;
        *(byte *)(unaff_ESI + 0x2d) = (byte)uVar2 & 1;
        uVar4 = FUN_00408f80();
        *(undefined4 *)(unaff_ESI + 0x54) = uVar4;
        *(undefined4 *)(unaff_ESI + 0x40) = local_10;
        *(undefined4 *)(unaff_ESI + 0x44) = local_c;
        FUN_0040baa0((int *)0x0,0x18,(uint)((uVar2 & 1) == 0),(int *)(unaff_ESI + 0x38));
        iVar1 = FUN_00408f80();
        if ((*(int *)(unaff_ESI + 0x38) == iVar1) &&
           (iVar1 = FUN_00408f80(), *(int *)(unaff_ESI + 0x3c) == iVar1)) {
          iVar1 = FUN_00408f80();
          if (iVar1 == 0x2de218) {
            uVar2 = uVar3 + 0x18;
            iVar1 = FUN_0043aa50(uVar2);
            iVar7 = 0;
            if (iVar1 == 0) {
              local_58 = 7;
              goto LAB_0041e620;
            }
            local_24 = (int)uVar2 >> 0x1f;
            uVar8 = 0x20;
            iVar5 = local_24 + (uint)(0xffffffdf < uVar2);
            local_54 = 0;
            if ((iVar5 <= local_34) && ((iVar5 < local_34 || (uVar3 + 0x38 <= local_38)))) {
              while ((local_58 = FUN_00407ad0(), local_58 == 0 &&
                     (iVar5 = FUN_0040bc20(unaff_ESI,&local_40,&local_3c,iVar1 + 0x18,iVar1),
                     iVar5 != 0))) {
                local_54 = local_54 + 1;
                local_58 = FUN_0041e270();
                if (local_58 != 0) break;
                if (local_3c != 0) {
                  local_30 = *(undefined4 *)(unaff_ESI + 0x38);
                  *(int *)(unaff_ESI + 0x30) = local_54;
                  local_2c = *(undefined4 *)(unaff_ESI + 0x3c);
                  *(int *)(unaff_ESI + 0x34) = local_3c;
                  *(short *)(unaff_ESI + 0x2e) = (short)uVar3;
                }
                bVar9 = CARRY4(uVar8,uVar2);
                uVar8 = uVar8 + uVar2;
                iVar7 = iVar7 + local_24 + (uint)bVar9;
                iVar5 = local_24 + iVar7 + (uint)CARRY4(uVar2,uVar8);
                if ((local_34 <= iVar5) && ((local_34 < iVar5 || (local_38 < uVar2 + uVar8))))
                break;
              }
            }
            FUN_004080d0(iVar1);
          }
          else {
            local_58 = FUN_0041d7f0();
          }
          if (local_58 != 0) goto LAB_0041e620;
        }
      }
    }
    *(undefined4 *)(unaff_ESI + 0x38) = local_30;
    *(undefined4 *)(unaff_ESI + 0x3c) = local_2c;
    FUN_0040bb50();
    puVar6 = (undefined4 *)FUN_0040ba80();
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 2;
    iVar1 = 4;
    do {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_0041e620:
  FUN_0040bd50();
  return local_58;
}


/* END FUNCTION 0x0041e340 */
