/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a8c0
 * Name: FUN_1009a8c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1009a8c0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  DAT_10181c38 = FUN_100997b0();
  local_8 = DAT_10181c28;
  local_4 = DAT_10181c38;
  iVar2 = FUN_10099550();
  if (iVar2 == 0) {
    return -0x7fffbffb;
  }
  pcVar8 = &local_11;
  pcVar7 = &local_12;
  pcVar6 = &local_13;
  pcVar5 = &local_14;
  local_10 = iVar2;
  FUN_10083da0(pcVar5,pcVar6,pcVar7,pcVar8);
  FUN_10082360(pcVar5,pcVar6,pcVar7,pcVar8);
  local_c = 0;
  if (0 < *(int *)(iVar2 + 0x13c)) {
    do {
      iVar4 = *(int *)(*(int *)(iVar2 + 0x138) + local_c * 4);
      if (((*(uint *)(iVar4 + 0x10) == (uint)(DAT_10181c50 == 1)) &&
          (*(int *)(iVar4 + 8) == local_8)) && (*(int *)(iVar4 + 0xc) == local_4)) {
        piVar3 = (int *)FUN_10086cf0(0xe,4);
        FUN_1008c210();
        (**(code **)(*piVar3 + 0x38))(DAT_10181c54 == 1);
        if (DAT_10181c54 == 0) {
          cVar1 = FUN_1008a250("(not used)",0);
          if (cVar1 == '\0') {
            FUN_1008a120("(not used)",0);
          }
        }
        else {
          iVar2 = 0;
          if (0 < *(int *)(iVar4 + 0x18)) {
            do {
              FUN_100997d0(*(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2 * 4));
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(iVar4 + 0x18));
          }
          FUN_10087e10(DAT_10181c58);
        }
        iVar2 = FUN_1009a720();
        if (iVar2 < 0) {
          return iVar2;
        }
        FUN_10086cf0(0x11,4);
        FUN_1008c210();
        if (local_14 != '\0') {
          FUN_1009a200(0x20);
        }
        iVar2 = local_10;
        if ((local_13 != '\0') && ((*(uint *)(local_10 + 0x24) & 0x10000) != 0)) {
          FUN_1009a200(0x40);
        }
        if ((local_12 != '\0') && ((*(uint *)(iVar2 + 0x24) & 0x100000) != 0)) {
          FUN_1009a200(0x10);
        }
        if ((local_11 != '\0') && ((*(uint *)(iVar2 + 0x24) & 0x10000) != 0)) {
          FUN_1009a200(0x80);
        }
        if (((byte)DAT_10181c2c & 0x10) == 0) {
          if (((byte)DAT_10181c2c & 0x20) != 0) {
            uVar9 = 0x20;
            goto LAB_1009aaa6;
          }
          if (((byte)DAT_10181c2c & 0x40) != 0) {
            uVar9 = 0x40;
            goto LAB_1009aaa6;
          }
          if ((char)(byte)DAT_10181c2c < '\0') {
            uVar9 = 0x80;
            goto LAB_1009aaa6;
          }
        }
        else {
          uVar9 = 0x10;
LAB_1009aaa6:
          FUN_10087e10(uVar9);
        }
        iVar2 = FUN_10099fb0();
        if (iVar2 < 0) {
          return iVar2;
        }
        FUN_10086cf0(0x12,4);
        FUN_1008c210();
        iVar2 = 0;
        if (0 < *(int *)(iVar4 + 0x3c)) {
          do {
            FUN_1009a240(*(undefined4 *)(*(int *)(iVar4 + 0x38) + iVar2 * 4));
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(iVar4 + 0x3c));
        }
        FUN_10087e10(DAT_10181c64);
        iVar4 = FUN_10099fe0();
        iVar2 = local_10;
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(iVar2 + 0x13c));
  }
  return 0;
}


/* END FUNCTION 0x1009a8c0 */
