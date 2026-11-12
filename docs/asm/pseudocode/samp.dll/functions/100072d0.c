/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100072d0
 * Name: FUN_100072d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100072d0(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  SHORT SVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1[0x3d] != 0) {
    if (*param_1 == 0) goto LAB_100077b8;
    FUN_10070630(0);
    if (((param_1[0x3e] == 0) && (cVar1 = FUN_100aba60(), cVar1 == '6')) ||
       (iVar4 = FUN_100aba30(), iVar4 != 0)) {
      if (param_1[0x4b] == 0) {
        if (*(int *)((int)param_1 + 0x2fe) == 0) goto LAB_10007349;
      }
      else if (*(int *)((int)param_1 + 0x2fe) == 0) {
        FUN_10003b20();
        goto LAB_10007349;
      }
      param_1[0x3d] = 0;
      *(undefined4 *)((int)param_1 + 0x181) = 0;
LAB_10007349:
      param_1[0x4b] = 0;
      *(undefined1 *)((int)param_1 + 0x313) = 0;
      param_1[0xc5] = -1;
      param_1[0xc6] = 0;
      iVar4 = FUN_100ad760();
      if (iVar4 != 0) {
        FUN_100ad720();
      }
      iVar4 = FUN_100adca0();
      if (iVar4 != 0) {
        FUN_100adc70(0);
      }
      iVar4 = FUN_100ade60();
      if (iVar4 != 0) {
        FUN_100adde0();
      }
      iVar4 = FUN_100ad890();
      if (iVar4 != 0) {
        FUN_100ad800();
      }
      FUN_100adbb0(0);
      FUN_100ac3b0(1);
      if (param_1[0x75] != 0) {
        param_1[0x75] = 0;
        (**(code **)(*(int *)*param_1 + 4))();
      }
      iVar4 = FUN_100aba90();
      if ((iVar4 != 0) && (iVar4 = FUN_100abbe0(), iVar4 == 0)) {
        FUN_10006e80();
        uVar5 = FUN_100abc20();
        uVar2 = FUN_1001e650(uVar5);
        *(undefined2 *)((int)param_1 + 0xfe) = uVar2;
      }
      FUN_100acd10();
      FUN_10005660();
      param_1[0x3d] = 0;
      param_1[0x3e] = 1;
      FUN_100a1340(0);
      return 1;
    }
    uVar6 = FUN_100af1d0(&local_8,&local_4);
    FUN_10004710();
    iVar4 = FUN_100ad760();
    if (iVar4 != 0) {
      FUN_100a1bd0(0);
      FUN_100afcb0();
      iVar4 = FUN_100a70f0();
      if (*(short *)(iVar4 + 0x1e) != 0) {
        FUN_100ad720();
      }
    }
    iVar4 = FUN_100acb10();
    if (iVar4 != 0) {
      FUN_100acb40();
    }
    iVar4 = FUN_100aca60();
    if (iVar4 != 0) {
      FUN_100acab0();
    }
    iVar4 = FUN_100ac780();
    if ((iVar4 != 0) && (iVar4 = FUN_100a70f0(), *(short *)(iVar4 + 0x1e) != 0)) {
      FUN_100ac3b0(1);
    }
    iVar4 = FUN_100ade60();
    if (((iVar4 != 0) && (iVar4 = FUN_100a70f0(), *(short *)(iVar4 + 0x1e) != 0)) ||
       ((iVar4 = FUN_100ade60(), iVar4 != 0 && (iVar4 = FUN_100aba90(), iVar4 != 0)))) {
      FUN_100adde0();
    }
    iVar4 = FUN_100ad890();
    if (iVar4 != 0) {
      iVar4 = FUN_100a70f0();
      if ((*(short *)(iVar4 + 0x1e) == 0) && (iVar4 = FUN_100aba90(), iVar4 == 0)) {
        FUN_100ad8a0();
      }
      else {
        FUN_100ad800();
      }
    }
    FUN_100ad9f0();
    iVar4 = FUN_100aba90();
    if ((iVar4 != 0) && (iVar4 = FUN_100ad760(), iVar4 != 0)) {
      FUN_100ad720();
    }
    FUN_100ae120();
    iVar4 = FUN_100ae390();
    if (iVar4 == 0) {
      if ((param_1[0x40] != 0) && (param_1[0x41] != 0)) {
        param_1[0x40] = 0;
      }
    }
    else {
      param_1[0x40] = iVar4;
      param_1[0x41] = 0;
    }
    DVar7 = GetTickCount();
    if (((DAT_1013c0a4 != -1) && (5000 < DVar7 - DAT_1013c0a4)) &&
       (iVar4 = FUN_100aba90(), iVar4 == 0)) {
      FUN_1009d580();
      DAT_1013c0a4 = -1;
    }
    if (*(int *)((int)param_1 + 0x30e) <= (int)DVar7) {
      FUN_100a1340(*(undefined1 *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x21));
    }
    FUN_100a1d40();
    if (1000 < DVar7 - *(int *)((int)param_1 + 0x13f)) {
      FUN_10005b50();
      *(DWORD *)((int)param_1 + 0x13f) = DVar7;
    }
    FUN_100060d0();
    cVar1 = FUN_100a0d00();
    if (cVar1 != *(char *)((int)param_1 + 0x1d3)) {
      FUN_100057c0(cVar1);
    }
    FUN_100045c0();
    if (param_1[0x4b] == 0) {
      cVar1 = FUN_100aba60();
      if ((cVar1 == '2') && (iVar4 = FUN_100abbe0(), iVar4 == 0)) {
        FUN_100abd30();
        FUN_10002fd0();
        FUN_10003ea0();
        if (1000 < DVar7 - *(int *)((int)param_1 + 0x13b)) {
          *(DWORD *)((int)param_1 + 0x13b) = DVar7;
          FUN_10005090();
        }
        if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) != 0) {
          uVar5 = FUN_100abc20();
          uVar2 = FUN_1001e650(uVar5);
          *(undefined2 *)(param_1 + 0x3f) = uVar2;
        }
        iVar4 = param_1[0x3f];
        iVar8 = FUN_10001120((short)iVar4);
        FUN_10005c20((short)iVar4);
        if (iVar8 == 0) {
LAB_10007736:
          if (param_1[0x75] != 0) goto LAB_10007740;
        }
        else {
          if (param_1[0x75] == 0) {
            iVar4 = FUN_100b7940();
            if (iVar4 != 0) {
              (**(code **)(*(int *)*param_1 + 8))();
              param_1[0x75] = 1;
            }
            goto LAB_10007736;
          }
LAB_10007740:
          if (iVar8 == 0) {
            FUN_100ab990(0);
            FUN_100afbd0();
          }
          if (((param_1[0x75] != 0) && (iVar8 != 0)) &&
             (fVar13 = (float10)FUN_100b6de0(), (float10)0.0 == fVar13)) {
            FUN_100ab990(0);
            FUN_100afbd0();
          }
        }
        uVar6 = FUN_100039c0();
        if (uVar6 < DVar7 - *(int *)((int)param_1 + 0x133)) {
          DVar7 = GetTickCount();
          *(DWORD *)((int)param_1 + 0x133) = DVar7;
          FUN_10006e80();
        }
        *(undefined4 *)((int)param_1 + 0x1cf) = 0;
      }
      else {
        cVar1 = FUN_100aba60();
        if ((cVar1 == '\x01') || (cVar1 = FUN_100aba60(), cVar1 == '\f')) {
          FUN_10003650();
          FUN_10002fd0();
          if (param_1[0x75] != 0) {
            param_1[0x75] = 0;
            (**(code **)(*(int *)*param_1 + 4))();
          }
          FUN_10006de0();
          FUN_10003e40();
          if ((short)param_1[0x3f] != -1) {
            *(short *)((int)param_1 + 0xfe) = (short)param_1[0x3f];
            *(undefined2 *)(param_1 + 0x3f) = 0xffff;
          }
          iVar4 = FUN_100041c0(uVar6,local_4,local_8);
          if ((iVar4 != 0) ||
             (uVar9 = FUN_10003a00(), uVar9 < DVar7 - *(int *)((int)param_1 + 0x133))) {
            DVar10 = GetTickCount();
            *(DWORD *)((int)param_1 + 0x133) = DVar10;
            FUN_10004db0();
          }
          if ((uVar6 & 0x84) == 0) {
            uVar6 = DVar7 - *(int *)((int)param_1 + 0x13b);
            bVar11 = uVar6 < 1000;
            bVar12 = uVar6 == 1000;
          }
          else if (DAT_10156ab0 == 2) {
            uVar6 = DVar7 - *(int *)((int)param_1 + 0x13b);
            bVar11 = uVar6 < DAT_1013c0b0;
            bVar12 = uVar6 == DAT_1013c0b0;
          }
          else {
            uVar6 = DVar7 - *(int *)((int)param_1 + 0x13b);
            bVar11 = uVar6 < 100;
            bVar12 = uVar6 == 100;
          }
          if (!bVar11 && !bVar12) {
            *(DWORD *)((int)param_1 + 0x13b) = DVar7;
            FUN_10005090();
          }
          *(undefined4 *)((int)param_1 + 0x1cf) = 0;
        }
        else {
          cVar1 = FUN_100aba60();
          if ((cVar1 == '2') && (iVar4 = FUN_100abbe0(), iVar4 != 0)) {
            FUN_10002fd0();
            if (param_1[0x75] != 0) {
              param_1[0x75] = 0;
              (**(code **)(*(int *)*param_1 + 4))();
            }
            iVar4 = FUN_100a70f0();
            FUN_100ab870();
            if (*(int *)((int)param_1 + 0x1cf) == 0) {
              if ((*(short *)(iVar4 + 0x24) != 0) && (iVar4 = FUN_100acbb0(), iVar4 != 0)) {
                *(undefined4 *)((int)param_1 + 0x1cf) = 1;
              }
            }
            else {
              cVar1 = FUN_100ab870();
              if (((cVar1 == '\0') || (iVar4 = FUN_100abd80(), iVar4 == 0)) &&
                 (*(int *)((int)param_1 + 0x1cf) != 0)) {
                FUN_100acca0();
                *(undefined4 *)((int)param_1 + 0x1cf) = 0;
              }
            }
            uVar6 = FUN_100039c0();
            if (uVar6 < DVar7 - *(int *)((int)param_1 + 0x133)) {
              DVar7 = GetTickCount();
              *(DWORD *)((int)param_1 + 0x133) = DVar7;
              FUN_10005400();
            }
          }
        }
      }
    }
    else {
      FUN_10006360();
      *(undefined4 *)((int)param_1 + 0x1cf) = 0;
    }
LAB_100077b8:
    if (param_1[0x3d] != 0) goto LAB_100077de;
  }
  if ((*param_1 != 0) && (iVar4 = FUN_100adba0(), 0 < iVar4)) {
    FUN_100adbb0(0);
    FUN_100ad9f0();
  }
LAB_100077de:
  if ((param_1[0x4b] != 0) && (param_1[0x3d] == 0)) {
    if (*(int *)((int)param_1 + 0x30a) == 1) {
      *(undefined4 *)((int)param_1 + 0x30a) = 0;
      if (DAT_102acabc != 0) {
        *(undefined1 *)(DAT_102acabc + 0x13) = 0;
      }
      FUN_100a0530(0,0);
    }
    FUN_10006360();
    return 1;
  }
  if ((*(int *)((int)param_1 + 0x2fe) == 0) && (SVar3 = GetAsyncKeyState(0x73), SVar3 != 0)) {
    *(undefined4 *)((int)param_1 + 0x2fe) = 1;
    FUN_10067ae0(DAT_102aca10,"Returning to class selection after next death");
  }
  if (((param_1[0x3e] == 0) || (cVar1 = FUN_100aba60(), cVar1 == '7')) ||
     (cVar1 = FUN_100aba60(), cVar1 == '6')) {
    cVar1 = FUN_100aba60();
    if (((cVar1 != '7') && (cVar1 = FUN_100aba60(), cVar1 != '6')) &&
       ((*(int *)(DAT_102aca24 + 0x3cd) == 5 && ((param_1[0x3d] == 0 && (param_1[0x4b] == 0)))))) {
      FUN_10005f40();
    }
  }
  else {
    iVar4 = FUN_100aea30();
    if (iVar4 != 0) {
      FUN_100b06b0();
    }
    iVar4 = FUN_100acb10();
    if (iVar4 != 0) {
      FUN_100acb20(0);
    }
    if (((*(int *)((int)param_1 + 0x143) == 0) || (*(int *)((int)param_1 + 0x2fe) != 0)) ||
       (*(int *)(DAT_102aca24 + 0x3cd) != 5)) {
      param_1[0x3e] = 0;
      FUN_10003f60();
      *(undefined4 *)((int)param_1 + 0x2fe) = 0;
      return 1;
    }
    fVar13 = (float10)FUN_100ab970();
    if ((float10)0.0 < fVar13) {
      FUN_10003b20();
      return 1;
    }
  }
  return 1;
}


/* END FUNCTION 0x100072d0 */
