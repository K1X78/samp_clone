/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100751b0
 * Name: FUN_100751b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100751b0(void)

{
  undefined1 uVar1;
  SHORT SVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  int *piVar8;
  float *pfVar9;
  float10 fVar10;
  undefined4 local_290;
  undefined4 local_28c;
  float local_248;
  float local_244;
  float local_240;
  undefined1 local_238 [280];
  char local_120 [248];
  void *pvStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1011626b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_1016be7c != 0) {
    ExceptionList = &pvStack_14;
    FUN_10075040();
  }
  FUN_10073f10();
  iVar4 = FUN_100a0760();
  if (iVar4 != 0) {
    iVar4 = FUN_100a0760();
    if ((((iVar4 != 0) && (DAT_102aca24 != 0)) && (_DAT_00ba6774 != 0)) &&
       ((uVar3 = GetAsyncKeyState(2), (uVar3 & 1) != 0 && (DAT_00ba8298 == '\0')))) {
      psVar7 = (short *)&DAT_00ba873d;
      iVar4 = 0xaf;
      do {
        if (*psVar7 == 0x1203) {
          local_28c = *(undefined4 *)((int)psVar7 + -0x1d);
          local_290 = *(undefined4 *)((int)psVar7 + -0x19);
        }
        psVar7 = psVar7 + 0x14;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_1001f1f0();
      local_c = 0;
      FUN_1001faa0();
      FUN_1001faa0();
      (*DAT_10140bdc)(local_28c,local_290);
      FUN_1001faa0();
      (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011bbd4,local_238,1,8,0,0);
      local_c = 0xffffffff;
      FUN_1001f390();
    }
    goto LAB_100756e6;
  }
  if (DAT_102aca24 != 0) {
    iVar4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    FUN_10073cb0();
    FUN_10074dc0();
    if (DAT_102aca1c != 0) {
      FUN_10066530();
    }
    if (DAT_102aca48 != '\0') {
      if (DAT_102ac9ec != 0) {
        FUN_1006b6b0();
      }
      pfVar9 = (float *)(iVar4 + 0x11ad8);
      piVar8 = (int *)(iVar4 + 0x3074);
      iVar4 = 0;
      uVar3 = 0;
      do {
        if (((*piVar8 == 1) && (piVar8[-2000] != 0)) &&
           (fVar10 = (float10)FUN_1009ef00(), fVar10 < (float10)20.0 != (fVar10 == (float10)20.0)))
        {
          FUN_1009e950();
          uVar1 = FUN_100b7e70((double)local_248,(double)local_244,(double)local_240,
                               (double)pfVar9[-1],(double)*pfVar9,(double)pfVar9[1]);
          fVar10 = (float10)FUN_1009ef00(uVar1);
          iVar5 = FUN_1009ee70((double)fVar10);
          fVar10 = (float10)FUN_100b6de0(*(undefined1 *)(iVar5 + -0x122 + DAT_102aca3c));
          uVar6 = FUN_100b6ed0((double)fVar10);
          uVar6 = FUN_1009ee70(uVar6);
          _sprintf(local_120,
                   "[id: %d, type: %d subtype: %d Health: %.1f preloaded: %u]\nDistance: %.2fm\nPassengerSeats: %u\ncPos: %.3f,%.3f,%.3f\nsPos: %.3f,%.3f,%.3f"
                   ,iVar4,uVar6);
          FUN_1006b6d0();
        }
        uVar3 = uVar3 + 1;
        piVar8 = piVar8 + 1;
        iVar4 = iVar4 + 1;
        pfVar9 = pfVar9 + 3;
      } while (uVar3 < 2000);
      if (DAT_102ac9ec != 0) {
        FUN_1006b6c0();
      }
    }
    if (DAT_102aca24 != 0) {
      if (*DAT_102ac9dc != 0) {
        FUN_100a1bd0();
        FUN_1006eaf0();
        goto LAB_100756e6;
      }
      SVar2 = GetAsyncKeyState(0x74);
      if ((SVar2 != 0) && (*(int *)(DAT_102aca24 + 0x3cd) == 5)) {
        FUN_100a1bd0();
        if (DAT_102ac9fc != 0) {
          FUN_100607f0();
        }
        goto LAB_100756e6;
      }
      if (DAT_102aca24 != 0) {
        SVar2 = GetAsyncKeyState(0x79);
        if (SVar2 != 0) {
          FUN_100a1bd0();
          if (DAT_102aca00 != 0) {
            FUN_10070d00();
          }
          goto LAB_100756e6;
        }
        if (((DAT_102aca24 != 0) && (SVar2 = GetAsyncKeyState(0x70), SVar2 != 0)) &&
           (DAT_102aca04 != 0)) {
          FUN_1006b570();
        }
      }
    }
  }
  FUN_100a1bd0();
  if ((DAT_102aca3c != 0) && (iVar4 = FUN_10001010(), iVar4 != 0)) {
    FUN_10001010();
    iVar4 = FUN_100adba0();
    if (5000 < iVar4) {
      FUN_100a1bd0();
    }
  }
  if (DAT_102aca08 != 0) {
    FUN_10066950();
  }
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x1c) != 0)) {
    FUN_10001350();
  }
  if (DAT_102aca10 != 0) {
    FUN_10067870();
  }
  if (DAT_102aca14 != 0) {
    FUN_10069130();
  }
  if (DAT_102aca18 != 0) {
    FUN_10069d20();
  }
  if (DAT_102aca24 != 0) {
    if (DAT_102ac9e0 != 0) {
      FUN_1006f2d0();
    }
    if (DAT_102aca24 != 0) {
      if (DAT_102ac9e4 != 0) {
        FUN_10071560();
      }
      if ((DAT_102aca24 != 0) && (DAT_102ac9e8 != 0)) {
        FUN_1006a350();
      }
    }
  }
  if (DAT_102acab4 != 0) {
    FUN_10090360();
  }
  if (DAT_102acabc != 0) {
    FUN_10090360();
  }
  if (DAT_102ac9f0 != 0) {
    FUN_10073220();
  }
  if (DAT_102ac9f4 != 0) {
    FUN_1006d640();
  }
  if (DAT_102ac9f8 != 0) {
    FUN_10070eb0();
  }
LAB_100756e6:
  if (DAT_102abe78 != 0) {
    FUN_1009e2d0();
  }
  FUN_1009d6f0();
  uVar6 = (**(code **)(*DAT_102ac9d0 + 0x44))();
  FUN_1009d6f0();
  ExceptionList = pvStack_28;
  return uVar6;
}


/* END FUNCTION 0x100751b0 */
