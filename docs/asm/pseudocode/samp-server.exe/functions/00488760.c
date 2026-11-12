/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488760
 * Name: FUN_00488760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00488760(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  byte *pbVar2;
  char *_Dest;
  uint uVar3;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)this + (uVar1 & 0xffff) * 4) == 0) break;
    uVar1 = uVar1 + 1;
  } while ((ushort)uVar1 < 0x100);
  if ((short)uVar1 == 0x100) {
    return CONCAT22((short)(uVar1 >> 0x10),0xffff);
  }
  uVar3 = uVar1 & 0xffff;
  *(undefined1 *)(uVar3 + 0xc00 + (int)this) = 0;
  pbVar2 = _calloc(1,0x3f);
  _Dest = _calloc(1,0x401);
  if ((pbVar2 != (byte *)0x0) && (_Dest != (char *)0x0)) {
    _strncpy(_Dest,param_3,0x400);
    _Dest[0x400] = '\0';
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0xa0;
    pbVar2[0x10] = 0x44;
    pbVar2[0x11] = 0;
    pbVar2[0x12] = 0;
    pbVar2[0x13] = 0xa0;
    pbVar2[0x14] = 0x44;
    *(undefined4 *)(pbVar2 + 0x21) = param_1;
    pbVar2[0x29] = 0;
    pbVar2[0x2a] = 0;
    pbVar2[0x2b] = 0;
    pbVar2[0x2c] = 0;
    pbVar2[0x2d] = 0;
    pbVar2[0x2e] = 0;
    pbVar2[0x2f] = 0;
    pbVar2[0x30] = 0;
    pbVar2[0x31] = 0;
    pbVar2[0x32] = 0;
    pbVar2[0x33] = 0;
    pbVar2[0x34] = 0;
    pbVar2[0x35] = 0;
    pbVar2[0x36] = 0;
    pbVar2[0x3b] = 0xff;
    pbVar2[0x3c] = 0xff;
    pbVar2[0x3d] = 0xff;
    pbVar2[0x3e] = 0xff;
    pbVar2[1] = 0x8f;
    pbVar2[2] = 0xc2;
    pbVar2[3] = 0xf5;
    pbVar2[4] = 0x3e;
    pbVar2[5] = 0x29;
    pbVar2[6] = 0x5c;
    pbVar2[7] = 0x8f;
    pbVar2[8] = 0x3f;
    pbVar2[9] = 0xe1;
    pbVar2[10] = 0xe1;
    pbVar2[0xb] = 0xe1;
    pbVar2[0xc] = 0xff;
    pbVar2[0x15] = 0x80;
    pbVar2[0x16] = 0x80;
    pbVar2[0x17] = 0x80;
    pbVar2[0x18] = 0x80;
    pbVar2[0x1b] = 0;
    pbVar2[0x1c] = 0;
    pbVar2[0x1d] = 0;
    pbVar2[0x1e] = 0xff;
    pbVar2[0x19] = 2;
    pbVar2[0x1a] = 0;
    pbVar2[0x1f] = 1;
    pbVar2[0x20] = 0;
    *(undefined4 *)(pbVar2 + 0x25) = param_2;
    pbVar2[0x37] = 0;
    pbVar2[0x38] = 0;
    pbVar2[0x39] = 0x80;
    pbVar2[0x3a] = 0x3f;
    *pbVar2 = *pbVar2 & 0xf0 | 0x10;
    *(byte **)((int)this + uVar3 * 4 + 0x400) = pbVar2;
    *(char **)((int)this + uVar3 * 4 + 0x800) = _Dest;
    *(undefined4 *)((int)this + uVar3 * 4) = 1;
    return CONCAT22(0xffff,(short)uVar1);
  }
  return CONCAT22((short)((uint)_Dest >> 0x10),0xffff);
}


/* END FUNCTION 0x00488760 */
