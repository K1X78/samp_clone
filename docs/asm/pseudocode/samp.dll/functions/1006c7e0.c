/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006c7e0
 * Name: FUN_1006c7e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1006c7e0(undefined4 *param_1,float *param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int **ppiStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  int iStack_e4;
  undefined *puStack_e0;
  int iStack_dc;
  int *piStack_d8;
  int iStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  int *piStack_b4;
  undefined4 *puStack_b0;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 auStack_84 [8];
  float local_7c;
  float local_78;
  float local_74;
  undefined4 *local_70;
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  char cStack_c;
  
  local_7c = *param_2;
  local_78 = param_2[1];
  piStack_b4 = (int *)*param_1;
  local_74 = param_5 * 0.0475 + param_2[2] + 0.2;
  puStack_b0 = &local_18;
  puStack_b8 = (undefined4 *)0x1006c837;
  local_70 = param_1;
  (**(code **)(*piStack_b4 + 0xc0))();
  puStack_b8 = &uStack_60;
  puStack_bc = &DAT_1017ec00;
  puStack_c0 = &DAT_1017ec40;
  puStack_c4 = auStack_20;
  puStack_c8 = auStack_84;
  puStack_cc = auStack_6c;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  iStack_24 = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_60 = 0x3f800000;
  puStack_d0 = (undefined1 *)0x1006c8fe;
  D3DXVec3Project();
  if (local_7c <= 1.0) {
    puStack_d0 = (undefined1 *)0x1006c91c;
    iVar3 = FUN_100f9324();
    puStack_d0 = (undefined1 *)0x1006c92d;
    puStack_bc = (undefined4 *)iVar3;
    iVar4 = FUN_100f9324();
    puStack_d0 = (undefined1 *)0x0;
    iStack_d4 = local_18;
    piStack_d8 = &iStack_8c;
    iStack_dc = 0x1006c957;
    puStack_b8 = (undefined4 *)iVar4;
    piStack_b4 = (int *)iVar3;
    puStack_b0 = (undefined4 *)iVar4;
    FUN_1006acf0();
    puStack_d0 = (undefined1 *)0x1;
    iStack_d4 = uStack_14;
    piStack_e8 = (int *)(iVar3 - iStack_8c / 2);
    puStack_e0 = (undefined *)(iVar3 + iStack_8c / 2);
    piStack_d8 = (int *)0x100;
    iStack_e4 = iVar4 + (0x11 - iStack_88);
    iStack_f0 = *(undefined4 *)(iStack_90 + 8);
    uStack_ec = local_18;
    ppiStack_f4 = (int **)0x1006c9ab;
    iStack_dc = iVar4;
    FUN_1006af20();
    if ((cStack_c != '\0') && (DAT_102aca18 != 0)) {
      if (*(int *)(DAT_102aca18 + 0x14b) == 0) {
        puStack_d0 = (undefined1 *)0x1006c9d7;
        FUN_100695f0();
      }
      piVar1 = *(int **)(DAT_102aca18 + 0x14f);
      piVar2 = *(int **)(DAT_102aca18 + 0x153);
      if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        puStack_d0 = (undefined1 *)0x0;
        iStack_d4 = 0x505;
        piStack_d8 = (int *)&stack0xffffff54;
        iStack_dc = 1;
        puStack_e0 = &DAT_10118388;
        iStack_e4 = 0;
        uStack_ec = 0x1006ca22;
        piStack_e8 = piVar2;
        (**(code **)(*piVar2 + 0x38))();
        iStack_d4 = iStack_d4 + 0x11 + ((int)puStack_bc - (int)puStack_c4) / 2;
        puStack_cc = (undefined1 *)(iStack_d4 + 2);
        piStack_d8 = (int *)((int)piStack_d8 + (-0x16 - ((int)puStack_c0 - (int)puStack_c8) / 2));
        puStack_d0 = (undefined1 *)((int)piStack_d8 + 1);
        if (iStack_24 == 2) {
          uStack_ec = 0xff000000;
          iStack_f0 = 0x105;
          ppiStack_f4 = &piStack_d8;
          (**(code **)(*piVar2 + 0x38))(piVar2,0,&DAT_10118388,1);
          iStack_f0 = iStack_f0 + -2;
          ppiStack_f4 = (int **)((int)ppiStack_f4 + -1);
          (**(code **)(*piVar1 + 0x38))(piVar1,0,&DAT_10118370,1,&ppiStack_f4,0x105,0xffe3e1e3);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x1006c7e0 */
