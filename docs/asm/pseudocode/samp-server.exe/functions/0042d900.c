/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d900
 * Name: FUN_0042d900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042d900(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int *unaff_EBX;
  uint uVar8;
  uint *puVar9;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_18 = *(int *)(*unaff_EBX + 4);
  if ((*(ushort *)(unaff_EBX[(short)unaff_EBX[0x17] + 0x18] + 0x10) <=
       *(ushort *)((int)unaff_EBX + (short)unaff_EBX[0x17] * 2 + 0xb0)) ||
     (*(char *)((int)unaff_EBX + 0x43) != '\x01')) {
    return 1;
  }
  if (unaff_EBX[4] == 0) {
    FUN_0040c690(unaff_EBX[10],unaff_EBX[0xb]);
  }
  local_c = (int)(short)unaff_EBX[0x17];
  iVar1 = unaff_EBX[local_c + 0x18];
  uVar8 = (uint)*(ushort *)((int)unaff_EBX + local_c * 2 + 0xb0);
  iVar7 = (uint)*(ushort *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x40);
  local_14 = (uint)(CONCAT11(*(undefined1 *)(iVar7 + uVar8 * 2),
                             *(undefined1 *)(iVar7 + uVar8 * 2 + 1)) & *(ushort *)(iVar1 + 0x12)) +
             *(int *)(iVar1 + 0x40);
  local_4 = uVar8;
  if ((((*(char *)(iVar1 + 3) != '\0') ||
       (uVar5 = FUN_0042d5d0((int)unaff_EBX,&local_8), uVar5 == 0)) &&
      (uVar5 = FUN_0042a7d0((int)unaff_EBX), uVar5 == 0)) &&
     (uVar5 = FUN_00423650(*(int *)(iVar1 + 0x44)), uVar4 = local_14, uVar5 == 0)) {
    local_1c = FUN_00428f70(local_14);
    puVar9 = &local_1c;
    pbVar6 = FUN_0040c950(uVar4);
    FUN_0041fb30(uVar8,(uint)pbVar6 & 0xffff,(int *)puVar9);
    uVar5 = local_1c;
    if (local_1c == 0) {
      if (*(char *)(iVar1 + 3) == '\0') {
        iVar2 = unaff_EBX[(short)unaff_EBX[0x17] + 0x18];
        local_8 = *(int *)(unaff_EBX[local_c + 0x19] + 0x48);
        iVar7 = (uint)*(ushort *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x40) +
                (uint)*(ushort *)(iVar2 + 0x10) * 2;
        local_14 = *(int *)(iVar2 + 0x40) +
                   (uint)(CONCAT11(*(undefined1 *)(iVar7 + -2),*(undefined1 *)(iVar7 + -1)) &
                         *(ushort *)(iVar2 + 0x12));
        pbVar6 = FUN_0040c950(local_14);
        iVar7 = local_18;
        local_10 = (uint)pbVar6 & 0xffff;
        FUN_00414a00();
        puVar3 = *(undefined1 **)(iVar7 + 0x50);
        local_1c = FUN_00423650(*(int *)(iVar2 + 0x44));
        FUN_00429380(local_14 - 4,puVar3,iVar1,local_4,(undefined1 *)(local_14 - 4),local_8,
                     &local_1c);
        FUN_0041fb30(*(ushort *)(iVar2 + 0x10) - 1,local_10,(int *)&local_1c);
        if (local_1c != 0) {
          return local_1c;
        }
      }
      uVar5 = FUN_0042be90(unaff_EBX);
      iVar1 = local_c;
      if (uVar5 == 0) {
        if (local_c < (short)unaff_EBX[0x17]) {
          do {
            *(short *)(unaff_EBX + 0x17) = (short)unaff_EBX[0x17] + -1;
            FUN_00427610();
          } while (iVar1 < (short)unaff_EBX[0x17]);
          uVar8 = FUN_0042be90(unaff_EBX);
          uVar5 = 0;
          if (uVar8 != 0) {
            return uVar8;
          }
        }
        FUN_0042ae50();
      }
    }
  }
  return uVar5;
}


/* END FUNCTION 0x0042d900 */
