/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6ff0
 * Name: FUN_100d6ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100d783a) */
/* WARNING: Removing unreachable block (ram,0x100d7e6e) */
/* WARNING: Removing unreachable block (ram,0x100d7f2b) */
/* WARNING: Removing unreachable block (ram,0x100d7be9) */
/* WARNING: Removing unreachable block (ram,0x100d806e) */
/* WARNING: Removing unreachable block (ram,0x100d7816) */
/* WARNING: Removing unreachable block (ram,0x100d7765) */
/* WARNING: Removing unreachable block (ram,0x100d80ba) */
/* WARNING: Removing unreachable block (ram,0x100d8161) */

int FUN_100d6ff0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_4;
  iVar8 = 0;
  bVar9 = param_4 == 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  param_4 = 0;
  if ((bVar9) || (*(int *)(iVar2 + 0x4c00) != -0x3f212453)) {
    return 2;
  }
LAB_100d7030:
  do {
    bVar9 = false;
    local_28 = 0;
    if (*(int *)(iVar2 + 0x4acc) != 0) {
      FUN_100d8ae0(iVar2,"Pipe broke: handle %p, url = %s\n",iVar2,*(undefined4 *)(iVar2 + 0x4ad4));
      local_28 = 0;
      if (*(int *)(iVar2 + 0x24) < 0x11) {
        if (*(int *)(iVar2 + 0x24) != 2) {
          *(undefined4 *)(iVar2 + 0x24) = 2;
          FUN_100ed9a0(iVar2);
        }
        local_28 = -1;
        iVar8 = 0;
        param_4 = 0;
      }
      *(undefined4 *)(iVar2 + 0x4acc) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      goto LAB_100d7093;
    }
    piVar1 = (int *)(iVar2 + 8);
    if (((*(int *)(iVar2 + 8) == 0) && (2 < *(int *)(iVar2 + 0x24))) &&
       (*(int *)(iVar2 + 0x24) < 0x10)) {
      FUN_100d8ba0(iVar2,"In state %d with no easy_conn, bail out!\n",*(undefined4 *)(iVar2 + 0x24))
      ;
switchD_100d7264_default:
      return 4;
    }
    iVar3 = *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if (iVar3 != 0) {
      FUN_100d69c0(param_1);
    }
    if ((((int *)*piVar1 != (int *)0x0) && (2 < *(int *)(iVar2 + 0x24))) &&
       (*(int *)(iVar2 + 0x24) < 0x11)) {
      *(int *)*piVar1 = iVar2;
    }
    if (((*piVar1 != 0) && (iVar3 = *(int *)(iVar2 + 0x24), 1 < iVar3)) &&
       ((iVar3 < 0x11 && (iVar3 = FUN_100db5d0(iVar2,&param_2,iVar3 < 9), iVar3 < 0)))) {
      if (*(int *)(iVar2 + 0x24) == 3) {
        uVar4 = FUN_100d8520(param_2,param_3,*(undefined4 *)(iVar2 + 0x790),
                             *(undefined4 *)(iVar2 + 0x794));
        FUN_100d8ba0(iVar2,"Resolving timed out after %ld milliseconds",uVar4);
      }
      else if (*(int *)(iVar2 + 0x24) == 4) {
        uVar4 = FUN_100d8520(param_2,param_3,*(undefined4 *)(iVar2 + 0x790),
                             *(undefined4 *)(iVar2 + 0x794));
        FUN_100d8ba0(iVar2,"Connection timed out after %ld milliseconds",uVar4);
      }
      else if ((*(uint *)(iVar2 + 0x70) & *(uint *)(iVar2 + 0x74)) == 0xffffffff) {
        uVar4 = FUN_100d8520(param_2,param_3,*(undefined4 *)(iVar2 + 0x790),
                             *(undefined4 *)(iVar2 + 0x794),*(undefined4 *)(iVar2 + 0x90),
                             *(undefined4 *)(iVar2 + 0x94));
        FUN_100d8ba0(iVar2,"Operation timed out after %ld milliseconds with %I64d bytes received",
                     uVar4);
      }
      else {
        uVar4 = FUN_100d8520(param_2,param_3,*(undefined4 *)(iVar2 + 0x790),
                             *(undefined4 *)(iVar2 + 0x794),*(undefined4 *)(iVar2 + 0x90),
                             *(undefined4 *)(iVar2 + 0x94),*(uint *)(iVar2 + 0x70),
                             *(uint *)(iVar2 + 0x74));
        FUN_100d8ba0(iVar2,
                     "Operation timed out after %ld milliseconds with %I64d out of %I64d bytes received"
                     ,uVar4);
      }
      bVar9 = 9 < *(int *)(iVar2 + 0x24);
      if (bVar9) {
        FUN_100dc080(*piVar1,2);
      }
      param_4 = 0x1c;
      FUN_100d5660(piVar1,1);
      iVar8 = 0x1c;
      goto LAB_100d7f49;
    }
    switch(*(undefined4 *)(iVar2 + 0x24)) {
    case 0:
      iVar8 = FUN_100ed9c0(iVar2);
      param_4 = iVar8;
      if (iVar8 != 0) goto switchD_100d7264_caseD_1;
      if (*(int *)(iVar2 + 0x24) != 2) {
        *(undefined4 *)(iVar2 + 0x24) = 2;
        FUN_100ed9a0(iVar2);
      }
      FUN_100e2ff0(iVar2,1);
      local_28 = -1;
      break;
    case 1:
      goto switchD_100d7264_caseD_1;
    case 2:
      FUN_100e2ff0(iVar2,2);
      param_4 = FUN_100d52f0(iVar2,piVar1,&local_c,&local_20);
      if (param_4 == 0x59) {
        if (*(int *)(iVar2 + 0x24) != 1) {
          *(undefined4 *)(iVar2 + 0x24) = 1;
        }
        FUN_100e8960(param_1 + 0x24,*(undefined4 *)(param_1 + 0x28),iVar2,iVar2 + 0xc);
        iVar8 = 0;
        param_4 = 0;
      }
      else {
        if (param_4 != 0) goto switchD_100d7264_caseD_1;
        iVar8 = FUN_100e9050(iVar2,*piVar1);
        param_4 = iVar8;
        if (iVar8 == 0) {
          if (local_c == 0) {
            local_28 = -1;
            if (local_20 == 0) {
              iVar7 = FUN_100ea090(*piVar1);
              iVar3 = *(int *)(iVar2 + 0x24);
              if (iVar7 != 0) goto LAB_100d7395;
              if (iVar3 == 4) goto switchD_100d7264_caseD_1;
              *(undefined4 *)(iVar2 + 0x24) = 4;
            }
            else {
              FUN_100d5880(param_1,1);
              FUN_100d5390();
            }
          }
          else {
            if (*(int *)(iVar2 + 0x24) == 3) goto switchD_100d7264_caseD_1;
            *(undefined4 *)(iVar2 + 0x24) = 3;
          }
        }
        else {
          bVar9 = true;
        }
      }
      break;
    case 3:
      iVar8 = *piVar1;
      local_1c = 0;
      if (*(int *)(iVar8 + 0x298) == 0) {
        if (*(int *)(iVar8 + 0x28c) == 0) {
          uVar4 = *(undefined4 *)(iVar8 + 0xa0);
        }
        else {
          uVar4 = *(undefined4 *)(iVar8 + 0xb4);
        }
      }
      else {
        uVar4 = *(undefined4 *)(iVar8 + 0xe4);
      }
      local_1c = FUN_100cfda0(iVar8,uVar4,*(undefined4 *)(iVar8 + 0xfc));
      if (local_1c == 0) {
LAB_100d743b:
        param_4 = FUN_100ce2e0(*piVar1,&local_1c);
      }
      else {
        *(int *)(iVar8 + 0x54c) = local_1c;
        *(undefined4 *)(iVar8 + 0x550) = 1;
        param_4 = 0;
        FUN_100d8ae0(iVar2,"Hostname \'%s\' was found in DNS cache\n",uVar4);
        if (local_1c == 0) goto LAB_100d743b;
      }
      iVar8 = param_4;
      FUN_100d5ef0(param_1,iVar2);
      if (local_1c != 0) {
        iVar8 = FUN_100e0cb0(*piVar1,&local_20);
        param_4 = iVar8;
        if (iVar8 == 0) {
          local_28 = -1;
          if (local_20 == 0) {
            iVar3 = FUN_100ea090(*piVar1);
            iVar7 = 5;
            if (iVar3 == 0) {
              iVar7 = 4;
            }
            if (*(int *)(iVar2 + 0x24) != iVar7) {
              *(int *)(iVar2 + 0x24) = iVar7;
            }
          }
          else {
            FUN_100d5880(param_1,1);
            FUN_100d5390();
          }
        }
        else {
          *piVar1 = 0;
        }
      }
      if (iVar8 != 0) {
        bVar9 = true;
      }
      goto switchD_100d7264_caseD_1;
    case 4:
      iVar8 = FUN_100dc630(*piVar1,0,&local_8);
      param_4 = iVar8;
      if (local_8 == 0) {
        if (iVar8 != 0) goto LAB_100d7620;
        goto switchD_100d7264_caseD_1;
      }
      if (iVar8 == 0) {
        iVar3 = *piVar1;
        if (((*(int *)(iVar3 + 0xf0) == 2) && (*(int *)(iVar3 + 0x304) == 0)) ||
           (iVar3 = FUN_100ea090(iVar3), iVar3 != 0)) {
          iVar3 = *(int *)(iVar2 + 0x24);
LAB_100d7395:
          if (iVar3 == 5) goto switchD_100d7264_caseD_1;
          *(undefined4 *)(iVar2 + 0x24) = 5;
        }
        else {
          local_28 = -1;
          FUN_100d5390();
        }
      }
      else {
LAB_100d7620:
        bVar9 = true;
      }
      break;
    case 5:
      iVar8 = FUN_100e5e10(*piVar1,&local_20);
      iVar3 = *piVar1;
      if (*(int *)(iVar3 + 0x2e8) == 0) {
        param_4 = iVar8;
        if ((((iVar8 != 0) || ((*(int *)(iVar3 + 0xf0) == 2 && (*(int *)(iVar3 + 0x304) == 0)))) ||
            (iVar3 = FUN_100ea070(iVar3), iVar3 == 0)) ||
           (local_28 = -1, *(int *)(iVar2 + 0x24) == 6)) goto switchD_100d7264_caseD_1;
        *(undefined4 *)(iVar2 + 0x24) = 6;
      }
      else {
        iVar8 = 0;
        local_28 = -1;
        param_4 = 0;
        FUN_100d5660(piVar1,0);
        if (*(int *)(iVar2 + 0x24) == 2) goto switchD_100d7264_caseD_1;
        *(undefined4 *)(iVar2 + 0x24) = 2;
        FUN_100ed9a0(iVar2);
      }
      break;
    case 6:
      iVar8 = FUN_100d1020(*piVar1,&local_20);
      param_4 = iVar8;
      if (local_20 == 0) {
        if (*(int *)(iVar2 + 0x24) == 7) goto switchD_100d7264_caseD_1;
        *(undefined4 *)(iVar2 + 0x24) = 7;
      }
      else {
        if (iVar8 != 0) goto LAB_100d768b;
        FUN_100d5880(param_1,1);
        FUN_100d5390();
        local_28 = -1;
      }
      break;
    case 7:
      iVar8 = FUN_100d0fa0(*piVar1,&local_20);
      if (iVar8 == 0) {
        param_4 = iVar8;
        if (local_20 == 0) goto switchD_100d7264_caseD_1;
        FUN_100d5880(param_1,1);
        FUN_100d5390();
        local_28 = -1;
      }
      else {
LAB_100d768b:
        param_4 = iVar8;
        FUN_100edbc0(iVar2);
        uVar4 = 1;
LAB_100d7693:
        FUN_100d5660(piVar1,uVar4);
        bVar9 = true;
      }
      break;
    case 8:
      iVar3 = FUN_100e8f70(iVar2,*piVar1);
      if (iVar3 != 0) {
        if (*(int *)(iVar2 + 0x24) != 9) {
          *(undefined4 *)(iVar2 + 0x24) = 9;
          pcVar5 = FUN_100eac50;
          goto LAB_100d771f;
        }
        goto LAB_100d7729;
      }
      goto switchD_100d7264_caseD_1;
    case 9:
      if (*(int *)(iVar2 + 0x584) == 0) {
        piVar1 = (int *)(iVar2 + 8);
        param_4 = FUN_100d5cb0(&local_18);
        if (param_4 == 0) {
          if (local_18 == 0) {
            if ((*(int *)(iVar2 + 0x4ac0) == 0) ||
               ((*(int *)(iVar2 + 0x4b28) != 7 && (*(int *)(iVar2 + 0x4b28) != 5)))) {
              if (*(int *)(iVar2 + 0x24) != 10) {
                *(undefined4 *)(iVar2 + 0x24) = 10;
              }
LAB_100d781c:
              local_28 = 0;
              goto switchD_100d7264_caseD_1;
            }
            FUN_100d5660(piVar1,0);
            if (*(int *)(iVar2 + 0x24) != 0x10) {
              *(undefined4 *)(iVar2 + 0x24) = 0x10;
            }
          }
          else {
            if (*(int *)(*piVar1 + 0x2b0) != 0) {
              if (*(int *)(iVar2 + 0x24) != 0xb) {
                *(undefined4 *)(iVar2 + 0x24) = 0xb;
              }
              goto LAB_100d781c;
            }
            if (*(int *)(iVar2 + 0x24) != 0xc) {
              *(undefined4 *)(iVar2 + 0x24) = 0xc;
            }
          }
          local_28 = -1;
        }
        else if ((param_4 == 0x37) && (*(int *)(*piVar1 + 0x288) != 0)) {
          local_1c = 0;
          iVar8 = FUN_100ee1d0(*piVar1,&local_1c);
          bVar9 = iVar8 != 0;
          if (bVar9) {
            param_4 = iVar8;
          }
          bVar10 = local_1c == 0;
          FUN_100edbc0(iVar2);
          iVar8 = FUN_100d5660(iVar2 + 8,0);
          if (bVar9 || bVar10) {
            bVar9 = true;
            (*(code *)PTR__free_101554bc)(local_1c);
          }
          else if (((iVar8 == 0) || (iVar8 == 0x37)) &&
                  (iVar8 = FUN_100edf50(iVar2,local_1c,2), iVar8 == 0)) {
            if (*(int *)(iVar2 + 0x24) != 2) {
              *(undefined4 *)(iVar2 + 0x24) = 2;
              FUN_100ed9a0(iVar2);
            }
            local_28 = -1;
            param_4 = 0;
            (*(code *)PTR__free_101554bc)(local_1c);
          }
          else {
            param_4 = iVar8;
            (*(code *)PTR__free_101554bc)(local_1c);
          }
        }
        else {
          FUN_100edbc0(iVar2);
          if (*piVar1 != 0) {
            FUN_100d5660(piVar1,0);
          }
          bVar9 = true;
        }
        goto switchD_100d7264_caseD_1;
      }
      FUN_100dc080(*piVar1,0);
      if (*(int *)(iVar2 + 0x24) != 0x10) {
        *(undefined4 *)(iVar2 + 0x24) = 0x10;
      }
      iVar8 = 0;
      param_4 = 0;
      local_28 = -1;
      break;
    case 10:
      iVar8 = FUN_100d0fe0(*piVar1,&local_18);
      param_4 = iVar8;
      if (iVar8 != 0) {
        FUN_100edbc0(iVar2);
        uVar4 = 0;
        goto LAB_100d7693;
      }
      if (local_18 == 0) goto switchD_100d7264_caseD_1;
      FUN_100d5390();
      local_28 = -1;
      break;
    case 0xb:
      param_4 = FUN_100d5d40();
      if (param_4 == 0) {
        if (local_4 == 0) {
          local_28 = 0;
        }
        else {
          FUN_100d5390();
          local_28 = -1;
        }
      }
      else {
        FUN_100edbc0(iVar2);
        FUN_100d5660(piVar1,0);
        bVar9 = true;
      }
      goto switchD_100d7264_caseD_1;
    case 0xc:
      FUN_100e90b0(iVar2,*piVar1);
      FUN_100d69c0(param_1);
      iVar3 = *piVar1;
      if ((*(int *)(iVar3 + 0x32c) == -1) && (*(int *)(iVar3 + 0x330) == -1)) {
        if ((*(int *)(iVar2 + 0x4ac0) != 0) &&
           ((*(uint *)(*(int *)(iVar3 + 800) + 0x44) & 0x1000) == 0)) {
          *(undefined4 *)(iVar2 + 0x4b28) = 7;
        }
        if (*(int *)(iVar2 + 0x24) != 0x10) {
          *(undefined4 *)(iVar2 + 0x24) = 0x10;
          pcVar5 = (code *)0x0;
LAB_100d771f:
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(iVar2);
          }
        }
      }
      else if (*(int *)(iVar2 + 0x24) != 0xd) {
        *(undefined4 *)(iVar2 + 0x24) = 0xd;
        pcVar5 = (code *)0x0;
        goto LAB_100d771f;
      }
LAB_100d7729:
      local_28 = -1;
      break;
    case 0xd:
      iVar3 = FUN_100e8fd0(iVar2,*piVar1);
      if (iVar3 != 0) {
        if (*(int *)(iVar2 + 0x24) != 0xe) {
          *(undefined4 *)(iVar2 + 0x24) = 0xe;
          pcVar5 = (code *)0x0;
          goto LAB_100d771f;
        }
        goto LAB_100d7729;
      }
      goto switchD_100d7264_caseD_1;
    case 0xe:
      iVar8 = *(int *)(iVar2 + 0x224);
      iVar3 = 0;
      bVar10 = false;
      local_1c = 0;
      local_10 = 0;
      if ((-1 < iVar8) && ((0 < iVar8 || (*(int *)(iVar2 + 0x220) != 0)))) {
        iVar3 = FUN_100e3180(*(undefined4 *)(iVar2 + 0x740),*(undefined4 *)(iVar2 + 0x744),
                             *(undefined4 *)(iVar2 + 0x7b8),*(undefined4 *)(iVar2 + 0x7bc),
                             *(int *)(iVar2 + 0x220),iVar8,*(undefined4 *)(iVar2 + 0x7ac),
                             *(undefined4 *)(iVar2 + 0x7b0),param_2,param_3);
      }
      iVar8 = *(int *)(iVar2 + 0x22c);
      iVar7 = 0;
      if ((-1 < iVar8) && ((0 < iVar8 || (*(int *)(iVar2 + 0x228) != 0)))) {
        iVar7 = FUN_100e3180(*(undefined4 *)(iVar2 + 0x738),*(undefined4 *)(iVar2 + 0x73c),
                             *(undefined4 *)(iVar2 + 0x7c8),*(undefined4 *)(iVar2 + 0x7cc),
                             *(int *)(iVar2 + 0x228),iVar8,*(undefined4 *)(iVar2 + 0x7c0),
                             *(undefined4 *)(iVar2 + 0x7c4),param_2,param_3);
      }
      if ((iVar3 < 1) && (iVar7 < 1)) {
        piVar1 = (int *)(iVar2 + 8);
        iVar8 = FUN_100ed5d0(*(undefined4 *)(iVar2 + 8),iVar2,&local_14,&local_10);
        param_4 = iVar8;
        if ((*(byte *)(iVar2 + 0x110) & 1) == 0) {
          FUN_100e9040(*piVar1);
        }
        if ((*(byte *)(iVar2 + 0x110) & 2) == 0) {
          FUN_100e9030(*piVar1);
        }
        if ((((local_14 == 0) && (iVar8 != 0x38)) ||
            (iVar3 = FUN_100ee1d0(*piVar1,&local_1c), iVar3 != 0)) ||
           (bVar10 = local_1c != 0, !bVar10)) {
          if (iVar8 != 0) {
            if (((*(byte *)(*(int *)(*piVar1 + 800) + 0x44) & 2) == 0) && (iVar8 != 0x5c)) {
              FUN_100dc080(*piVar1,2);
            }
            FUN_100edbc0(iVar2);
            FUN_100d5660(piVar1,1);
            (*(code *)PTR__free_101554bc)(local_1c);
            goto switchD_100d7264_caseD_1;
          }
          if (local_14 != 0) goto LAB_100d7dbd;
          if (local_10 != 0) goto LAB_100d7efb;
        }
        else {
          local_14 = 1;
          param_4 = 0;
LAB_100d7dbd:
          FUN_100edbc0(iVar2);
          FUN_100d0bb0(iVar2,*piVar1 + 0x3a8);
          if (*(undefined4 **)(*piVar1 + 0x3a8) != (undefined4 *)0x0) {
            FUN_100d66d0(**(undefined4 **)(*piVar1 + 0x3a8),0,6);
          }
          FUN_100d69c0(param_1);
          if (*(int *)(iVar2 + 0x124) == 0) {
            if (bVar10) {
LAB_100d7ea2:
              uVar4 = 2;
              goto LAB_100d7ea7;
            }
            if (*(int *)(iVar2 + 0x120) != 0) {
              (*(code *)PTR__free_101554bc)(local_1c);
              local_1c = *(int *)(iVar2 + 0x120);
              *(undefined4 *)(iVar2 + 0x120) = 0;
              param_4 = FUN_100edf50(iVar2,local_1c,1);
              if (param_4 != 0) {
                bVar9 = true;
              }
            }
            if (*(int *)(iVar2 + 0x24) != 0x10) {
              *(undefined4 *)(iVar2 + 0x24) = 0x10;
            }
          }
          else {
            if (bVar10) goto LAB_100d7ea2;
            (*(code *)PTR__free_101554bc)(local_1c);
            local_1c = *(int *)(iVar2 + 0x124);
            *(undefined4 *)(iVar2 + 0x124) = 0;
            uVar4 = 3;
LAB_100d7ea7:
            param_4 = FUN_100d5660(piVar1,0);
            if ((param_4 != 0) || (param_4 = FUN_100edf50(iVar2,local_1c,uVar4), param_4 != 0))
            goto LAB_100d7f03;
            if (*(int *)(iVar2 + 0x24) != 2) {
              *(undefined4 *)(iVar2 + 0x24) = 2;
              FUN_100ed9a0(iVar2);
            }
          }
LAB_100d7efb:
          local_28 = -1;
        }
LAB_100d7f03:
        (*(code *)PTR__free_101554bc)(local_1c);
      }
      else {
        if (*(int *)(iVar2 + 0x24) != 0xf) {
          *(undefined4 *)(iVar2 + 0x24) = 0xf;
        }
        if (iVar7 <= iVar3) {
          iVar7 = iVar3;
        }
        FUN_100d66d0(iVar2,iVar7,9);
      }
      goto switchD_100d7264_caseD_1;
    case 0xf:
      iVar8 = FUN_100e33f0(*piVar1);
      if (iVar8 == 0) {
        iVar8 = FUN_100eb510(iVar2,param_2,param_3);
        param_4 = iVar8;
        if (iVar8 == 0) {
          iVar3 = *(int *)(iVar2 + 0x224);
          iVar7 = 0;
          if ((-1 < iVar3) && ((0 < iVar3 || (*(int *)(iVar2 + 0x220) != 0)))) {
            iVar7 = FUN_100e3180(*(undefined4 *)(iVar2 + 0x740),*(undefined4 *)(iVar2 + 0x744),
                                 *(undefined4 *)(iVar2 + 0x7b8),*(undefined4 *)(iVar2 + 0x7bc),
                                 *(int *)(iVar2 + 0x220),iVar3,*(undefined4 *)(iVar2 + 0x7ac),
                                 *(undefined4 *)(iVar2 + 0x7b0),param_2,param_3);
          }
          iVar3 = *(int *)(iVar2 + 0x22c);
          iVar6 = 0;
          if ((-1 < iVar3) && ((0 < iVar3 || (*(int *)(iVar2 + 0x228) != 0)))) {
            iVar6 = FUN_100e3180(*(undefined4 *)(iVar2 + 0x738),*(undefined4 *)(iVar2 + 0x73c),
                                 *(undefined4 *)(iVar2 + 0x7c8),*(undefined4 *)(iVar2 + 0x7cc),
                                 *(int *)(iVar2 + 0x228),iVar3,*(undefined4 *)(iVar2 + 0x7c0),
                                 *(undefined4 *)(iVar2 + 0x7c4),param_2,param_3);
          }
          if ((0 < iVar7) || (0 < iVar6)) {
            if (iVar7 < iVar6) {
              FUN_100d66d0(iVar2,iVar6,9);
            }
            else {
              FUN_100d66d0(iVar2,iVar7,9);
            }
            break;
          }
          if (*(int *)(iVar2 + 0x24) != 0xe) {
            *(undefined4 *)(iVar2 + 0x24) = 0xe;
          }
        }
        goto switchD_100d7264_caseD_1;
      }
      iVar8 = 0x2a;
      param_4 = 0x2a;
      break;
    case 0x10:
      local_28 = -1;
      if (*piVar1 != 0) {
        FUN_100d0bb0(iVar2,*piVar1 + 0x3a8);
        FUN_100d69c0(param_1);
        iVar3 = FUN_100d5660(piVar1,0);
        if (iVar8 == 0) {
          iVar8 = iVar3;
          param_4 = iVar3;
        }
        if (*piVar1 != 0) {
          *piVar1 = 0;
        }
      }
      if ((*(int *)(iVar2 + 0x4ac0) == 0) || (*(int *)(iVar2 + 0x4b28) == 7)) {
        if (*(int *)(iVar2 + 0x24) != 0x11) {
          *(undefined4 *)(iVar2 + 0x24) = 0x11;
          piVar1 = (int *)(*(int *)(iVar2 + 100) + 0x10);
          *piVar1 = *piVar1 + -1;
        }
      }
      else if (*(int *)(iVar2 + 0x24) != 0) {
        *(undefined4 *)(iVar2 + 0x24) = 0;
        break;
      }
switchD_100d7264_caseD_1:
      iVar8 = param_4;
      break;
    case 0x11:
      *piVar1 = 0;
      FUN_100d6850(iVar2);
      break;
    case 0x12:
      *(int *)(iVar2 + 0x28) = iVar8;
      return 0;
    default:
      goto switchD_100d7264_default;
    }
LAB_100d7f49:
    if (*(int *)(iVar2 + 0x24) < 0x11) {
      if (iVar8 == 0) {
        if ((*(int *)(iVar2 + 8) != 0) && (iVar3 = FUN_100e33f0(*(int *)(iVar2 + 8)), iVar3 != 0)) {
          iVar8 = 0x2a;
          param_4 = 0x2a;
          FUN_100dc080(*(undefined4 *)(iVar2 + 8),2);
          FUN_100d5390();
          local_28 = -1;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x4acc) = 0;
        FUN_100d69c0(param_1);
        if (*(int *)(iVar2 + 8) == 0) {
          if (*(int *)(iVar2 + 0x24) == 2) {
            FUN_100edbc0(iVar2);
          }
        }
        else {
          FUN_100e9030(*(int *)(iVar2 + 8));
          FUN_100e9040(*(undefined4 *)(iVar2 + 8));
          FUN_100d0bb0(iVar2,*(int *)(iVar2 + 8) + 0x398);
          FUN_100d0bb0(iVar2,*(int *)(iVar2 + 8) + 0x3a8);
          if (bVar9) {
            FUN_100d2d00(*(undefined4 *)(iVar2 + 8),iVar8 == 0x1c);
            *(undefined4 *)(iVar2 + 8) = 0;
          }
        }
        if (*(int *)(iVar2 + 0x24) != 0x11) {
          *(undefined4 *)(iVar2 + 0x24) = 0x11;
          piVar1 = (int *)(*(int *)(iVar2 + 100) + 0x10);
          *piVar1 = *piVar1 + -1;
        }
      }
    }
    if (*(int *)(iVar2 + 0x24) == 0x11) {
      *(undefined4 *)(iVar2 + 0x38) = 1;
      *(int *)(iVar2 + 0x3c) = iVar2;
      *(int *)(iVar2 + 0x40) = iVar8;
      FUN_100e8960(param_1 + 0x14,*(undefined4 *)(param_1 + 0x18),iVar2 + 0x2c,iVar2 + 0x2c);
      local_28 = 0;
      if (*(int *)(iVar2 + 0x24) != 0x12) {
        *(undefined4 *)(iVar2 + 0x24) = 0x12;
      }
    }
    else {
LAB_100d7093:
      if (local_28 == -1) goto LAB_100d7030;
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      *(int *)(iVar2 + 0x28) = iVar8;
      return local_28;
    }
  } while( true );
}


/* END FUNCTION 0x100d6ff0 */
