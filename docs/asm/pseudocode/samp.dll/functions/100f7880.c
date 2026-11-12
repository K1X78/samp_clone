/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f7880
 * Name: FUN_100f7880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100f7880(uint *param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ~in_EAX;
  for (; (param_2 != 0 && (((uint)param_1 & 3) != 0)); param_1 = (uint *)((int)param_1 + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_1012af00 + (((byte)*param_1 ^ uVar1) & 0xff) * 4);
    param_2 = param_2 - 1;
  }
  if (0x1f < param_2) {
    uVar2 = param_2 >> 5;
    do {
      uVar1 = uVar1 ^ *param_1;
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[1];
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[2];
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[3];
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[4];
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[5];
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[6];
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4) ^ param_1[7];
      param_1 = param_1 + 8;
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4);
      param_2 = param_2 - 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (3 < param_2) {
    uVar2 = param_2 >> 2;
    do {
      uVar1 = uVar1 ^ *param_1;
      uVar1 = *(uint *)(&DAT_1012b300 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012b700 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012af00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bb00 + (uVar1 & 0xff) * 4);
      param_1 = param_1 + 1;
      param_2 = param_2 - 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_1012af00 + (((byte)*param_1 ^ uVar1) & 0xff) * 4);
    param_1 = (uint *)((int)param_1 + 1);
  }
  return ~uVar1;
}


/* END FUNCTION 0x100f7880 */
