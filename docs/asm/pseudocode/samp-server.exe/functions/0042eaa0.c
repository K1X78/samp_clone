/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042eaa0
 * Name: FUN_0042eaa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042eaa0(int *param_1,char *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  char *pcVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  uint local_ac;
  int local_a8 [7];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [100];
  
  iVar9 = *param_1;
  local_bc = 0;
  local_b8 = iVar9;
  FUN_004081c0(local_64,100,*(undefined4 *)(iVar9 + 0x48));
  cVar2 = *param_2;
  local_a8[0] = iVar9;
  uVar6 = 1;
  while (cVar2 != '\0') {
    uVar5 = FUN_004155c0();
    FUN_00412af0(param_2,uVar5);
    iVar9 = local_b0;
    pcVar8 = param_2 + uVar5;
    if (local_b0 == 0) break;
    if (*pcVar8 == '?') {
      if (1 < local_b0) {
        FUN_00408b60(pcVar8 + 1,&local_bc);
        uVar6 = local_bc;
      }
    }
    else {
      uVar6 = FUN_0040dfa0(pcVar8,local_b0);
    }
    local_bc = uVar6;
    local_ac = local_bc + 1;
    iVar4 = param_1[0xf];
    uVar3 = *(ushort *)(iVar4 + -0xc + local_bc * 0x28);
    param_2 = pcVar8 + iVar9;
    puVar1 = (undefined4 *)(iVar4 + -0x28 + local_bc * 0x28);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 8) == 0) {
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 0x4000) == 0) {
              FUN_00412af0("x\'",2);
              iVar9 = 0;
              uVar7 = extraout_ECX_00;
              if (0 < (int)puVar1[6]) {
                do {
                  FUN_00418ae0(uVar7,(int)local_a8,(undefined **)&DAT_004b7ec8);
                  iVar9 = iVar9 + 1;
                  uVar7 = extraout_ECX_01;
                } while (iVar9 < (int)puVar1[6]);
              }
              uVar10 = 0x1004b7ec4;
              goto LAB_0042ece8;
            }
            FUN_00418ae0(*puVar1,(int)local_a8,(undefined **)"zeroblob(%d)");
          }
          else {
            cVar2 = *(char *)(*(int *)(*(int *)(local_b8 + 8) + 0xc) + 0x49);
            local_b4 = CONCAT31(local_b4._1_3_,cVar2);
            if (cVar2 == '\x01') {
              FUN_00418ae0(local_b8,(int)local_a8,(undefined **)"\'%.*q\'");
            }
            else {
              local_8c = 0;
              local_88 = 0;
              local_84 = 0;
              local_80 = 0;
              local_78 = 0;
              local_74 = 0;
              local_7c = local_b8;
              local_70 = 0;
              local_6c = 0;
              local_68 = 0;
              FUN_0042e460((void *)puVar1[5],(void *)puVar1[6],cVar2);
              FUN_0041fbf0(1);
              FUN_00418ae0(extraout_ECX,(int)local_a8,(undefined **)"\'%.*q\'");
              FUN_0040d250((int)&local_8c);
            }
          }
        }
        else {
          FUN_00418ae0(iVar4,(int)local_a8,(undefined **)"%!.15g");
        }
      }
      else {
        FUN_00418ae0(iVar4,(int)local_a8,(undefined **)&DAT_004b6da8);
      }
    }
    else {
      uVar10 = 0x4004b6c90;
LAB_0042ece8:
      FUN_00412af0((char *)uVar10,(uint)((ulonglong)uVar10 >> 0x20));
    }
    uVar6 = local_ac;
    cVar2 = *param_2;
  }
  FUN_00412be0();
  return;
}


/* END FUNCTION 0x0042eaa0 */
