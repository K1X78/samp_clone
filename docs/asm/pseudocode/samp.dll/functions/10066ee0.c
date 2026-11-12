/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066ee0
 * Name: FUN_10066ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10066ee0(int param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uStack_2cc;
  int *piStack_2c8;
  undefined4 uStack_2c4;
  undefined4 *puStack_2c0;
  int iStack_2bc;
  undefined4 *puStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  int *piStack_2ac;
  undefined4 uStack_2a8;
  undefined4 *puStack_2a4;
  int iStack_2a0;
  undefined4 *puStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int *piStack_290;
  undefined4 uStack_28c;
  undefined4 *puStack_288;
  int iStack_284;
  undefined4 *puStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int *piStack_274;
  undefined4 uStack_270;
  undefined4 *puStack_26c;
  int iStack_268;
  undefined4 *puStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int *piStack_258;
  undefined4 uStack_254;
  undefined1 *puStack_250;
  int iStack_24c;
  undefined4 *puStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int *piStack_23c;
  undefined4 uStack_238;
  char *pcStack_234;
  char *pcStack_230;
  char local_208;
  undefined4 local_207;
  
  piVar2 = (int *)(*(undefined4 **)(param_1 + 0x63a2))[2];
  piVar3 = (int *)**(undefined4 **)(param_1 + 0x63a2);
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 8) == 2) {
    puVar6 = &local_207;
    for (iVar5 = 0x7f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    pcStack_230 = (char *)0x10066f44;
    local_208 = cVar1;
    _strncpy(&local_208,param_2,0x1ff);
    pcStack_230 = &local_208;
    pcStack_234 = (char *)0x10066f4e;
    FUN_100b5c00();
    pcVar7 = &local_208;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar7 - (int)&local_207;
    piStack_290 = piVar2;
    iStack_284 = iVar5;
    piStack_274 = piVar2;
    iStack_268 = iVar5;
    piStack_258 = piVar2;
    iStack_24c = iVar5;
    piStack_23c = piVar2;
    pcStack_230 = (char *)iVar5;
    if (_DAT_00c17044 < 0x501) {
      uStack_238 = *(undefined4 *)(param_1 + 0x63a6);
      pcStack_234 = &local_208;
      param_4 = param_4 + -1;
      uStack_240 = 0x10067177;
      (**(code **)(*piVar2 + 0x38))();
      uStack_240 = 0xff000000;
      uStack_244 = 0x120;
      puStack_248 = &param_3;
      uStack_254 = *(undefined4 *)(param_1 + 0x63a6);
      puStack_250 = &stack0xfffffddc;
      param_4 = param_4 + 2;
      uStack_25c = 0x100671a1;
      (**(code **)(*piVar2 + 0x38))();
      uStack_25c = 0xff000000;
      param_4 = param_4 + -1;
      uStack_260 = 0x120;
      puStack_264 = &param_3;
      uStack_270 = *(undefined4 *)(param_1 + 0x63a6);
      puStack_26c = &uStack_240;
      param_3 = param_3 + -1;
      uStack_278 = 0x100671d0;
      (**(code **)(*piVar2 + 0x38))();
      uStack_278 = 0xff000000;
      uStack_27c = 0x120;
      puStack_280 = &param_3;
      uStack_28c = *(undefined4 *)(param_1 + 0x63a6);
      puStack_288 = &uStack_25c;
      param_3 = param_3 + 2;
      uStack_294 = 0x100671fa;
      (**(code **)(*piVar2 + 0x38))();
      param_3 = param_3 + -1;
    }
    else {
      param_4 = param_4 + -2;
      uStack_238 = *(undefined4 *)(param_1 + 0x63a6);
      param_6 = param_6 + -2;
      pcStack_234 = &local_208;
      uStack_240 = 0x10066fa7;
      (**(code **)(*piVar2 + 0x38))();
      param_4 = param_4 + 1;
      param_6 = param_6 + 1;
      uStack_240 = 0xff000000;
      param_3 = param_3 + -1;
      uStack_244 = 0x120;
      puStack_248 = &param_3;
      uStack_254 = *(undefined4 *)(param_1 + 0x63a6);
      puStack_250 = &stack0xfffffddc;
      param_5 = param_5 + -1;
      uStack_25c = 0x10066fe4;
      (**(code **)(*piVar2 + 0x38))();
      uStack_25c = 0xff000000;
      param_3 = param_3 + 2;
      uStack_260 = 0x120;
      param_5 = param_5 + 2;
      puStack_264 = &param_3;
      uStack_270 = *(undefined4 *)(param_1 + 0x63a6);
      puStack_26c = &uStack_240;
      uStack_278 = 0x10067015;
      (**(code **)(*piVar2 + 0x38))();
      param_3 = param_3 + -1;
      param_5 = param_5 + -1;
      uStack_278 = 0xff000000;
      param_4 = param_4 + 3;
      uStack_27c = 0x120;
      param_6 = param_6 + 3;
      puStack_280 = &param_3;
      puStack_288 = &uStack_25c;
      uStack_28c = *(undefined4 *)(param_1 + 0x63a6);
      uStack_294 = 0x10067058;
      (**(code **)(*piVar2 + 0x38))();
      param_4 = param_4 + -1;
      param_6 = param_6 + -1;
      uStack_294 = 0xff000000;
      param_3 = param_3 + -1;
      uStack_298 = 0x120;
      puStack_29c = &param_3;
      uStack_2a8 = *(undefined4 *)(param_1 + 0x63a6);
      puStack_2a4 = &uStack_278;
      param_5 = param_5 + -1;
      uStack_2b0 = 0x10067095;
      piStack_2ac = piVar2;
      iStack_2a0 = iVar5;
      (**(code **)(*piVar2 + 0x38))();
      uStack_2b0 = 0xff000000;
      param_3 = param_3 + 2;
      uStack_2b4 = 0x120;
      param_5 = param_5 + 2;
      puStack_2b8 = &param_3;
      uStack_2c4 = *(undefined4 *)(param_1 + 0x63a6);
      puStack_2c0 = &uStack_294;
      uStack_2cc = 0x100670c6;
      piStack_2c8 = piVar2;
      iStack_2bc = iVar5;
      (**(code **)(*piVar2 + 0x38))();
      param_4 = param_4 + -1;
      uStack_2cc = 0xff000000;
      param_6 = param_6 + -1;
      param_3 = param_3 + -3;
      param_5 = param_5 + -3;
      (**(code **)(*piVar2 + 0x38))
                (piVar2,*(undefined4 *)(param_1 + 0x63a6),&uStack_2b0,iVar5,&param_3,0x120);
      param_3 = param_3 + 4;
      param_5 = param_5 + 4;
      (**(code **)(*piVar2 + 0x38))
                (piVar2,*(undefined4 *)(param_1 + 0x63a6),&uStack_2cc,iVar5,&param_3,0x120,
                 0xff000000);
      param_3 = param_3 + -2;
      param_5 = param_5 + -2;
    }
  }
  pcStack_234 = param_2;
  uStack_238 = *(undefined4 *)(param_1 + 0x63a6);
  uStack_240 = 0x1006722a;
  piStack_23c = piVar3;
  pcStack_230 = (char *)((int)pcVar4 - (int)(param_2 + 1));
  (**(code **)(*piVar3 + 0x38))();
  return;
}


/* END FUNCTION 0x10066ee0 */
