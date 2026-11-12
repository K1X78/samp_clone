/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d04e0
 * Name: FUN_100d04e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d04e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  param_1[0xdf] = 5;
  param_1[0xb] = 5;
  param_1[0xad] = 1;
  param_1[0xae] = 1;
  param_1[0xb0] = 1;
  puVar2 = param_1 + 0xab;
  puVar3 = param_1 + 0xc5;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0x110] = 0xffffffff;
  param_1[0x151] = 0xffffffff;
  param_1[0xa8] = 1;
  param_1[0x156] = 1;
  param_1[0x104] = 1;
  param_1[0x105] = 1;
  param_1[0xe8] = 1;
  param_1[9] = 1;
  param_1[10] = 1;
  param_1[0xf4] = 1;
  param_1[0x10c] = 1;
  param_1[0x163] = 1;
  param_1[0x164] = 1;
  param_1[0x9a] = 1;
  param_1[4] = &DAT_10155958;
  param_1[5] = &PTR_DAT_10155938;
  *param_1 = &DAT_10155978;
  param_1[0x16] = _fwrite;
  param_1[0x19] = _fread;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x11] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x106] = 0;
  param_1[0xe1] = 0x3c;
  param_1[3] = 0;
  param_1[0xe0] = 0;
  param_1[0x113] = 0x1a4;
  param_1[0x114] = 0x1ed;
  param_1[0x152] = 0xf3fffbef;
  param_1[0x153] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15e] = 0;
  param_1[0x160] = 0x3c;
  param_1[0x15f] = 0x3c;
  param_1[0x161] = 0;
  param_1[0x167] = 1000;
  param_1[0xe2] = 0x4000;
  return 0;
}


/* END FUNCTION 0x100d04e0 */
