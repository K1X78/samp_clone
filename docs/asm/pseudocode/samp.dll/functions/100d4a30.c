/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d4a30
 * Name: FUN_100d4a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d4a30(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  byte *local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar4 = (int)param_1;
  local_10 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (byte *)0x0;
  local_4 = 1;
  local_14 = 0;
  local_c = 0;
  local_1c = FUN_100d6920(*(undefined4 *)((int)param_1 + 100));
  local_8 = FUN_100d6940(*(undefined4 *)((int)param_1 + 100));
  *param_3 = 0;
  if (*(int *)((int)param_1 + 0x700) == 0) {
    iVar11 = 3;
    goto LAB_100d4b44;
  }
  piVar5 = (int *)FUN_100d11a0();
  if (piVar5 != (int *)0x0) {
    *param_2 = piVar5;
    pcVar6 = *(char **)((int)param_1 + 0x700);
    pcVar9 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar7 = (int)pcVar6 - (int)pcVar9;
    if (uVar7 < 0x100) {
      uVar7 = 0x100;
    }
    (*(code *)PTR__free_101554bc)(*(undefined4 *)((int)param_1 + 0x4ad0));
    *(undefined4 *)((int)param_1 + 0x4ad0) = 0;
    *(undefined4 *)((int)param_1 + 0x4ad4) = 0;
    iVar11 = (*(code *)PTR__malloc_101554b8)(uVar7 + 2);
    *(int *)((int)param_1 + 0x4ad0) = iVar11;
    if (iVar11 != 0) {
      *(int *)((int)param_1 + 0x4ad4) = iVar11;
      puVar8 = (undefined1 *)(*(code *)PTR__malloc_101554b8)(uVar7 + 2);
      piVar5[0x26] = (int)puVar8;
      if (puVar8 == (undefined1 *)0x0) {
        (*(code *)PTR__free_101554bc)(*(undefined4 *)((int)param_1 + 0x4ad0));
        *(undefined4 *)((int)param_1 + 0x4ad0) = 0;
        *(undefined4 *)((int)param_1 + 0x4ad4) = 0;
      }
      else {
        piVar5[0x28] = (int)puVar8;
        *puVar8 = 0;
        local_24 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
        local_28 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
        local_20 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
        if (((local_24 != 0) && (local_28 != 0)) && (local_20 != 0)) {
          iVar11 = FUN_100d4120(param_1,piVar5,&local_18,&local_24,&local_28,&local_20);
          if (iVar11 != 0) goto LAB_100d4b44;
          if (local_18 != (byte *)0x0) {
            local_18 = (byte *)FUN_100cd220("%s://%s",*(undefined4 *)piVar5[200],
                                            *(undefined4 *)((int)param_1 + 0x700));
            if (local_18 == (byte *)0x0) goto LAB_100d4b3e;
            bVar3 = *local_18;
            pbVar12 = local_18;
            while (bVar3 != 0x3a) {
              iVar11 = _tolower((uint)*pbVar12);
              *pbVar12 = (byte)iVar11;
              pbVar1 = pbVar12 + 1;
              pbVar12 = pbVar12 + 1;
              bVar3 = *pbVar1;
            }
            if (*(int *)((int)param_1 + 0x704) != 0) {
              (*(code *)PTR__free_101554bc)(*(undefined4 *)((int)param_1 + 0x700));
              *(undefined4 *)((int)param_1 + 0x700) = 0;
              *(undefined4 *)((int)param_1 + 0x704) = 0;
            }
            *(byte **)((int)param_1 + 0x700) = local_18;
            *(undefined4 *)((int)param_1 + 0x704) = 1;
          }
          if (((*(byte *)(piVar5[0xc9] + 0x44) & 0x40) != 0) &&
             (pcVar9 = _strchr(*(char **)(*piVar5 + 0x4ad4),0x3f), pcVar9 != (char *)0x0)) {
            *pcVar9 = '\0';
          }
          if (*(int *)((int)param_1 + 0x678) != 0) {
            iVar11 = (*(code *)PTR___strdup_101554c4)(*(int *)((int)param_1 + 0x678));
            piVar5[0x5f] = iVar11;
            if (iVar11 == 0) goto LAB_100d4b3e;
          }
          iVar11 = FUN_100d3cb0();
          if (iVar11 != 0) goto LAB_100d4b44;
          if (((*(byte *)(piVar5[0xc9] + 0x44) & 1) != 0) && (piVar5[0xa6] != 0)) {
            piVar5[0xb1] = 1;
          }
          iVar11 = FUN_100d1b00(param_1);
          if (((((((iVar11 != 0) || (iVar11 = FUN_100d1d80(piVar5,&local_20), iVar11 != 0)) ||
                 (iVar11 = FUN_100d1e80(local_24,local_28), iVar11 != 0)) ||
                ((iVar11 = FUN_100d2230(*(undefined4 *)((int)param_1 + 0x3dc)), iVar11 != 0 ||
                 (iVar11 = FUN_100d1100(), iVar11 != 0)))) ||
               ((piVar5[0xa3] != 0 && (iVar11 = FUN_100d1100(), iVar11 != 0)))) ||
              ((piVar5[0xa6] != 0 && (iVar11 = FUN_100d1100(), iVar11 != 0)))) ||
             ((piVar5[0xa7] != 0 && (iVar11 = FUN_100d1100(), iVar11 != 0)))) goto LAB_100d4b44;
          if ((piVar5[0xa3] != 0) && (iVar11 = FUN_100de830(piVar5[0x2d],piVar5[0x28]), iVar11 != 0)
             ) {
            piVar5[0xa3] = 0;
          }
          if ((piVar5[0xa4] != 0) && (piVar5[0x41] == piVar5[0x40])) {
            piVar5[0xa4] = 0;
          }
          if (((piVar5[0xa3] != 0) || (piVar5[0xa4] != 0)) && (piVar5[0xa6] != 0)) {
            piVar5[0xb1] = 1;
          }
          iVar11 = FUN_100d3770();
          if (iVar11 != 0) goto LAB_100d4b44;
          piVar5[0x6c] = (int)&LAB_100d8d90;
          piVar5[0x6d] = (int)&LAB_100d8d90;
          piVar5[0x6e] = (int)FUN_100d90c0;
          piVar5[0x6f] = (int)FUN_100d90c0;
          piVar5[0xbe] = *(int *)((int)param_1 + 0x6cc);
          *(undefined4 *)((int)param_1 + 0x474) = *(undefined4 *)((int)param_1 + 0x60c);
          *(undefined4 *)((int)param_1 + 0x420) = *(undefined4 *)((int)param_1 + 0x620);
          *(undefined4 *)((int)param_1 + 0x498) = *(undefined4 *)((int)param_1 + 0x638);
          *(undefined4 *)((int)param_1 + 0x44c) = *(undefined4 *)((int)param_1 + 0x5a8);
          *(undefined4 *)((int)param_1 + 0x410) = *(undefined4 *)((int)param_1 + 0x610);
          *(undefined4 *)((int)param_1 + 0x4b4) = *(undefined4 *)((int)param_1 + 0x5ac);
          *(undefined4 *)((int)param_1 + 0x418) = *(undefined4 *)((int)param_1 + 0x62c);
          *(undefined4 *)((int)param_1 + 0x480) = *(undefined4 *)((int)param_1 + 0x62c);
          *(undefined4 *)((int)param_1 + 0x40c) = *(undefined4 *)((int)param_1 + 0x608);
          *(undefined4 *)((int)param_1 + 0x450) = *(undefined4 *)((int)param_1 + 0x5d4);
          *(undefined4 *)((int)param_1 + 0x41c) = *(undefined4 *)((int)param_1 + 0x628);
          *(undefined4 *)((int)param_1 + 0x484) = *(undefined4 *)((int)param_1 + 0x628);
          *(undefined4 *)((int)param_1 + 0x478) = *(undefined4 *)((int)param_1 + 0x614);
          *(undefined4 *)((int)param_1 + 0x4b8) = *(undefined4 *)((int)param_1 + 0x5d8);
          *(undefined4 *)((int)param_1 + 0x488) = *(undefined4 *)((int)param_1 + 0x624);
          *(undefined4 *)((int)param_1 + 0x430) = *(undefined4 *)((int)param_1 + 0x634);
          *(undefined4 *)((int)param_1 + 0x454) = *(undefined4 *)((int)param_1 + 0x5e4);
          *(undefined4 *)((int)param_1 + 0x434) = *(undefined4 *)((int)param_1 + 0x63c);
          *(undefined4 *)((int)param_1 + 0x49c) = *(undefined4 *)((int)param_1 + 0x640);
          *(undefined4 *)((int)param_1 + 0x4bc) = *(undefined4 *)((int)param_1 + 0x5e8);
          *(undefined4 *)((int)param_1 + 0x448) = *(undefined4 *)((int)param_1 + 0x5a0);
          *(undefined4 *)((int)param_1 + 0x414) = *(undefined4 *)((int)param_1 + 0x5a0);
          *(undefined4 *)((int)param_1 + 0x4b0) = *(undefined4 *)((int)param_1 + 0x5a4);
          *(undefined4 *)((int)param_1 + 0x47c) = *(undefined4 *)((int)param_1 + 0x5a4);
          *(undefined4 *)((int)param_1 + 0x458) = *(undefined4 *)((int)param_1 + 0x5dc);
          *(undefined4 *)((int)param_1 + 0x4c0) = *(undefined4 *)((int)param_1 + 0x5e0);
          iVar11 = FUN_100ce670((int)param_1 + 0x3f4,piVar5 + 0x88);
          if ((iVar11 == 0) ||
             (iVar11 = FUN_100ce670((int)param_1 + 0x45c,piVar5 + 0x94), iVar11 == 0))
          goto LAB_100d4b3e;
          FUN_100d2e80();
          if (((*(int *)((int)param_1 + 0x554) == 0) || (*(int *)((int)param_1 + 0x4868) != 0)) &&
             (iVar11 = FUN_100d2ed0(param_1,piVar5,&local_10,&local_14,&local_c), piVar10 = local_10
             , iVar11 != 0)) {
            if (((local_14 == 0) && (iVar11 = FUN_100d0b30(), iVar11 != 0)) &&
               ((piVar10[0xed] + piVar10[0xe9] != 0 &&
                ((FUN_100d8ae0(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                               piVar10[0x13],piVar10[0xed] + piVar10[0xe9]),
                 *(uint *)(piVar10[0x18b] + 4) < local_1c &&
                 (*(uint *)(*(int *)((int)param_1 + 0x838) + 0x18) < local_8)))))) {
              FUN_100d8ae0(param_1,"We can reuse, but we want a new connection anyway\n");
              goto LAB_100d509b;
            }
            piVar10[0x12] = 1;
            FUN_100d24b0();
            (*(code *)PTR__free_101554bc)(piVar5);
            *param_2 = piVar10;
            param_1 = piVar10;
            if (piVar10[0x31] == 0) {
              if (piVar10[0x39] == 0) {
                iVar11 = piVar10[0x29];
              }
              else {
                iVar11 = piVar10[0x3a];
              }
            }
            else {
              iVar11 = piVar10[0x32];
            }
            pcVar9 = "proxy";
            if (piVar10[0xa5] == 0) {
              pcVar9 = "host";
            }
            FUN_100d8ae0(iVar4,"Re-using existing connection! (#%ld) with %s %s\n",piVar10[0x13],
                         pcVar9,iVar11);
            piVar5 = param_1;
LAB_100d524a:
            param_1 = piVar5;
            param_1[0x12] = 1;
            FUN_100d2870(iVar4,param_1);
            iVar11 = FUN_100d14f0();
            if (iVar11 == 0) {
              param_1[0xf1] = *(int *)(iVar4 + 0x18c);
              param_1[0xf2] = *(int *)(iVar4 + 0x1e0);
              iVar11 = FUN_100d2330(iVar4,param_3);
            }
          }
          else {
LAB_100d509b:
            iVar11 = 0;
            if ((*(uint *)(piVar5[200] + 0x44) & 0x100) != 0) {
              if (*(int *)((int)param_1 + 0x6d8) != 0) {
                piVar5[0xc0] = 1;
              }
              if (*(int *)((int)param_1 + 0x6d4) != 0) {
                piVar5[0xbf] = 1;
              }
            }
            if (local_c == 0) {
              iVar11 = FUN_100ebaa0(piVar5,*(undefined4 *)((int)param_1 + 0x838));
              iVar13 = local_4;
            }
            else {
              iVar13 = 0;
            }
            if (((local_1c == 0) || (iVar11 == 0)) || (*(uint *)(iVar11 + 4) < local_1c)) {
LAB_100d51ab:
              if (iVar13 != 0) {
                if ((local_8 != 0) && (local_8 <= *(uint *)(*(int *)((int)param_1 + 0x838) + 0x18)))
                {
                  piVar10 = (int *)FUN_100ebea0(param_1);
                  if (piVar10 == (int *)0x0) {
                    FUN_100d8ae0(param_1,"No connections available in cache\n");
                    goto LAB_100d52c0;
                  }
                  *piVar10 = (int)param_1;
                  FUN_100d2d00(piVar10,0);
                }
                FUN_100ebbb0(*(undefined4 *)((int)param_1 + 0x838),piVar5);
                if (((*(byte *)((int)param_1 + 0x4960) & 0x28) != 0) &&
                   (*(int *)((int)param_1 + 0x4968) != 0)) {
                  FUN_100d8ae0(param_1,"NTLM picked AND auth done set, clear picked!\n");
                  *(undefined4 *)((int)param_1 + 0x4960) = 0;
                  *(undefined4 *)((int)param_1 + 0x4968) = 0;
                }
                if (((*(byte *)((int)param_1 + 0x4978) & 0x28) != 0) &&
                   (*(int *)((int)param_1 + 0x4980) != 0)) {
                  FUN_100d8ae0(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
                  *(undefined4 *)((int)param_1 + 0x4978) = 0;
                  *(undefined4 *)((int)param_1 + 0x4980) = 0;
                }
                goto LAB_100d524a;
              }
            }
            else {
              piVar10 = (int *)FUN_100d0d40(iVar11);
              if (piVar10 != (int *)0x0) {
                *piVar10 = (int)param_1;
                FUN_100d2d00(piVar10,0);
                goto LAB_100d51ab;
              }
              FUN_100d8ae0(param_1,"No more connections allowed to host: %d\n",local_1c);
            }
LAB_100d52c0:
            FUN_100d8ae0(param_1,"No connections available.\n");
            FUN_100d0840();
            *param_2 = 0;
            iVar11 = 0x59;
          }
          goto LAB_100d4b44;
        }
      }
    }
  }
LAB_100d4b3e:
  iVar11 = 0x1b;
LAB_100d4b44:
  (*(code *)PTR__free_101554bc)(local_20);
  (*(code *)PTR__free_101554bc)(local_28);
  (*(code *)PTR__free_101554bc)(local_24);
  return iVar11;
}


/* END FUNCTION 0x100d4a30 */
