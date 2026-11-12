/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071fe0
 * Name: FUN_10071fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071fe0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  
  iStack_10 = -0x66ddddde;
  if (param_2 == 0) {
    piStack_24 = *(int **)(param_1 + 0x10f);
    iStack_10 = 0x105;
    puStack_14 = &stack0x00000008;
    puStack_18 = (undefined1 *)0x1;
    puStack_1c = &DAT_10118388;
    puStack_20 = (undefined *)0x0;
    piStack_28 = (int *)0x1007202f;
    (**(code **)(*piStack_24 + 0x38))();
    iVar1 = **(int **)(param_1 + 0x10b);
    piStack_28 = (int *)0xff9999cc;
    uStack_2c = 0x105;
    ppuStack_30 = &puStack_14;
    uVar3 = 1;
    uVar2 = FUN_10071a40(0);
    (**(code **)(iVar1 + 0x38))((int)((ulonglong)uVar2 >> 0x20),0,(int)uVar2,uVar3);
    FUN_10071ae0(param_1 + 8,&ppuStack_30);
    return;
  }
  if (param_2 == 1) {
    piStack_24 = *(int **)(param_1 + 0x10f);
    iStack_10 = 0x105;
    puStack_14 = &stack0x00000008;
    puStack_18 = (undefined1 *)0x1;
    puStack_1c = &DAT_10118388;
    puStack_20 = (undefined *)0x0;
    piStack_28 = (int *)0x100720af;
    (**(code **)(*piStack_24 + 0x38))();
    iVar1 = **(int **)(param_1 + 0x10b);
    piStack_28 = (int *)0xffcc9999;
    uStack_2c = 0x105;
    ppuStack_30 = &puStack_14;
    uVar3 = 1;
    uVar2 = FUN_10071a40(1);
    (**(code **)(iVar1 + 0x38))((int)((ulonglong)uVar2 >> 0x20),0,(int)uVar2,uVar3);
    FUN_10071ae0(param_1 + 0x18,&ppuStack_30);
    return;
  }
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x113) == 2) {
      iStack_10 = (-(uint)(*(char *)(param_1 + 0xa3) != '\0') & 0xffcc999a) - 0x555556;
    }
    piStack_28 = *(int **)(param_1 + 0x10f);
    puStack_14 = (undefined1 *)0x105;
    puStack_18 = &stack0x00000008;
    puStack_1c = (undefined *)0x1;
    puStack_20 = &DAT_10118388;
    piStack_24 = (int *)0x0;
    uStack_2c = 0x10072133;
    (**(code **)(*piStack_28 + 0x38))();
    iVar1 = **(int **)(param_1 + 0x10b);
    uStack_2c = 0xff99cc99;
    ppuStack_30 = (undefined1 **)0x105;
    ppuVar4 = &puStack_14;
    uVar3 = 1;
    uVar2 = FUN_10071a40(2);
    (**(code **)(iVar1 + 0x38))((int)((ulonglong)uVar2 >> 0x20),0,(int)uVar2,uVar3,ppuVar4);
    FUN_10071ae0(param_1 + 0x28,&ppuStack_30);
    return;
  }
  if (param_2 == 3) {
    piStack_24 = *(int **)(param_1 + 0x10f);
    iStack_10 = 0x105;
    puStack_14 = &stack0x00000008;
    puStack_18 = (undefined1 *)0x1;
    puStack_1c = &DAT_10118388;
    puStack_20 = (undefined *)0x0;
    piStack_28 = (int *)0x100721b0;
    (**(code **)(*piStack_24 + 0x38))();
    piStack_28 = (int *)0xff999999;
    uStack_2c = 0x105;
    ppuStack_30 = &puStack_14;
    (**(code **)(**(int **)(param_1 + 0x10b) + 0x38))(*(int **)(param_1 + 0x10b),0,&DAT_1011c310,1);
    FUN_10071ae0(param_1 + 0x38,&ppuStack_30);
    return;
  }
  if (param_2 == 4) {
    piStack_24 = *(int **)(param_1 + 0x10f);
    iStack_10 = 0x105;
    puStack_14 = &stack0x00000008;
    puStack_18 = (undefined1 *)0x1;
    puStack_1c = &DAT_10118388;
    puStack_20 = (undefined *)0x0;
    piStack_28 = (int *)0x10072227;
    (**(code **)(*piStack_24 + 0x38))();
    piStack_28 = (int *)0xff999999;
    uStack_2c = 0x105;
    ppuStack_30 = &puStack_14;
    (**(code **)(**(int **)(param_1 + 0x10b) + 0x38))(*(int **)(param_1 + 0x10b),0,&DAT_101182d8,1);
    FUN_10071ae0(param_1 + 0x48,&ppuStack_30);
    return;
  }
  if (param_2 == 5) {
    piStack_24 = *(int **)(param_1 + 0x10f);
    iStack_10 = 0x105;
    puStack_14 = &stack0x00000008;
    puStack_18 = (undefined1 *)0x1;
    puStack_1c = &DAT_10118388;
    puStack_20 = (undefined *)0x0;
    piStack_28 = (int *)0x1007229d;
    (**(code **)(*piStack_24 + 0x38))();
    piStack_28 = (int *)0xff999999;
    uStack_2c = 0x105;
    ppuStack_30 = &puStack_14;
    (**(code **)(**(int **)(param_1 + 0x10b) + 0x38))(*(int **)(param_1 + 0x10b),0,&DAT_1011c344,1);
    FUN_10071ae0(param_1 + 0x58,&ppuStack_30);
    return;
  }
  if (param_2 == 10) {
    piStack_24 = *(int **)(param_1 + 0x10f);
    iStack_10 = 0x105;
    puStack_14 = &stack0x00000008;
    puStack_18 = (undefined1 *)0x1;
    puStack_1c = &DAT_10118388;
    puStack_20 = (undefined *)0x0;
    piStack_28 = (int *)0x10072309;
    (**(code **)(*piStack_24 + 0x38))();
    piStack_28 = (int *)0xff999999;
    uStack_2c = 0x105;
    ppuStack_30 = &puStack_14;
    (**(code **)(**(int **)(param_1 + 0x10b) + 0x38))(*(int **)(param_1 + 0x10b),0,&DAT_10118350,1);
    FUN_10071ae0(param_1 + 0x68,&ppuStack_30);
  }
  return;
}


/* END FUNCTION 0x10071fe0 */
