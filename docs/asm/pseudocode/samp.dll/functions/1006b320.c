/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b320
 * Name: FUN_1006b320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006b320(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uStack_14;
  int aiStack_10 [2];
  undefined1 auStack_8 [8];
  
  if (param_1[6] != 0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[2] = 0;
    }
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[3] = 0;
    }
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[5] = 0;
    }
    piVar1 = (int *)param_1[4];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[4] = 0;
    }
    iVar2 = FUN_100c6950();
    aiStack_10[0] = iVar2 + -2;
    uVar3 = FUN_100c6a00();
    uVar4 = FUN_100c6a30();
    D3DXCreateFontA(param_1[6],iVar2,0,uVar3,1,0,1,0,4,0,uVar4,&uStack_14);
    puVar5 = operator_new(8);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_1011c438;
    }
    puVar5[1] = uStack_14;
    *param_1 = (int)puVar5;
    D3DXCreateFontA(param_1[6],iVar2,0,uVar3,1,0,1,0,4,0,uVar4,param_1 + 2);
    iVar2 = aiStack_10[0];
    D3DXCreateFontA(param_1[6],aiStack_10[0],0,uVar3,1,0,1,0,4,0,uVar4,&uStack_14);
    puVar5 = operator_new(8);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_1011c438;
    }
    puVar5[1] = uStack_14;
    param_1[1] = (int)puVar5;
    D3DXCreateFontA(param_1[6],iVar2,0,uVar3,1,0,1,0,4,0,uVar4,param_1 + 3);
    D3DXCreateSprite(param_1[6],param_1 + 5);
    pvVar6 = _calloc(1,0x186a1);
    piVar1 = param_1 + 4;
    param_1[7] = (int)pvVar6;
    D3DXCreateFontA(param_1[6],0x26,10,700,1,0,1,0,4,0,"Arial",piVar1);
    puVar5 = operator_new(8);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_1011c438;
    }
    puVar5[1] = *piVar1;
    *piVar1 = (int)puVar5;
    iVar2 = FUN_1006ac40(aiStack_10,&DAT_10118400,0);
    param_1[8] = *(int *)(iVar2 + 4);
    iVar2 = FUN_1006acf0(auStack_8,&DAT_10118400,0);
    param_1[9] = *(int *)(iVar2 + 4);
  }
  return;
}


/* END FUNCTION 0x1006b320 */
