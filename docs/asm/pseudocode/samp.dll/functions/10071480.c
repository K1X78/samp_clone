/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071480
 * Name: FUN_10071480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10071480(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = *(int **)(DAT_102ac9f0 + 0x10b);
  if (piVar1 != (int *)0x0) {
    local_10 = *(int *)(param_1 + 4) + 0x19;
    local_8 = *(int *)(param_1 + 4) + 0x1a;
    iStack_20 = 0xff9999cc;
    uStack_24 = 0x105;
    local_c = *(int *)(*(int *)(param_1 + 0x20) + 0x126) + 0x1e + *(int *)(param_1 + 8);
    piStack_28 = &local_10;
    local_4 = local_c + 1;
    uStack_2c = 1;
    iVar2 = *piVar1;
    uStack_30 = 0;
    uStack_34 = 0x100714de;
    uStack_30 = FUN_10071a40();
    uStack_34 = 0;
    iStack_3c = 0x100714e5;
    piStack_38 = piVar1;
    (**(code **)(iVar2 + 0x38))();
    iStack_3c = 0xffcc9999;
    uStack_40 = 0x105;
    piStack_28 = (int *)((int)piStack_28 + *(int *)(param_1 + 0x1c));
    puStack_44 = &uStack_2c;
    iStack_20 = (int)piStack_28 + 1;
    uStack_48 = 1;
    iVar2 = *piVar1;
    uVar3 = FUN_10071a40(1);
    (**(code **)(iVar2 + 0x38))(piVar1,0,uVar3);
    uVar7 = 0xff99cc99;
    uVar6 = 0x105;
    puStack_44 = (undefined4 *)((int)puStack_44 + *(int *)(param_1 + 0x1c));
    puVar5 = &uStack_48;
    iStack_3c = (int)puStack_44 + 1;
    uVar4 = 1;
    iVar2 = *piVar1;
    uVar3 = FUN_10071a40(2);
    (**(code **)(iVar2 + 0x38))(piVar1,0,uVar3,uVar4,puVar5,uVar6,uVar7);
  }
  return;
}


/* END FUNCTION 0x10071480 */
