/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090360
 * Name: FUN_10090360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10090360(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  int *piStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  int *piStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int *piStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int *piStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int *piStack_248;
  int *piStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int *piStack_238;
  undefined4 uStack_234;
  int *piStack_230;
  undefined4 uStack_22c;
  int *piStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int *piStack_21c;
  undefined4 uStack_218;
  int *piStack_214;
  undefined4 uStack_210;
  int *piStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int *piStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int *piStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  int *piStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int *piStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int *piStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int *piStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  
  if (*(double *)(param_1 + 7) < _DAT_10180608) {
    fVar8 = (float10)FUN_1007d450();
    *(double *)(param_1 + 7) = (double)fVar8;
    FUN_10089750();
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    piVar2 = (int *)(*(undefined4 **)(param_1 + 0x13a))[8];
    piStack_194 = (int *)**(undefined4 **)(param_1 + 0x13a);
    uStack_198 = 0x10090493;
    (**(code **)(*piStack_194 + 0x10))();
    piStack_19c = *(int **)(*(int *)(param_1 + 0x13a) + 4);
    uStack_198 = 1;
    uStack_1a0 = 0x100904a4;
    (**(code **)(*piStack_19c + 0x20))();
    uStack_1a0 = 1;
    uStack_1a4 = 0x1b;
    uStack_1ac = 0x100904b1;
    piStack_1a8 = piVar2;
    (**(code **)(*piVar2 + 0xe4))();
    uStack_1ac = 5;
    uStack_1b0 = 0x13;
    uStack_1b8 = 0x100904be;
    piStack_1b4 = piVar2;
    (**(code **)(*piVar2 + 0xe4))();
    uStack_1b8 = 6;
    uStack_1bc = 0x14;
    uStack_1c4 = 0x100904cb;
    piStack_1c0 = piVar2;
    (**(code **)(*piVar2 + 0xe4))();
    uStack_1c4 = 0;
    uStack_1c8 = 0xf;
    uStack_1d0 = 0x100904d9;
    piStack_1cc = piVar2;
    (**(code **)(*piVar2 + 0xe4))();
    uStack_1d0 = 3;
    uStack_1d4 = 1;
    uStack_1d8 = 0;
    uStack_1e0 = 0x100904e7;
    piStack_1dc = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_1e0 = 0;
    uStack_1e4 = 3;
    uStack_1e8 = 0;
    uStack_1f0 = 0x100904f4;
    piStack_1ec = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_1f0 = 2;
    uStack_1f4 = 4;
    uStack_1f8 = 0;
    uStack_200 = 0x10090502;
    piStack_1fc = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_200 = 0;
    uStack_204 = 5;
    uStack_208 = 0;
    uStack_210 = 0x1009050f;
    piStack_20c = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_210 = 0;
    uStack_218 = 0x10090519;
    piStack_214 = piVar2;
    (**(code **)(*piVar2 + 0x170))();
    uStack_218 = 0;
    uStack_220 = 0x10090523;
    piStack_21c = piVar2;
    (**(code **)(*piVar2 + 0x1ac))();
    uStack_220 = 0;
    uStack_224 = 7;
    uStack_22c = 0x1009052f;
    piStack_228 = piVar2;
    (**(code **)(*piVar2 + 0xe4))();
    if (*(char *)(param_1 + 0x15) == '\0') {
      uStack_22c = DAT_10140bf8;
      uStack_234 = 0x10090546;
      piStack_230 = piVar2;
      (**(code **)(*piVar2 + 0x164))();
      uStack_234 = 0x1c;
      piStack_238 = &uStack_210;
      uStack_23c = 2;
      uStack_240 = 6;
      piStack_248 = (int *)0x1009055a;
      piStack_244 = piVar2;
      (**(code **)(*piVar2 + 0x14c))();
    }
    uStack_22c = 4;
    piStack_230 = (int *)0x1;
    uStack_234 = 0;
    uStack_23c = 0x10090568;
    piStack_238 = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_23c = 2;
    uStack_240 = 2;
    piStack_244 = (int *)0x0;
    uStack_24c = 0x10090576;
    piStack_248 = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_24c = 0;
    uStack_250 = 3;
    uStack_254 = 0;
    uStack_25c = 0x10090583;
    piStack_258 = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_25c = 4;
    uStack_260 = 4;
    uStack_264 = 0;
    uStack_26c = 0x10090591;
    piStack_268 = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_26c = 2;
    uStack_270 = 5;
    uStack_274 = 0;
    uStack_27c = 0x1009059f;
    piStack_278 = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_27c = 0;
    uStack_280 = 6;
    uStack_284 = 0;
    uStack_28c = 0x100905ac;
    piStack_288 = piVar2;
    (**(code **)(*piVar2 + 0x10c))();
    uStack_28c = 2;
    iStack_290 = 6;
    uStack_294 = 0;
    (**(code **)(*piVar2 + 0x114))(piVar2);
    iVar7 = *piVar2;
    iVar4 = FUN_10086b70(0);
    (**(code **)(iVar7 + 0x104))(piVar2,0,*(undefined4 *)(iVar4 + 0x104));
    if (*(char *)(param_1 + 0x14) != '\0') {
      uStack_28c = *(undefined4 *)(param_1 + 0x11e);
      iStack_290 = -*(int *)(param_1 + 0x126);
      uStack_294 = 0;
      piStack_288 = (int *)0x0;
      FUN_10086e20(param_1 + 0x176,&uStack_294);
      ppiVar5 = &piStack_214;
      uStack_294 = 5;
      iVar4 = 0x100;
      iVar7 = (param_1 + 0x16) - (int)ppiVar5;
      do {
        cVar1 = *(char *)((int)ppiVar5 + iVar7);
        if (cVar1 == '\0') {
          if (iVar4 != 0) goto LAB_1009063a;
          break;
        }
        *(char *)ppiVar5 = cVar1;
        ppiVar5 = (int **)((int)ppiVar5 + 1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      ppiVar5 = (int **)((int)ppiVar5 + -1);
LAB_1009063a:
      *(char *)ppiVar5 = '\0';
      FUN_1008cae0(&piStack_214,param_1 + 0x176,&uStack_294,0,0xffffffff);
    }
    if (*(char *)(param_1 + 0x15) == '\0') {
      iVar7 = 0;
      piVar6 = DAT_10180610;
      if (0 < *(int *)(param_1 + 0x162)) {
        do {
          piVar3 = *(int **)(*(int *)(param_1 + 0x15e) + iVar7 * 4);
          if (piVar3 != piVar6) {
            (**(code **)(*piVar3 + 0xc))(piVar2,0x3f800000);
            piVar6 = DAT_10180610;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x162));
      }
      if ((piVar6 != (int *)0x0) && (piVar6[6] == param_1)) {
        (**(code **)(*piVar6 + 0xc))(piVar2,0x3f800000);
      }
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x13a) + 4);
    (**(code **)(*piVar2 + 0x2c))(piVar2);
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x13a) + 0x14))
              ((int *)**(undefined4 **)(param_1 + 0x13a));
  }
  return 0;
}


/* END FUNCTION 0x10090360 */
