/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488794
 * Name: FUN_00488794
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_00488794(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5)

{
  uint in_EAX;
  byte *pbVar1;
  char *_Dest;
  int unaff_EBP;
  uint uVar2;
  
  uVar2 = in_EAX & 0xffff;
  *(undefined1 *)(uVar2 + 0xc00 + unaff_EBP) = 0;
  pbVar1 = _calloc(1,0x3f);
  _Dest = _calloc(1,0x401);
  if ((pbVar1 != (byte *)0x0) && (_Dest != (char *)0x0)) {
    _strncpy(_Dest,param_5,0x400);
    _Dest[0x400] = '\0';
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0xa0;
    pbVar1[0x10] = 0x44;
    pbVar1[0x11] = 0;
    pbVar1[0x12] = 0;
    pbVar1[0x13] = 0xa0;
    pbVar1[0x14] = 0x44;
    *(undefined4 *)(pbVar1 + 0x21) = param_3;
    pbVar1[0x29] = 0;
    pbVar1[0x2a] = 0;
    pbVar1[0x2b] = 0;
    pbVar1[0x2c] = 0;
    pbVar1[0x2d] = 0;
    pbVar1[0x2e] = 0;
    pbVar1[0x2f] = 0;
    pbVar1[0x30] = 0;
    pbVar1[0x31] = 0;
    pbVar1[0x32] = 0;
    pbVar1[0x33] = 0;
    pbVar1[0x34] = 0;
    pbVar1[0x35] = 0;
    pbVar1[0x36] = 0;
    pbVar1[0x3b] = 0xff;
    pbVar1[0x3c] = 0xff;
    pbVar1[0x3d] = 0xff;
    pbVar1[0x3e] = 0xff;
    pbVar1[1] = 0x8f;
    pbVar1[2] = 0xc2;
    pbVar1[3] = 0xf5;
    pbVar1[4] = 0x3e;
    pbVar1[5] = 0x29;
    pbVar1[6] = 0x5c;
    pbVar1[7] = 0x8f;
    pbVar1[8] = 0x3f;
    pbVar1[9] = 0xe1;
    pbVar1[10] = 0xe1;
    pbVar1[0xb] = 0xe1;
    pbVar1[0xc] = 0xff;
    pbVar1[0x15] = 0x80;
    pbVar1[0x16] = 0x80;
    pbVar1[0x17] = 0x80;
    pbVar1[0x18] = 0x80;
    pbVar1[0x1b] = 0;
    pbVar1[0x1c] = 0;
    pbVar1[0x1d] = 0;
    pbVar1[0x1e] = 0xff;
    pbVar1[0x19] = 2;
    pbVar1[0x1a] = 0;
    pbVar1[0x1f] = 1;
    pbVar1[0x20] = 0;
    *(undefined4 *)(pbVar1 + 0x25) = param_4;
    pbVar1[0x37] = 0;
    pbVar1[0x38] = 0;
    pbVar1[0x39] = 0x80;
    pbVar1[0x3a] = 0x3f;
    *pbVar1 = *pbVar1 & 0xf0 | 0x10;
    *(byte **)(unaff_EBP + 0x400 + uVar2 * 4) = pbVar1;
    *(char **)(unaff_EBP + 0x800 + uVar2 * 4) = _Dest;
    *(undefined4 *)(unaff_EBP + uVar2 * 4) = 1;
    return CONCAT22(0xffff,param_1);
  }
  return CONCAT22((short)((uint)_Dest >> 0x10),0xffff);
}


/* END FUNCTION 0x00488794 */
