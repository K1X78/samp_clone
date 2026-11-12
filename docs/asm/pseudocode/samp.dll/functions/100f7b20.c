/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f7b20
 * Name: FUN_100f7b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100f7b20(uint param_1,uint param_2)

{
  uint *in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ~(((param_2 & 0xff00) + param_2 * 0x10000) * 0x100 + (param_2 >> 0x10 & 0xff) * 0x100 +
           (param_2 >> 0x18));
  for (; (param_1 != 0 && (((uint)in_EAX & 3) != 0)); in_EAX = (uint *)((int)in_EAX + 1)) {
    uVar1 = uVar1 << 8 ^ *(uint *)(&DAT_1012bf00 + (uVar1 >> 0x18 ^ (uint)(byte)*in_EAX) * 4);
    param_1 = param_1 - 1;
  }
  if (0x1f < param_1) {
    uVar2 = param_1 >> 5;
    do {
      uVar1 = uVar1 ^ *in_EAX;
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[1];
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[2];
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[3];
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[4];
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[5];
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[6];
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4) ^ in_EAX[7];
      in_EAX = in_EAX + 8;
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4);
      param_1 = param_1 - 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (3 < param_1) {
    uVar2 = param_1 >> 2;
    do {
      uVar1 = uVar1 ^ *in_EAX;
      uVar1 = *(uint *)(&DAT_1012c700 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1012c300 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1012cb00 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1012bf00 + (uVar1 & 0xff) * 4);
      in_EAX = in_EAX + 1;
      param_1 = param_1 - 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    uVar1 = uVar1 << 8 ^ *(uint *)(&DAT_1012bf00 + (uVar1 >> 0x18 ^ (uint)(byte)*in_EAX) * 4);
    in_EAX = (uint *)((int)in_EAX + 1);
  }
  uVar1 = ~uVar1;
  return ((uVar1 & 0xff00) + uVar1 * 0x10000) * 0x100 + (uVar1 >> 0x10 & 0xff) * 0x100 +
         (uVar1 >> 0x18);
}


/* END FUNCTION 0x100f7b20 */
