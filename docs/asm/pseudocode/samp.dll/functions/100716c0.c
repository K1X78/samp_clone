/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100716c0
 * Name: FUN_100716c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_100716c0(int param_1,undefined4 *param_2)

{
  int *piStack_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2];
  piStack_78 = *(int **)(param_1 + 0x103);
  puStack_74 = local_58;
  (**(code **)(*piStack_78 + 0xc0))();
  uStack_10 = 0;
  uStack_14 = 0;
  puStack_18 = (undefined4 *)0x0;
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
  D3DXVec3Project(&local_6c,&piStack_78,auStack_60);
  *puStack_18 = &DAT_1017ec40;
  puStack_18[1] = &DAT_1017ec00;
  return (float10)(float)&uStack_48;
}


/* END FUNCTION 0x100716c0 */
