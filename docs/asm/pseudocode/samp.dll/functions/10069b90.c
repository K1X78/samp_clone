/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069b90
 * Name: FUN_10069b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10069b90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  int local_10 [4];
  
  if (*(int *)(param_1 + 0x147) != 0) {
    piVar12 = *(int **)(param_1 + 0x137);
    piVar1 = (int *)(param_1 + 0x137);
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 8))(piVar12);
      *piVar1 = 0;
    }
    piVar12 = *(int **)(param_1 + 0x13b);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 8))(piVar12);
      *(undefined4 *)(param_1 + 0x13b) = 0;
    }
    piVar12 = *(int **)(param_1 + 0x13f);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 8))(piVar12);
      *(undefined4 *)(param_1 + 0x13f) = 0;
    }
    piVar12 = *(int **)(param_1 + 0x143);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 8))(piVar12);
      *(undefined4 *)(param_1 + 0x143) = 0;
    }
    iVar2 = FUN_100c69a0();
    D3DXCreateSprite(*(undefined4 *)(param_1 + 0x147),(undefined4 *)(param_1 + 0x143));
    piVar12 = piVar1;
    uVar3 = FUN_100c6a30(piVar1);
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = 1;
    uVar4 = FUN_100c6a00(1,0,1,0,0,0,uVar3);
    D3DXCreateFontA(*(undefined4 *)(param_1 + 0x147),iVar2,0,uVar4,uVar6,uVar7,uVar8,uVar9,uVar10,
                    uVar11,uVar3,piVar12);
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))
                (piVar1,0,"LONGESTNICKNICK_NICKNICK",0xffffffff,local_10,0x400,0xff000000);
    }
    *(int *)(param_1 + 299) = local_10[2] - local_10[0];
    D3DXCreateFontA(*(undefined4 *)(param_1 + 0x147),iVar2 + 8,0,400,1,0,2,0,0,0,"GTAWEAPON3",
                    param_1 + 0x13b);
    D3DXCreateFontA(*(undefined4 *)(param_1 + 0x147),iVar2 + 0xc,0,400,1,0,2,0,0,0,"GTAWEAPON3",
                    param_1 + 0x13f);
    puVar5 = (undefined4 *)FUN_10069810(auStack_20);
    *(undefined4 *)(param_1 + 0x12f) = *puVar5;
    iVar2 = FUN_10069810(auStack_18);
    *(undefined4 *)(param_1 + 0x133) = *(undefined4 *)(iVar2 + 4);
  }
  return;
}


/* END FUNCTION 0x10069b90 */
