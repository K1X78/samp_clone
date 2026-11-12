/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c9470
 * Name: FUN_100c9470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100c9470(uint *param_1,int param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  int in_EAX;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_c;
  
  local_c = 0;
  if (0x2719 < in_EAX) {
    if (in_EAX < 0x27d1) {
      if (in_EAX == 0x27d0) {
        iVar7 = FUN_100c9370(param_2 + 0x664,*param_1);
        return iVar7;
      }
      switch(in_EAX) {
      case 0x271a:
        *(uint *)(param_2 + 0x150) = *param_1;
        return 0;
      default:
        return 0x30;
      case 0x271f:
        *(uint *)(param_2 + 0x188) = *param_1;
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_2 + 0x684));
        *(undefined4 *)(param_2 + 0x684) = 0;
        *(undefined4 *)(param_2 + 1000) = 2;
        return 0;
      case 0x2720:
        if (*(int *)(param_2 + 0x70c) != 0) {
          (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_2 + 0x708));
          *(undefined4 *)(param_2 + 0x708) = 0;
          *(undefined4 *)(param_2 + 0x70c) = 0;
        }
        iVar7 = FUN_100c9370((undefined4 *)(param_2 + 0x600),*param_1);
        *(undefined4 *)(param_2 + 0x708) = *(undefined4 *)(param_2 + 0x600);
        return iVar7;
      case 0x2721:
        iVar7 = FUN_100c9370((int *)(param_2 + 0x5d0),*param_1);
        *(uint *)(param_2 + 0x514) = (uint)(*(int *)(param_2 + 0x5d0) != 0);
        return iVar7;
      case 0x2722:
        iVar7 = FUN_100c9370(param_2 + 0x630,*param_1);
        return iVar7;
      case 0x2726:
        iVar7 = FUN_100c9370(param_2 + 0x5b0,*param_1);
        return iVar7;
      case 0x2727:
        *(uint *)(param_2 + 0x238) = *param_1;
        return 0;
      case 0x2728:
        uVar3 = *param_1;
        *(undefined4 *)(param_2 + 0x53c) = 0;
        *(uint *)(param_2 + 0x240) = uVar3;
        *(undefined4 *)(param_2 + 1000) = 3;
        return 0;
      case 0x2729:
        iVar7 = FUN_100c9370(param_2 + 0x5a0,*param_1);
        return iVar7;
      case 0x272a:
        iVar7 = FUN_100c9370(param_2 + 0x5dc,*param_1);
        return iVar7;
      case 0x272c:
        *(uint *)(param_2 + 0x3bc) = *param_1;
        return 0;
      case 0x272d:
        *(uint *)(param_2 + 0x160) = *param_1;
        return 0;
      case 0x272f:
        if (*param_1 == 0) {
          return 0;
        }
        iVar7 = FUN_100d9b70(*(undefined4 *)(param_2 + 0x710),*param_1);
        if (iVar7 == 0) {
          FUN_100d9bb0(*(undefined4 *)(param_2 + 0x710));
          *(undefined4 *)(param_2 + 0x710) = 0;
          return 0x1b;
        }
        *(int *)(param_2 + 0x710) = iVar7;
        return 0;
      case 0x2734:
        iVar7 = FUN_100c9370(param_2 + 0x5b8,*param_1);
        return iVar7;
      case 0x2735:
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x148) = uVar3;
        if (uVar3 != 0) {
          return 0;
        }
        *(undefined **)(param_2 + 0x148) = &DAT_10155978;
        return 0;
      case 0x2737:
        *(uint *)(param_2 + 0x3c0) = *param_1;
        return 0;
      case 0x2749:
        *(uint *)(param_2 + 0x1f0) = *param_1;
        return 0;
      case 0x274e:
        iVar7 = FUN_100c9370(param_2 + 0x5c0,*param_1);
        return iVar7;
      case 0x274f:
        iVar7 = FUN_100c9370((int *)(param_2 + 0x5ec),*param_1);
        *(uint *)(param_2 + 0x54c) = (uint)(*(int *)(param_2 + 0x5ec) != 0);
        return iVar7;
      case 0x2751:
        iVar7 = FUN_100c9370(param_2 + 0x610,*param_1);
        return iVar7;
      case 0x2756:
        *(uint *)(param_2 + 0x3d4) = *param_1;
        return 0;
      case 0x275c:
        iVar7 = FUN_100c9370(param_2 + 0x62c,*param_1);
        return iVar7;
      case 0x275d:
        iVar7 = FUN_100c9370(param_2 + 0x628,*param_1);
        return iVar7;
      case 0x2762:
        local_c = FUN_100c9370(param_2 + 0x5b4,*param_1);
        iVar7 = FUN_100db030(param_2,0,*(undefined4 *)(param_2 + 0x718),
                             *(undefined4 *)(param_2 + 0x3b4));
        if (iVar7 == 0) {
          local_c = 0x1b;
        }
        *(int *)(param_2 + 0x718) = iVar7;
        return local_c;
      case 0x2763:
        iVar7 = FUN_100c9370(param_2 + 0x620,*param_1);
        return iVar7;
      case 0x2766:
        iVar7 = FUN_100c9370(param_2 + 0x5a8,*param_1);
        return iVar7;
      case 0x2767:
        iVar7 = FUN_100c9370(param_2 + 0x5d4,*param_1);
        return iVar7;
      case 0x2768:
        iVar7 = FUN_100c9370(param_2 + 0x5e4,*param_1);
        return iVar7;
      case 0x2769:
        pcVar1 = (char *)*param_1;
        if (pcVar1 == (char *)0x0) {
          return 0;
        }
        if (*pcVar1 == '\0') {
          return 0;
        }
        iVar7 = thunk_FUN_100cf7e0(param_2,pcVar1);
        return iVar7;
      case 0x276d:
        *(uint *)(param_2 + 0x3c4) = *param_1;
        return 0;
      case 0x276f:
        *(uint *)(param_2 + 0x14c) = *param_1;
        return 0;
      case 0x2771:
        if ((PTR_DAT_10155510[8] & 1) == 0) {
          return 4;
        }
        iVar7 = FUN_100c9370(param_2 + 0x608,*param_1);
        return iVar7;
      case 0x2774:
        uVar3 = *param_1;
        if (*(int *)(param_2 + 0x6c) != 0) {
          FUN_100dec30(param_2,1,2);
          if (*(int *)(param_2 + 0x60) == 3) {
            *(undefined4 *)(param_2 + 0x5c) = 0;
            *(undefined4 *)(param_2 + 0x60) = 0;
          }
          if (*(int *)(*(int *)(param_2 + 0x6c) + 0x58) == *(int *)(param_2 + 0x718)) {
            *(undefined4 *)(param_2 + 0x718) = 0;
          }
          if (*(int *)(*(int *)(param_2 + 0x6c) + 0x5c) == *(int *)(param_2 + 0x4874)) {
            *(undefined4 *)(param_2 + 0x4874) = 0;
          }
          *(int *)(*(int *)(param_2 + 0x6c) + 4) = *(int *)(*(int *)(param_2 + 0x6c) + 4) + -1;
          FUN_100dec70(param_2,1);
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        *(uint *)(param_2 + 0x6c) = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        FUN_100dec30(param_2,1,2);
        *(int *)(*(int *)(param_2 + 0x6c) + 4) = *(int *)(*(int *)(param_2 + 0x6c) + 4) + 1;
        if ((**(byte **)(param_2 + 0x6c) & 8) != 0) {
          *(byte **)(param_2 + 0x5c) = *(byte **)(param_2 + 0x6c) + 0x40;
          *(undefined4 *)(param_2 + 0x60) = 3;
        }
        if (*(int *)(*(int *)(param_2 + 0x6c) + 0x58) != 0) {
          FUN_100dadb0(*(undefined4 *)(param_2 + 0x718));
          *(undefined4 *)(param_2 + 0x718) = *(undefined4 *)(*(int *)(param_2 + 0x6c) + 0x58);
        }
        if (*(int *)(*(int *)(param_2 + 0x6c) + 0x5c) != 0) {
          *(undefined4 *)(param_2 + 0x4c4) = *(undefined4 *)(*(int *)(param_2 + 0x6c) + 0x60);
          *(undefined4 *)(param_2 + 0x4874) = *(undefined4 *)(*(int *)(param_2 + 0x6c) + 0x5c);
        }
        FUN_100dec70(param_2,1);
        return 0;
      case 0x2776:
        pcVar1 = (char *)*param_1;
        if ((pcVar1 != (char *)0x0) && (*pcVar1 == '\0')) {
          iVar7 = FUN_100df050();
          if (iVar7 == 0) {
            return 0x1b;
          }
          iVar6 = FUN_100c9370(param_2 + 0x5c4,iVar7);
          (*(code *)PTR__free_101554bc)(iVar7);
          return iVar6;
        }
        iVar7 = FUN_100c9370(param_2 + 0x5c4,pcVar1);
        return iVar7;
      case 0x2777:
        *(uint *)(param_2 + 0x4d4) = *param_1;
        return 0;
      case 0x2778:
        *(uint *)(param_2 + 0x4d8) = *param_1;
        return 0;
      case 0x277d:
        if ((PTR_DAT_10155510[8] & 8) == 0) {
          return 4;
        }
        *(uint *)(param_2 + 0x43c) = *param_1;
        return 0;
      case 0x2786:
        iVar7 = FUN_100c9370(param_2 + 0x5f0,*param_1);
        return iVar7;
      case 0x2793:
        *(uint *)(param_2 + 500) = *param_1;
        return 0;
      case 0x2796:
        iVar7 = FUN_100c9370(param_2 + 0x5c8,*param_1);
        return iVar7;
      case 0x2797:
        uVar3 = *param_1;
        if (uVar3 == 0) {
          return 0;
        }
        iVar7 = FUN_100de830(uVar3,&DAT_10123e50);
        if (iVar7 != 0) {
          FUN_100dec30(param_2,2,2);
          FUN_100db380(*(undefined4 *)(param_2 + 0x718));
          FUN_100dec70(param_2,2);
          return 0;
        }
        iVar7 = FUN_100de830(uVar3,&DAT_10123e48);
        if (iVar7 != 0) {
          FUN_100dec30(param_2,2,2);
          FUN_100dad50(*(undefined4 *)(param_2 + 0x718));
          FUN_100dec70(param_2,2);
          return 0;
        }
        iVar7 = FUN_100de830(uVar3,"FLUSH");
        if (iVar7 == 0) {
          iVar7 = FUN_100de830(uVar3,"RELOAD");
          if (iVar7 != 0) {
            FUN_100db3b0(param_2);
            return 0;
          }
          if (*(int *)(param_2 + 0x718) == 0) {
            uVar4 = FUN_100db030(param_2,0,0,1);
            *(undefined4 *)(param_2 + 0x718) = uVar4;
          }
          iVar7 = (*(code *)PTR___strdup_101554c4)(uVar3);
          if ((iVar7 != 0) && (*(int *)(param_2 + 0x718) != 0)) {
            FUN_100dec30(param_2,2,2);
            iVar6 = thunk_FUN_100de8c0("Set-Cookie:",iVar7,0xb);
            if (iVar6 == 0) {
              uVar4 = *(undefined4 *)(param_2 + 0x718);
              iVar12 = iVar7;
            }
            else {
              uVar4 = *(undefined4 *)(param_2 + 0x718);
              iVar12 = iVar7 + 0xb;
            }
            FUN_100d9fe0(param_2,uVar4,iVar6 != 0,iVar12,0,0);
            FUN_100dec70(param_2,2);
            (*(code *)PTR__free_101554bc)(iVar7);
            return 0;
          }
          (*(code *)PTR__free_101554bc)(iVar7);
          return 0x1b;
        }
        FUN_100db430(param_2,0);
        return 0;
      case 0x27a3:
        iVar7 = FUN_100c9370(param_2 + 0x5cc,*param_1);
        return iVar7;
      case 0x27a5:
        *(uint *)(param_2 + 0x1cc) = *param_1;
        return 0;
      case 0x27b4:
        *(uint *)(param_2 + 0x1d4) = *param_1;
        return 0;
      case 0x27b5:
        goto switchD_100ca6ce_caseD_27b5;
      case 0x27b8:
        *(uint *)(param_2 + 0x1e0) = *param_1;
        return 0;
      case 0x27b9:
        iVar7 = FUN_100c9370(param_2 + 0x634,*param_1);
        return iVar7;
      case 0x27ba:
        iVar7 = FUN_100c9370(param_2 + 0x63c,*param_1);
        return iVar7;
      case 0x27bd:
        iVar7 = FUN_100c9370(param_2 + 0x644,*param_1);
        return iVar7;
      case 0x27be:
        iVar7 = FUN_100c9370(param_2 + 0x648,*param_1);
        return iVar7;
      case 0x27bf:
        iVar7 = FUN_100c9370(param_2 + 0x650,*param_1);
        return iVar7;
      case 0x27c0:
        iVar7 = FUN_100c9370(param_2 + 0x654,*param_1);
        return iVar7;
      case 0x27c1:
        iVar7 = FUN_100c9370(param_2 + 0x658,*param_1);
        return iVar7;
      case 0x27c3:
switchD_100ca6ce_caseD_27c3:
        iVar7 = FUN_100c9370(param_2 + 0x668,*param_1);
        return iVar7;
      case 0x27ca:
        iVar7 = FUN_100c9370(param_2 + 0x670,*param_1);
        return iVar7;
      case 0x27cb:
        *(uint *)(param_2 + 0x698) = *param_1;
        return 0;
      case 0x27ce:
        iVar7 = FUN_100c9370(param_2 + 0x65c,*param_1);
        return iVar7;
      case 0x27cf:
        iVar7 = FUN_100c9370(param_2 + 0x660,*param_1);
        return iVar7;
      }
    }
    if (in_EAX < 0x2817) {
      if (in_EAX == 0x2816) {
        iVar7 = FUN_100c9370(param_2 + 0x5f8,*param_1);
        return iVar7;
      }
      switch(in_EAX) {
      case 0x27d3:
        *(uint *)(param_2 + 0x164) = *param_1;
        return 0;
      default:
        return 0x30;
      case 0x27d9:
        *(uint *)(param_2 + 0x4b4c) = *param_1;
        return 0;
      case 0x27da:
        *(uint *)(param_2 + 0x6b8) = *param_1;
        return 0;
      case 0x27db:
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x3d8) = uVar3;
        *(uint *)(param_2 + 0x714) = uVar3;
        return 0;
      case 0x27e1:
        *(uint *)(param_2 + 0x1dc) = *param_1;
        return 0;
      case 0x27e3:
        iVar7 = FUN_100ce540(param_2,*param_1);
        return iVar7;
      case 0x27e9:
        iVar7 = FUN_100c9370(param_2 + 0x674,*param_1);
        return iVar7;
      case 0x27ec:
        iVar7 = FUN_100c9370(param_2 + 0x678,*param_1);
        return iVar7;
      case 0x27ed:
        iVar7 = FUN_100ce550(param_2,*param_1);
        return iVar7;
      case 0x27ee:
        iVar7 = FUN_100ce560(param_2,*param_1);
        return iVar7;
      case 0x27ef:
        iVar7 = FUN_100ce570(param_2,*param_1);
        return iVar7;
      case 0x27f0:
        iVar7 = FUN_100c9370(param_2 + 0x64c,*param_1);
        return iVar7;
      case 0x27f4:
        *(uint *)(param_2 + 0x23c) = *param_1;
        return 0;
      case 0x27f6:
        if ((PTR_DAT_10155510[8] & 4) == 0) {
          return 4;
        }
        iVar7 = FUN_100c9370(param_2 + 0x618,*param_1);
        return iVar7;
      case 0x27fb:
        goto switchD_100ca6ce_caseD_27c3;
      case 0x27fc:
        iVar7 = FUN_100c9370(param_2 + 0x66c,*param_1);
        return iVar7;
      case 0x27fe:
        iVar7 = FUN_100c9370(param_2 + 0x5bc,*param_1);
        return iVar7;
      case 0x2800:
      case 0x2801:
        goto switchD_100ca2a6_caseD_ef;
      case 0x2803:
        *(uint *)(param_2 + 0x3dc) = *param_1;
        return 0;
      case 0x2806:
        iVar7 = FUN_100c9370(param_2 + 0x614,*param_1);
        return iVar7;
      case 0x2807:
        if ((PTR_DAT_10155510[8] & 1) == 0) {
          return 4;
        }
        iVar7 = FUN_100c9370(param_2 + 0x60c,*param_1);
        return iVar7;
      case 0x280e:
        iVar7 = FUN_100c9370(param_2 + 0x5a4,*param_1);
        return iVar7;
      case 0x280f:
        iVar7 = FUN_100c9370(param_2 + 0x5ac,*param_1);
        return iVar7;
      case 0x2810:
        iVar7 = FUN_100c9370(param_2 + 0x5d8,*param_1);
        return iVar7;
      case 0x2811:
        iVar7 = FUN_100c9370(param_2 + 0x5e8,*param_1);
        return iVar7;
      case 0x2812:
        iVar7 = FUN_100c9370(param_2 + 0x5e0,*param_1);
        return iVar7;
      case 0x2813:
        iVar7 = FUN_100c9370(param_2 + 0x624,*param_1);
        return iVar7;
      case 0x2814:
        iVar7 = FUN_100c9370(param_2 + 0x638,*param_1);
        return iVar7;
      }
    }
    if (in_EAX < 0x4ec4) {
      if (in_EAX == 0x4ec3) {
        *(uint *)(param_2 + 0x1d0) = *param_1;
        return 0;
      }
      if (0x4e7e < in_EAX) {
        switch(in_EAX) {
        case 0x4e8c:
          goto switchD_100cb64f_caseD_4e8c;
        default:
          return 0x30;
        case 0x4ea2:
          *(uint *)(param_2 + 0x1c4) = *param_1;
          return 0;
        case 0x4eae:
          *(uint *)(param_2 + 0x1e4) = *param_1;
          return 0;
        case 0x4eaf:
          *(uint *)(param_2 + 0x1e8) = *param_1;
          return 0;
        case 0x4eb0:
          *(uint *)(param_2 + 0x1ec) = *param_1;
          return 0;
        case 0x4eb4:
          *(uint *)(param_2 + 0x1c8) = *param_1;
          return 0;
        }
      }
      if (in_EAX == 0x4e7e) {
        *(uint *)(param_2 + 0x1c0) = *param_1;
        return 0;
      }
      if (0x4e2b < in_EAX) {
        if (in_EAX == 0x4e2c) {
          uVar3 = *param_1;
          *(uint *)(param_2 + 0x1ac) = uVar3;
          if (uVar3 == 0) {
            *(undefined4 *)(param_2 + 0x1b0) = 0;
            *(code **)(param_2 + 0x1ac) = _fread;
            return 0;
          }
          *(undefined4 *)(param_2 + 0x1b0) = 1;
          return 0;
        }
        if (in_EAX == 0x4e58) {
          uVar3 = *param_1;
          *(uint *)(param_2 + 0x1b8) = uVar3;
          *(uint *)(param_2 + 0x750) = (uint)(uVar3 != 0);
          return 0;
        }
        if (in_EAX == 0x4e6f) {
          *(uint *)(param_2 + 0x1a4) = *param_1;
          return 0;
        }
        return 0x30;
      }
      if (in_EAX == 0x4e2b) {
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x1a0) = uVar3;
        if (uVar3 == 0) {
          *(undefined4 *)(param_2 + 0x1b4) = 0;
          *(code **)(param_2 + 0x1a0) = _fwrite;
          return 0;
        }
        *(undefined4 *)(param_2 + 0x1b4) = 1;
        return 0;
      }
      if (in_EAX == 0x2817) {
        if ((PTR_DAT_10155510[8] & 4) == 0) {
          return 4;
        }
        iVar7 = FUN_100c9370(param_2 + 0x61c,*param_1);
        return iVar7;
      }
      if (in_EAX == 0x281a) {
        iVar7 = FUN_100c9370(param_2 + 0x67c,*param_1);
        return iVar7;
      }
      if (in_EAX == 0x281d) {
        iVar7 = FUN_100de6f0(param_2 + 0x248,*param_1,0);
        if (iVar7 != 0) {
          return iVar7;
        }
        *(undefined4 *)(param_2 + 0x53c) = 0;
        *(undefined4 *)(param_2 + 1000) = 4;
        return 0;
      }
      return 0x30;
    }
    if (in_EAX < 0x4efc) {
      if (in_EAX == 0x4efb) {
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x1bc) = uVar3;
        *(uint *)(param_2 + 0x750) = (uint)(uVar3 != 0);
        return 0;
      }
      switch(in_EAX) {
      case 0x4ec7:
        *(uint *)(param_2 + 0x18c) = *param_1;
        return 0;
      default:
        return 0x30;
      case 0x4ee4:
        *(uint *)(param_2 + 0x1a8) = *param_1;
        return 0;
      case 0x4ee6:
        *(uint *)(param_2 + 0x6ac) = *param_1;
        return 0;
      case 0x4ee7:
        *(uint *)(param_2 + 0x6b0) = *param_1;
        return 0;
      case 0x4ee8:
        *(uint *)(param_2 + 0x6b4) = *param_1;
        return 0;
      case 0x4ef0:
        *(uint *)(param_2 + 0x1d8) = *param_1;
        return 0;
      }
    }
    switch(in_EAX) {
    case 0x75a3:
      uVar3 = *param_1;
      uVar9 = param_1[1];
      if (0x7fffffff < uVar9) {
        if ((int)uVar9 < -1) {
          return 0x2b;
        }
        if (uVar3 != 0xffffffff) {
          return 0x2b;
        }
      }
      *(uint *)(param_2 + 0x214) = uVar9;
      *(uint *)(param_2 + 0x210) = uVar3;
      return 0;
    case 0x75a4:
      uVar3 = *param_1;
      uVar9 = param_1[1];
      if (0x7fffffff < uVar9) {
        if ((int)uVar9 < -1) {
          return 0x2b;
        }
        if (uVar3 != 0xffffffff) {
          return 0x2b;
        }
      }
      *(uint *)(param_2 + 0x234) = uVar9;
      *(uint *)(param_2 + 0x230) = uVar3;
      return 0;
    case 0x75a5:
      uVar3 = param_1[1];
      if (((int)uVar3 < 1) && ((int)uVar3 < 0)) {
        return 0x2b;
      }
      *(uint *)(param_2 + 0x4e0) = *param_1;
      *(uint *)(param_2 + 0x4e4) = uVar3;
      return 0;
    default:
      goto LAB_100cb938;
    case 0x75a8:
      uVar3 = *param_1;
      uVar9 = param_1[1];
      if (0x7fffffff < uVar9) {
        if ((int)uVar9 < -1) {
          return 0x2b;
        }
        if (uVar3 != 0xffffffff) {
          return 0x2b;
        }
      }
      if (((int)uVar9 < *(int *)(param_2 + 0x194)) ||
         ((((int)uVar9 <= *(int *)(param_2 + 0x194) && (uVar3 <= *(uint *)(param_2 + 400))) ||
          (iVar7 = *(int *)(param_2 + 0x684), *(int *)(param_2 + 0x188) != iVar7))))
      goto LAB_100cb829;
      break;
    case 0x75c1:
      uVar3 = *param_1;
      uVar9 = param_1[1];
      if (((int)uVar9 < 1) && ((int)uVar9 < 0)) {
        return 0x2b;
      }
      *(uint *)(param_2 + 0x224) = uVar9;
      *(uint *)(param_2 + 0x220) = uVar3;
      return 0;
    case 0x75c2:
      uVar3 = *param_1;
      uVar9 = param_1[1];
      if (((int)uVar9 < 1) && ((int)uVar9 < 0)) {
        return 0x2b;
      }
      *(uint *)(param_2 + 0x22c) = uVar9;
      *(uint *)(param_2 + 0x228) = uVar3;
      return 0;
    }
LAB_100cb814:
    (*(code *)PTR__free_101554bc)(iVar7);
    *(undefined4 *)(param_2 + 0x684) = 0;
    *(undefined4 *)(param_2 + 0x188) = 0;
LAB_100cb829:
    *(uint *)(param_2 + 400) = uVar3;
    *(uint *)(param_2 + 0x194) = uVar9;
    return 0;
  }
  if (in_EAX == 0x2719) {
    *(uint *)(param_2 + 0x15c) = *param_1;
    return 0;
  }
  if (0x8a < in_EAX) {
    if (in_EAX < 0xd7) {
      if (in_EAX == 0xd6) {
        if ((int)*param_1 < 0) {
          return 0x2b;
        }
        *(uint *)(param_2 + 0x6c4) = *param_1;
        return 0;
      }
      switch(in_EAX) {
      case 0x8b:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if ((int)uVar3 < 0x10000) {
          uVar2 = FUN_100d9a50(uVar3);
          *(undefined2 *)(param_2 + 0x198) = uVar2;
          return 0;
        }
        return 0x2b;
      case 0x8c:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if ((int)uVar3 < 0x10000) {
          uVar4 = FUN_100d9a30(uVar3);
          *(undefined4 *)(param_2 + 0x19c) = uVar4;
          return 0;
        }
        return 0x2b;
      case 0x8d:
        *(uint *)(param_2 + 0x584) = (uint)(*param_1 != 0);
        return 0;
      case 0x96:
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x408) = (uint)(uVar3 != 0);
        *(uint *)(param_2 + 0x470) = (uint)(uVar3 != 0);
        return 0;
      case 0x9a:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if ((int)uVar3 < 3) {
          *(uint *)(param_2 + 0x56c) = uVar3;
          return 0;
        }
        return 0x2b;
      case 0x9b:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        goto LAB_100c9b48;
      case 0x9c:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        goto LAB_100c9b76;
      case 0x9d:
        *(uint *)(param_2 + 0x58c) = (uint)(*param_1 == 0);
        return 0;
      case 0x9e:
        *(uint *)(param_2 + 0x590) = (uint)(*param_1 == 0);
        return 0;
      case 0x9f:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if ((int)uVar3 < 0x200) {
          *(uint *)(param_2 + 0x594) = uVar3;
          return 0;
        }
        return 0x2b;
      case 0xa0:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if ((int)uVar3 < 0x200) {
          *(uint *)(param_2 + 0x598) = uVar3;
          return 0;
        }
        return 0x2b;
      case 0xa1:
        if (-1 < (int)*param_1) {
          *(uint *)(param_2 + 0x180) = *param_1 & 7;
          return 0;
        }
        return 0x2b;
      case 0xa6:
        if (*param_1 == 0) {
          *(undefined4 *)(param_2 + 0x59c) = 0;
          return 0;
        }
        if (*param_1 == 1) {
          *(undefined4 *)(param_2 + 0x59c) = 1;
          return 0;
        }
        return 0x30;
      case 0xab:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if ((int)uVar3 < 0x10) {
          uVar4 = FUN_100d9a40(uVar3);
          *(undefined4 *)(param_2 + 0x688) = uVar4;
          return 0;
        }
        return 0x2b;
      case 0xac:
        if ((PTR_DAT_10155510[8] & 2) == 0) {
          return 4;
        }
        *(uint *)(param_2 + 0x440) = (uint)(*param_1 != 0);
        return 0;
      case 0xb2:
        if (-1 < (int)*param_1) {
          *(uint *)(param_2 + 0x208) = *param_1;
          return 0;
        }
        return 0x2b;
      case 0xb4:
        *(uint *)(param_2 + 0x694) = (uint)(*param_1 != 0);
        return 0;
      case 0xb5:
        *(uint *)(param_2 + 0x68c) = *param_1;
        return 0;
      case 0xb6:
        *(uint *)(param_2 + 0x690) = *param_1;
        return 0;
      case 0xbc:
        *(uint *)(param_2 + 0x560) = (uint)(*param_1 != 0);
        return 0;
      case 0xbd:
        switch(*param_1) {
        case 1:
          *(undefined4 *)(param_2 + 0x6a0) = 1;
          return 0;
        case 2:
          *(undefined4 *)(param_2 + 0x6a0) = 2;
          return 0;
        case 3:
          *(undefined4 *)(param_2 + 0x6a0) = 3;
          return 0;
        case 4:
          *(undefined4 *)(param_2 + 0x6a0) = 4;
          return 0;
        case 5:
          *(undefined4 *)(param_2 + 0x6a0) = 5;
          return 0;
        case 6:
          *(undefined4 *)(param_2 + 0x6a0) = 6;
          return 0;
        case 7:
          *(undefined4 *)(param_2 + 0x6a0) = 7;
          return 0;
        case 8:
          *(undefined4 *)(param_2 + 0x6a0) = 8;
          return 0;
        case 9:
          *(undefined4 *)(param_2 + 0x6a0) = 9;
          return 0;
        case 10:
          *(undefined4 *)(param_2 + 0x6a0) = 10;
          return 0;
        case 0xb:
          *(undefined4 *)(param_2 + 0x6a0) = 0xb;
          return 0;
        default:
          *(undefined4 *)(param_2 + 0x6a0) = 0;
          return 0;
        }
      case 0xc1:
        *(uint *)(param_2 + 0x4af0) = *param_1;
        return 0;
      case 0xc2:
        *(uint *)(param_2 + 0x4af0) = *param_1;
        return 0;
      case 0xc5:
        *(uint *)(param_2 + 0x6a8) = (uint)(*param_1 != 0);
        return 0;
      case 0xcf:
        *(uint *)(param_2 + 0x528) = (uint)(*param_1 != 0);
        return 0;
      case 0xd2:
        if (-1 < (int)*param_1) {
          *(uint *)(param_2 + 0x6bc) = *param_1;
          return 0;
        }
        return 0x2b;
      case 0xd4:
        if (-1 < (int)*param_1) {
          *(uint *)(param_2 + 0x200) = *param_1;
          return 0;
        }
        return 0x2b;
      case 0xd5:
        *(uint *)(param_2 + 0x6c0) = (uint)(*param_1 != 0);
        return 0;
      }
    }
    else {
      if (in_EAX < 0xf6) {
        if (in_EAX == 0xf5) {
          *(uint *)(param_2 + 0x520) = (uint)(*param_1 != 0);
          return 0;
        }
        switch(in_EAX) {
        case 0xd7:
          if ((int)*param_1 < 0) {
            return 0x2b;
          }
          *(uint *)(param_2 + 0x6c8) = *param_1;
          return 0;
        case 0xd8:
          uVar3 = *param_1;
          *(uint *)(param_2 + 0x424) = uVar3 & 1;
          *(uint *)(param_2 + 0x428) = uVar3 >> 1 & 1;
          return 0;
        default:
          return 0x30;
        case 0xda:
          *(uint *)(param_2 + 0x69c) = (uint)(*param_1 != 0);
          return 0;
        case 0xe1:
          *(uint *)(param_2 + 0x6d4) = (uint)(*param_1 != 0);
          return 0;
        case 0xe2:
          *(uint *)(param_2 + 0x6d8) = (uint)(*param_1 != 0);
          return 0;
        case 0xe3:
          if ((int)*param_1 < 0) {
            return 0x2b;
          }
          *(uint *)(param_2 + 0x6e4) = *param_1;
          return 0;
        case 0xe5:
          *(uint *)(param_2 + 0x3b0) = *param_1 & 1;
          return 0;
        case 0xe8:
          iVar7 = thunk_FUN_100cf7d0();
          if (iVar7 == 0) {
            return 4;
          }
          uVar3 = *param_1;
          *(uint *)(param_2 + 0x404) = (uint)(uVar3 != 0);
          if (*(int *)(param_2 + 8) == 0) {
            return 0;
          }
          *(uint *)(*(int *)(param_2 + 8) + 0x230) = (uint)(uVar3 != 0);
          return 0;
        case 0xe9:
          iVar7 = thunk_FUN_100cf810();
          if (iVar7 == 0) {
            return 4;
          }
          *(uint *)(param_2 + 0x444) = (uint)(*param_1 != 0);
          return 0;
        case 0xea:
          *(uint *)(param_2 + 0x6dc) = (uint)(*param_1 != 0);
          return 0;
        case 0xed:
          *(uint *)(param_2 + 0x6e0) = (uint)(*param_1 != 0);
          return 0;
        case 0xef:
          goto switchD_100ca2a6_caseD_ef;
        case 0xf2:
          *(uint *)(param_2 + 0x20c) = (uint)(*param_1 != 0);
          return 0;
        case 0xf4:
          return 4;
        }
      }
      if (0x10c < in_EAX) {
        switch(in_EAX) {
        case 0x2711:
          *(uint *)(param_2 + 0x158) = *param_1;
          return 0;
        case 0x2712:
          goto switchD_100ca5ab_caseD_2712;
        default:
          return 0x30;
        case 0x2714:
          iVar7 = FUN_100c9370(param_2 + 0x5f4,*param_1);
          return iVar7;
        case 0x2715:
          iVar7 = FUN_100c93b0(param_2 + 0x644);
          return iVar7;
        case 0x2716:
          iVar7 = FUN_100c93b0(param_2 + 0x650);
          return iVar7;
        case 0x2717:
          iVar7 = FUN_100c9370(param_2 + 0x5fc,*param_1);
          return iVar7;
        }
      }
      if (in_EAX == 0x10c) {
        *(uint *)(param_2 + 0x4f8) = (uint)(*param_1 != 0);
        return 0;
      }
      switch(in_EAX) {
      case 0xf8:
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x464) = (uint)(uVar3 != 0);
        if (*(int *)(param_2 + 8) == 0) {
          return 0;
        }
        *(uint *)(*(int *)(param_2 + 8) + 600) = (uint)(uVar3 != 0);
        return 0;
      case 0xf9:
        if (*param_1 != 1) {
          uVar3 = (uint)(*param_1 != 0);
          *(uint *)(param_2 + 0x468) = uVar3;
          if (*(int *)(param_2 + 8) == 0) {
            return 0;
          }
          *(uint *)(*(int *)(param_2 + 8) + 0x25c) = uVar3;
          return 0;
        }
        goto LAB_100ca4fe;
      case 0xfa:
        uVar3 = *param_1;
        if ((int)uVar3 < 0) {
          return 0x2b;
        }
        if (7 < (int)uVar3) {
          return 0x2b;
        }
        *(uint *)(param_2 + 0x460) = uVar3 & 0xffff0000;
        *(uint *)(param_2 + 0x45c) = uVar3 & 0xffff;
        return 0;
      case 0x105:
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x48c) = uVar3 & 1;
        *(uint *)(param_2 + 0x490) = uVar3 >> 1 & 1;
        return 0;
      case 0x109:
        *(uint *)(param_2 + 0x6e8) = (uint)(*param_1 != 0);
        return 0;
      case 0x10b:
        uVar3 = *param_1;
        *(uint *)(param_2 + 0x174) = uVar3;
        if ((uVar3 & 0xfffffffa) == 0) {
          return 0;
        }
        return 4;
      }
    }
LAB_100cb938:
    return 0x30;
  }
  if (in_EAX == 0x8a) {
    uVar3 = *param_1;
    if ((int)uVar3 < 0) {
      return 0x2b;
    }
    if (3 < (int)uVar3) {
      return 0x2b;
    }
    *(uint *)(param_2 + 0x4e8) = uVar3;
    return 0;
  }
  switch(in_EAX) {
  case 3:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 0x10000)) {
      *(uint *)(param_2 + 0x168) = uVar3;
      return 0;
    }
    break;
  default:
    goto LAB_100cb938;
  case 0xd:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 0x20c49b)) {
      uVar3 = uVar3 * 1000;
LAB_100c9b48:
      *(uint *)(param_2 + 0x1f8) = uVar3;
      return 0;
    }
    break;
  case 0xe:
    uVar3 = *param_1;
    if (-2 < (int)uVar3) {
      *(uint *)(param_2 + 0x210) = uVar3;
      *(int *)(param_2 + 0x214) = (int)uVar3 >> 0x1f;
      return 0;
    }
    break;
  case 0x13:
    if (-1 < (int)*param_1) {
      *(uint *)(param_2 + 0x218) = *param_1;
      return 0;
    }
    break;
  case 0x14:
    if (-1 < (int)*param_1) {
      *(uint *)(param_2 + 0x21c) = *param_1;
      return 0;
    }
    break;
  case 0x15:
    uVar3 = *param_1;
    if (-2 < (int)uVar3) {
      *(uint *)(param_2 + 0x230) = uVar3;
      *(int *)(param_2 + 0x234) = (int)uVar3 >> 0x1f;
      return 0;
    }
    break;
  case 0x1b:
    *(uint *)(param_2 + 0x3b8) = (uint)(*param_1 != 0);
    return 0;
  case 0x20:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 8)) {
      *(uint *)(param_2 + 0x3f8) = uVar3 & 0xffff0000;
      *(uint *)(param_2 + 0x3f4) = uVar3 & 0xffff;
      return 0;
    }
    break;
  case 0x21:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 4)) {
      *(uint *)(param_2 + 0x3e0) = uVar3;
      return 0;
    }
    break;
  case 0x22:
    *(uint *)(param_2 + 0x3e4) = *param_1;
    return 0;
  case 0x29:
    *(uint *)(param_2 + 0x548) = (uint)(*param_1 != 0);
    return 0;
  case 0x2a:
    *(uint *)(param_2 + 0x530) = (uint)(*param_1 != 0);
    return 0;
  case 0x2b:
    uVar3 = *param_1;
    *(uint *)(param_2 + 0x518) = (uint)(uVar3 != 0);
    if ((uVar3 != 0) != 0) {
      *(uint *)(param_2 + 0x758) = *(uint *)(param_2 + 0x758) | 0x10;
      return 0;
    }
    *(uint *)(param_2 + 0x758) = *(uint *)(param_2 + 0x758) & 0xffffffef;
    return 0;
  case 0x2c:
    *(uint *)(param_2 + 0x53c) = (uint)(*param_1 != 0);
    return 0;
  case 0x2d:
    *(uint *)(param_2 + 0x51c) = (uint)(*param_1 != 0);
    return 0;
  case 0x2e:
  case 0x36:
    uVar3 = *param_1;
    *(uint *)(param_2 + 0x540) = (uint)(uVar3 != 0);
    if ((uVar3 != 0) != 0) {
      *(undefined4 *)(param_2 + 0x53c) = 0;
      *(undefined4 *)(param_2 + 1000) = 5;
      return 0;
    }
    goto LAB_100c983a;
  case 0x2f:
    if (*param_1 != 0) {
      *(undefined4 *)(param_2 + 0x53c) = 0;
      *(undefined4 *)(param_2 + 1000) = 2;
      return 0;
    }
LAB_100c983a:
    *(undefined4 *)(param_2 + 1000) = 1;
    return 0;
  case 0x30:
    *(uint *)(param_2 + 0x510) = (uint)(*param_1 != 0);
    return 0;
  case 0x32:
    *(uint *)(param_2 + 0x50c) = (uint)(*param_1 != 0);
    return 0;
  case 0x33:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 3)) {
      *(uint *)(param_2 + 0x544) = uVar3;
      return 0;
    }
    break;
  case 0x34:
    *(uint *)(param_2 + 0x524) = (uint)(*param_1 != 0);
    return 0;
  case 0x35:
    *(uint *)(param_2 + 0x508) = (uint)(*param_1 != 0);
    return 0;
  case 0x3a:
    *(uint *)(param_2 + 0x538) = (uint)(*param_1 != 0);
    return 0;
  case 0x3b:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 0x10000)) {
      *(uint *)(param_2 + 0x154) = uVar3;
      return 0;
    }
    break;
  case 0x3c:
    uVar3 = *param_1;
    uVar9 = (int)uVar3 >> 0x1f;
    if ((int)uVar3 < 0 || (int)uVar9 < -1) {
      if ((int)uVar9 < -1) {
        return 0x2b;
      }
      if (uVar3 != 0xffffffff) {
        return 0x2b;
      }
    }
    if (((int)uVar9 < *(int *)(param_2 + 0x194)) ||
       ((((int)uVar9 <= *(int *)(param_2 + 0x194) && (uVar3 <= *(uint *)(param_2 + 400))) ||
        (iVar7 = *(int *)(param_2 + 0x684), *(int *)(param_2 + 0x188) != iVar7))))
    goto LAB_100cb829;
    goto LAB_100cb814;
  case 0x3d:
    *(uint *)(param_2 + 0x504) = (uint)(*param_1 != 0);
    return 0;
  case 0x40:
    uVar3 = *param_1;
    *(uint *)(param_2 + 0x3fc) = (uint)(uVar3 != 0);
    if (*(int *)(param_2 + 8) == 0) {
      return 0;
    }
    *(uint *)(*(int *)(param_2 + 8) + 0x228) = (uint)(uVar3 != 0);
    return 0;
  case 0x44:
    if (-2 < (int)*param_1) {
      *(uint *)(param_2 + 0x17c) = *param_1;
      return 0;
    }
    break;
  case 0x45:
    *(uint *)(param_2 + 0x500) = (uint)(*param_1 != 0);
    return 0;
  case 0x47:
    if (-1 < (int)*param_1) {
      *(uint *)(param_2 + 0x6d0) = *param_1;
      return 0;
    }
    break;
  case 0x4a:
    *(uint *)(param_2 + 0x554) = (uint)(*param_1 != 0);
    return 0;
  case 0x4b:
    *(uint *)(param_2 + 0x550) = (uint)(*param_1 != 0);
    return 0;
  case 0x4e:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 0x20c49b)) {
      uVar3 = uVar3 * 1000;
LAB_100c9b76:
      *(uint *)(param_2 + 0x1fc) = uVar3;
      return 0;
    }
    break;
  case 0x50:
    if (*param_1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_2 + 0x540) = 0;
    *(undefined4 *)(param_2 + 0x53c) = 0;
    *(undefined4 *)(param_2 + 1000) = 1;
    return 0;
  case 0x51:
    if (*param_1 != 1) {
      uVar3 = (uint)(*param_1 != 0);
      *(uint *)(param_2 + 0x400) = uVar3;
      if (*(int *)(param_2 + 8) == 0) {
        return 0;
      }
      *(uint *)(*(int *)(param_2 + 8) + 0x22c) = uVar3;
      return 0;
    }
LAB_100ca4fe:
    FUN_100d8ba0(param_2,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
    return 0x2b;
  case 0x54:
    uVar3 = *param_1;
    if (-1 < (int)uVar3) {
      if (2 < (int)uVar3) {
        return 1;
      }
      *(uint *)(param_2 + 0x3ec) = uVar3;
      return 0;
    }
    break;
  case 0x55:
    *(uint *)(param_2 + 0x558) = (uint)(*param_1 != 0);
    return 0;
  case 0x5a:
    iVar7 = thunk_FUN_100cf7f0(param_2);
    return iVar7;
  case 0x5b:
    *(uint *)(param_2 + 0x574) = (uint)(*param_1 != 0);
    return 0;
  case 0x5c:
    if (-2 < (int)*param_1) {
      *(uint *)(param_2 + 0x4cc) = *param_1;
      return 0;
    }
    break;
  case 0x60:
    *(uint *)(param_2 + 0x3b4) = (uint)(*param_1 != 0);
    return 0;
  case 0x62:
    uVar3 = *param_1;
    if ((int)uVar3 < 0x80001) {
      if ((int)uVar3 < 1) {
        uVar3 = 0x4000;
      }
      else if ((int)uVar3 < 0x400) {
        uVar3 = 0x400;
      }
    }
    else {
      uVar3 = 0x80000;
    }
    if (uVar3 != *(uint *)(param_2 + 0x4d0)) {
      iVar7 = (*(code *)PTR__realloc_101554c0)(*(undefined4 *)(param_2 + 0x854),uVar3 + 1);
      if (iVar7 == 0) {
        *(uint *)(param_2 + 0x4d0) = uVar3;
        return 0x1b;
      }
      *(int *)(param_2 + 0x854) = iVar7;
    }
    *(uint *)(param_2 + 0x4d0) = uVar3;
    return 0;
  case 99:
    *(uint *)(param_2 + 0x570) = (uint)(*param_1 != 0);
    return 0;
  case 0x65:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 8)) {
      *(uint *)(param_2 + 0x4c8) = uVar3;
      return 0;
    }
    break;
  case 0x69:
    *(uint *)(param_2 + 0x52c) = (uint)(*param_1 != 0);
    return 0;
  case 0x6a:
    *(uint *)(param_2 + 0x55c) = (uint)(*param_1 != 0);
    return 0;
  case 0x6b:
    uVar3 = *param_1;
    if (uVar3 == 0) {
      *(undefined4 *)(param_2 + 0x16c) = 0;
      return 0;
    }
    *(uint *)(param_2 + 0x4970) = uVar3 >> 4 & 1;
    if ((uVar3 & 0x10) != 0) {
      uVar3 = uVar3 & 0xffffffef | 2;
    }
    iVar7 = 0;
    do {
      bVar8 = (byte)iVar7;
      iVar7 = iVar7 + 1;
      if ((1 << (bVar8 & 0x1f) & uVar3 & 0xffffffdf) != 0) {
        *(uint *)(param_2 + 0x16c) = uVar3 & 0xffffffdf;
        return 0;
      }
    } while (iVar7 < 0x1f);
    return 4;
  case 0x6e:
    uVar3 = *param_1;
    if (uVar3 == 0) {
      *(undefined4 *)(param_2 + 0x4ec) = 0;
      return 0;
    }
    if (uVar3 == 1) {
      *(undefined4 *)(param_2 + 0x4ec) = 1;
      return 0;
    }
    if (uVar3 == 2) {
      *(undefined4 *)(param_2 + 0x4ec) = 2;
      return 0;
    }
    return 0x30;
  case 0x6f:
    uVar3 = *param_1;
    if (uVar3 == 0) {
      *(undefined4 *)(param_2 + 0x170) = 0;
      return 0;
    }
    *(uint *)(param_2 + 0x4988) = uVar3 >> 4 & 1;
    if ((uVar3 & 0x10) != 0) {
      uVar3 = uVar3 & 0xffffffef | 2;
    }
    iVar7 = 0;
    do {
      bVar8 = (byte)iVar7;
      iVar7 = iVar7 + 1;
      if ((1 << (bVar8 & 0x1f) & uVar3 & 0xffffffdf) != 0) {
        *(uint *)(param_2 + 0x170) = uVar3 & 0xffffffdf;
        return 0;
      }
    } while (iVar7 < 0x1f);
switchD_100ca2a6_caseD_ef:
    return 4;
  case 0x70:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 0x20c49b)) {
      *(uint *)(param_2 + 0x204) = uVar3 * 1000;
      return 0;
    }
    break;
  case 0x71:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 3)) {
      *(uint *)(param_2 + 0x4dc) = uVar3;
      return 0;
    }
    break;
  case 0x72:
    uVar3 = *param_1;
    if (-1 < (int)uVar3) {
      *(uint *)(param_2 + 0x4e0) = uVar3;
      *(int *)(param_2 + 0x4e4) = (int)uVar3 >> 0x1f;
      return 0;
    }
    break;
  case 0x77:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 4)) {
      *(uint *)(param_2 + 0x564) = uVar3;
      return 0;
    }
    break;
  case 0x79:
    *(uint *)(param_2 + 0x578) = (uint)(*param_1 != 0);
    return 0;
  case 0x81:
    uVar3 = *param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < 3)) {
      *(uint *)(param_2 + 0x568) = uVar3;
      return 0;
    }
    break;
  case 0x88:
    *(uint *)(param_2 + 0x57c) = (uint)(*param_1 != 0);
    return 0;
  case 0x89:
    *(uint *)(param_2 + 0x580) = (uint)(*param_1 != 0);
    return 0;
  }
  return 0x2b;
switchD_100ca5ab_caseD_2712:
  if (*(int *)(param_2 + 0x704) != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_2 + 0x700));
    *(undefined4 *)(param_2 + 0x700) = 0;
    *(undefined4 *)(param_2 + 0x704) = 0;
  }
  iVar7 = FUN_100c9370((undefined4 *)(param_2 + 0x604),*param_1);
  *(undefined4 *)(param_2 + 0x700) = *(undefined4 *)(param_2 + 0x604);
  return iVar7;
switchD_100cb64f_caseD_4e8c:
  if ((PTR_DAT_10155510[8] & 8) == 0) {
    return 4;
  }
  *(uint *)(param_2 + 0x438) = *param_1;
  return 0;
switchD_100ca6ce_caseD_27b5:
  puVar10 = (undefined4 *)*param_1;
  if ((puVar10 == (undefined4 *)0x0) ||
     (uVar3 = *(uint *)(param_2 + 0x194), (*(uint *)(param_2 + 400) & uVar3) == 0xffffffff)) {
    local_c = FUN_100c9370(param_2 + 0x684,puVar10);
  }
  else {
    if ((-1 < (int)uVar3) && ((int)uVar3 < 1)) {
      (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_2 + 0x684));
      *(undefined4 *)(param_2 + 0x684) = 0;
      iVar7 = *(int *)(param_2 + 400);
      if (iVar7 == 0 && *(int *)(param_2 + 0x194) == 0) {
        iVar7 = 1;
      }
      puVar5 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(iVar7);
      if (puVar5 != (undefined4 *)0x0) {
        if (*(int *)(param_2 + 400) != 0 || *(int *)(param_2 + 0x194) != 0) {
          uVar3 = *(uint *)(param_2 + 400);
          puVar11 = puVar5;
          for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
        }
        *(undefined4 **)(param_2 + 0x684) = puVar5;
        goto LAB_100ca884;
      }
    }
    local_c = 0x1b;
  }
LAB_100ca884:
  *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_2 + 1000) = 2;
  return local_c;
}


/* END FUNCTION 0x100c9470 */
