/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5b90
 * Name: FUN_100f5b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f5b90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  int local_8;
  
  FUN_100de5a0(param_2);
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = FUN_100dda10(param_1);
  if (iVar3 == 0) {
    iVar7 = 0x1b;
  }
  else {
    iVar7 = FUN_100de7f0(param_2,iVar3);
    while (iVar7 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return 0;
      }
      puVar2 = param_3;
      local_8 = iVar3;
      if (param_3[9] != 0) {
        iVar4 = FUN_100ddac0(iVar3);
        if (iVar4 == 0) {
          iVar7 = 0x1b;
        }
        else {
          iVar7 = FUN_100f5b10(iVar4,param_3[2]);
          if (iVar7 == 0) {
            local_8 = FUN_100dda10(param_1);
            if (local_8 == 0) {
              iVar7 = 0x1b;
            }
            else {
              iVar7 = FUN_100de7f0(iVar4,local_8);
            }
          }
        }
      }
      for (; (iVar7 == 0 && (puVar2 != (undefined4 *)0x0)); puVar2 = (undefined4 *)puVar2[9]) {
        iVar4 = FUN_100ddac0(local_8);
        if (iVar4 == 0) {
          iVar7 = 0x1b;
        }
        else {
          iVar7 = FUN_100dde80(iVar4,puVar2[8],0);
          if (iVar7 == 0) {
            if (puVar2[7] != 0) {
              iVar7 = FUN_100dddc0(iVar4,puVar2[7]);
            }
            if ((iVar7 == 0) &&
               ((param_3[9] != 0 || (iVar7 = FUN_100f5b10(iVar4,param_3[2]), iVar7 == 0)))) {
              iVar5 = param_3[4];
              uVar1 = param_3[10];
              iVar7 = iVar5 >> 0x1f;
              if ((char)uVar1 < '\0') {
                iVar5 = param_3[0xe];
                iVar7 = param_3[0xf];
              }
              if (iVar5 == 0 && iVar7 == 0) {
                iVar5 = -1;
                iVar7 = -1;
              }
              if ((uVar1 & 3) == 0) {
                if ((uVar1 & 0x10) == 0) {
                  if ((uVar1 & 0x40) != 0) {
                    iVar7 = FUN_100dded0(iVar4,iVar5,iVar7,param_4,0,0,param_3[0xc]);
                    goto LAB_100f5db5;
                  }
                  uVar6 = param_3[3];
                }
                else {
                  iVar5 = param_3[6];
                  if (iVar5 == 0) {
                    iVar5 = -1;
                  }
                  uVar6 = param_3[5];
                }
                iVar7 = FUN_100ddbc0(iVar4,uVar6,iVar5);
LAB_100f5db5:
                if (iVar7 == 0) {
LAB_100f5dc1:
                  if ((param_3[0xb] != 0) &&
                     ((param_3[9] != 0 || ((*(byte *)(param_3 + 10) & 0x51) != 0)))) {
                    iVar7 = FUN_100ddb70(iVar4,param_3[0xb]);
                  }
                }
              }
              else {
                iVar7 = 2;
                bVar10 = true;
                pcVar8 = (char *)puVar2[3];
                pcVar9 = "-";
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar10 = *pcVar8 == *pcVar9;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  iVar7 = FUN_100dded0(iVar4,0xffffffff,0xffffffff,_fread,_fseek,0,&PTR_DAT_10155938
                                      );
                }
                else {
                  iVar7 = FUN_100ddc90(iVar4,(char *)puVar2[3]);
                }
                if (iVar7 == 0) {
                  if ((*(byte *)(param_3 + 10) & 2) != 0) {
                    iVar7 = FUN_100ddb70(iVar4,0);
                    goto LAB_100f5db5;
                  }
                  goto LAB_100f5dc1;
                }
              }
            }
          }
        }
      }
      param_3 = (undefined4 *)*param_3;
    }
  }
  FUN_100de5a0(param_2);
  return iVar7;
}


/* END FUNCTION 0x100f5b90 */
