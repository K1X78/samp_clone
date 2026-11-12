/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006cae0
 * Name: FUN_1006cae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1006cae0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            float param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined1 auStack_6c [8];
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58 [4];
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
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_64 = *param_2;
  local_60 = param_2[1];
  local_5c = param_5 * 0.0475 + (float)param_2[2] + 0.2;
  (**(code **)(*(int *)*param_1 + 0xc0))((int *)*param_1,local_58);
  puVar4 = &DAT_1017ec00;
  uStack_10 = 0;
  fStack_14 = 0.0;
  fStack_18 = 0.0;
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
  D3DXVec3Project(&stack0xffffff88,auStack_6c,&local_60,&DAT_1017ec40,&DAT_1017ec00,&uStack_48);
  if (((float)puVar4 <= 1.0) && (0.0 <= fStack_18)) {
    iVar2 = FUN_100f9324();
    fVar3 = (float)iVar2;
    iVar2 = FUN_100f9324();
    fVar1 = (float)iVar2;
    _DAT_10140964 = 0xffb92228;
    _DAT_10140950 = 0xffb92228;
    _DAT_1014093c = 0xffb92228;
    _DAT_10140928 = 0xffb92228;
    _DAT_10140878 = fVar3 - 20.0;
    _DAT_10140914 = 0xff4b0b14;
    _DAT_10140900 = 0xff4b0b14;
    _DAT_101408ec = 0xff4b0b14;
    _DAT_101408d8 = 0xff4b0b14;
    _DAT_101408b8 = fVar1 + 18.0;
    _DAT_101408a4 = fVar1 + 24.0;
    _DAT_101408a0 = fVar3 + 21.0;
    _DAT_101408c8 = fVar3 - 19.0;
    DAT_10140958 = fVar1 + 19.0;
    DAT_10140944 = fVar1 + 23.0;
    _DAT_101408f0 = fVar3 + 19.0;
    if (100.0 < fStack_18) {
      fStack_18 = 100.0;
    }
    _DAT_10140940 = (fStack_18 * 0.3846154 - 19.0) + fVar3;
    if (0.0 < fStack_14) {
      _DAT_101408a4 = _DAT_101408a4 + 8.0;
      DAT_10140944 = DAT_10140944 + 8.0;
      _DAT_101408b8 = _DAT_101408b8 + 8.0;
      DAT_10140958 = DAT_10140958 + 8.0;
    }
    _DAT_1014087c = _DAT_101408b8;
    _DAT_1014088c = _DAT_10140878;
    _DAT_10140890 = _DAT_101408a4;
    _DAT_101408b4 = _DAT_101408a0;
    _DAT_101408cc = DAT_10140958;
    _DAT_101408dc = _DAT_101408c8;
    _DAT_101408e0 = DAT_10140944;
    _DAT_101408f4 = DAT_10140944;
    _DAT_10140904 = _DAT_101408f0;
    _DAT_10140908 = DAT_10140958;
    _DAT_10140918 = _DAT_101408c8;
    DAT_1014091c = DAT_10140958;
    _DAT_1014092c = _DAT_101408c8;
    DAT_10140930 = DAT_10140944;
    _DAT_10140954 = _DAT_10140940;
    (**(code **)(*(int *)*param_1 + 0x164))((int *)*param_1,0x44);
    (**(code **)(*(int *)*param_1 + 0x14c))((int *)*param_1,6,2,&DAT_10140878,0x14);
    (**(code **)(*(int *)*param_1 + 0x14c))((int *)*param_1,6,2,&DAT_101408c8,0x14);
    fVar3 = 2.8026e-45;
    (**(code **)(*(int *)*param_1 + 0x14c))((int *)*param_1,6,2,&DAT_10140918,0x14);
    if (0.0 < local_58[0]) {
      _DAT_1014087c = _DAT_1014087c - 8.0;
      _DAT_10140964 = 0xffc8c8c8;
      _DAT_10140950 = 0xffc8c8c8;
      _DAT_1014093c = 0xffc8c8c8;
      _DAT_10140928 = 0xffc8c8c8;
      _DAT_101408cc = _DAT_101408cc - 8.0;
      _DAT_10140914 = 0xff282828;
      _DAT_10140900 = 0xff282828;
      _DAT_101408ec = 0xff282828;
      _DAT_101408d8 = 0xff282828;
      DAT_1014091c = DAT_1014091c - 8.0;
      _DAT_10140890 = _DAT_10140890 - 8.0;
      _DAT_101408e0 = _DAT_101408e0 - 8.0;
      DAT_10140930 = DAT_10140930 - 8.0;
      _DAT_101408a4 = _DAT_101408a4 - 8.0;
      _DAT_101408f4 = _DAT_101408f4 - 8.0;
      DAT_10140944 = DAT_10140944 - 8.0;
      _DAT_101408b8 = _DAT_101408b8 - 8.0;
      _DAT_10140908 = _DAT_10140908 - 8.0;
      DAT_10140958 = DAT_10140958 - 8.0;
      if (100.0 < local_58[0]) {
        local_58[0] = 100.0;
      }
      _DAT_10140940 = (local_58[0] * 0.3846154 - 19.0) + fVar3;
      _DAT_10140954 = _DAT_10140940;
      (**(code **)(*(int *)*param_1 + 0x164))((int *)*param_1,0x44);
      (**(code **)(*(int *)*param_1 + 0x14c))((int *)*param_1,6,2,&DAT_10140878,0x14);
      (**(code **)(*(int *)*param_1 + 0x14c))((int *)*param_1,6,2,&DAT_101408c8,0x14);
      (**(code **)(*(int *)*param_1 + 0x14c))((int *)*param_1,6,2,&DAT_10140918,0x14);
    }
  }
  return;
}


/* END FUNCTION 0x1006cae0 */
