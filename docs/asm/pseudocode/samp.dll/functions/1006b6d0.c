/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b6d0
 * Name: FUN_1006b6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006b6d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char in_stack_00000014;
  undefined4 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 local_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*param_1 != 0) {
    if ((in_stack_00000014 != '\0') &&
       (iVar1 = FUN_1006b650(*param_2,param_2[1],param_2[2]), iVar1 == 0)) {
      return;
    }
    (**(code **)(*(int *)*param_1 + 0xc0))((int *)*param_1,local_58);
    puVar3 = &uStack_48;
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_c = 0x3f800000;
    uStack_20 = 0x3f800000;
    uStack_34 = 0x3f800000;
    uStack_48 = 0x3f800000;
    D3DXVec3Project(&stack0xffffff94,param_2,auStack_60,&DAT_1017ec40,&DAT_1017ec00);
    if ((float)puVar3 <= 1.0) {
      iVar1 = FUN_100f9324();
      iVar2 = FUN_100f9324();
      FUN_1006af20(param_1[1],uStack_18,iVar1,iVar2,iVar1 + 1,iVar2 + 1,0x101,uStack_14,uStack_10);
    }
  }
  return;
}


/* END FUNCTION 0x1006b6d0 */
