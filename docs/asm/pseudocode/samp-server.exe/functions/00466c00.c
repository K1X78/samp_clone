/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466c00
 * Name: FUN_00466c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __thiscall FUN_00466c00(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  ushort uVar1;
  byte *pbVar2;
  char *_Dest;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)this + (uint)uVar1 * 4) == 0) break;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x800);
  if (uVar1 == 0x800) {
    return 0xffff;
  }
  uVar4 = (uint)uVar1;
  puVar5 = (undefined4 *)(uVar4 * 1000 + 0x6000 + (int)this);
  for (iVar3 = 0xfa; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
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
    *(undefined4 *)(pbVar2 + 0x21) = param_1;
    *(undefined4 *)(pbVar2 + 0x25) = param_2;
    pbVar2[0x37] = 0;
    pbVar2[0x38] = 0;
    pbVar2[0x39] = 0x80;
    pbVar2[0x3a] = 0x3f;
    *pbVar2 = *pbVar2 & 0xf0 | 0x10;
    *(char **)((int)this + uVar4 * 4 + 0x4000) = _Dest;
    *(byte **)((int)this + uVar4 * 4 + 0x2000) = pbVar2;
    *(undefined4 *)((int)this + uVar4 * 4) = 1;
    return uVar1;
  }
  return 0xffff;
}


/* END FUNCTION 0x00466c00 */
