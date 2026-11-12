/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004868a0
 * Name: FUN_004868a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004868a0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte local_128 [4];
  uint local_124;
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if (*(int *)(param_1 + 0x2cdd) != 0) {
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return;
  }
  bVar1 = param_1[0x2f95];
  if ((bVar1 == 1) && (*(int *)(param_1 + 0x2d55) == 1)) {
    if (*(int *)(param_1 + 0x2cf9) == 0) {
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      param_1[0x80] = 0;
      param_1[0x81] = 0;
      param_1[0x82] = 0;
      param_1[0x83] = 0;
    }
    local_128[0] = 0xcf;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    if (*(short *)(param_1 + 0x7e) == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
      local_124 = (uint)*(ushort *)(param_1 + 0x7e);
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    }
    if (*(short *)(param_1 + 0x80) == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
      local_124 = (uint)*(ushort *)(param_1 + 0x80);
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    }
    local_124 = (uint)*(ushort *)(param_1 + 0x82);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,param_1 + 0x84,0xc);
    FUN_004844b0(local_120,*(float *)(param_1 + 0x90),*(float *)(param_1 + 0x94),
                 *(float *)(param_1 + 0x98),*(float *)(param_1 + 0x9c));
    bVar1 = param_1[0xa0];
    local_128[0] = 0;
    if (bVar1 != 0) {
      if (bVar1 < 100) {
        local_128[0] = (bVar1 / 7) * '\x10';
      }
      else {
        local_128[0] = 0xf0;
      }
    }
    bVar1 = param_1[0xa1];
    if (bVar1 != 0) {
      if (bVar1 < 100) {
        local_128[0] = local_128[0] | bVar1 / 7;
      }
      else {
        local_128[0] = local_128[0] | 0xf;
      }
    }
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_128[0] = param_1[0xa2] & 0x3f;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_128[0] = param_1[0xa3];
    FUN_0044df40(local_120,local_128,8,'\x01');
    FUN_00486580(local_120,*(float *)(param_1 + 0xa4),*(float *)(param_1 + 0xa8),
                 *(float *)(param_1 + 0xac));
    if (*(short *)(param_1 + 0xbc) == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
      local_124 = (uint)*(ushort *)(param_1 + 0xbc);
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
      FUN_0044dff0(local_120,param_1 + 0xb0,0xc);
    }
    if (*(int *)(param_1 + 0xbe) == 0) {
LAB_00486b7c:
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
      local_124 = *(uint *)(param_1 + 0xbe);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    }
  }
  else {
    if ((bVar1 != 2) || (*(int *)(param_1 + 0x2d55) != 2)) {
      if ((bVar1 == 3) && (*(int *)(param_1 + 0x2d55) == 3)) {
        if (*(int *)(param_1 + 0x2cf9) == 0) {
          param_1[0x6c] = 0;
          param_1[0x6d] = 0;
          param_1[0x6e] = 0;
          param_1[0x6f] = 0;
          param_1[0x70] = 0;
          param_1[0x71] = 0;
        }
        uVar2 = *(ushort *)(param_1 + 0x70);
        if ((param_1[0x69] & 0x3f) == 0x2b) {
          *(ushort *)(param_1 + 0x70) = uVar2 & 0xfb;
        }
        local_128[0] = 0xd3;
        FUN_0044df40(local_120,local_128,8,'\x01');
        local_124 = (uint)*(ushort *)(param_1 + 0x2d53);
        FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
        FUN_0044dff0(local_120,param_1 + 0x66,0x18);
        FUN_00493d40(DAT_004fc438,local_120,*(ushort *)(param_1 + 0x2d53),'\x01');
        *(ushort *)(param_1 + 0x70) = uVar2;
      }
      goto LAB_00486e97;
    }
    if (*(int *)(param_1 + 0x2cf9) == 0) {
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
    }
    local_128[0] = 200;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x27);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x29);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2b);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2d);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_004844b0(local_120,*(float *)(param_1 + 0x2f),*(float *)(param_1 + 0x33),
                 *(float *)(param_1 + 0x37),*(float *)(param_1 + 0x3b));
    FUN_0044dff0(local_120,param_1 + 0x3f,0xc);
    FUN_00486580(local_120,*(float *)(param_1 + 0x4b),*(float *)(param_1 + 0x4f),
                 *(float *)(param_1 + 0x53));
    uVar3 = FUN_004a0540();
    local_124 = (uint)uVar3;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    bVar1 = param_1[0x5b];
    local_128[0] = 0;
    if (bVar1 != 0) {
      if (bVar1 < 100) {
        local_128[0] = (bVar1 / 7) * '\x10';
      }
      else {
        local_128[0] = 0xf0;
      }
    }
    bVar1 = param_1[0x5c];
    if (bVar1 != 0) {
      if (bVar1 < 100) {
        local_128[0] = local_128[0] | bVar1 / 7;
      }
      else {
        local_128[0] = local_128[0] | 0xf;
      }
    }
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_128[0] = param_1[0x5d] & 0x3f;
    FUN_0044df40(local_120,local_128,8,'\x01');
    if (param_1[0x5e] == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
    }
    if (param_1[0x5f] == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
    }
    if (*(int *)(param_1 + 0x62) == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
      local_124 = *(uint *)(param_1 + 0x62);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    }
    if (*(short *)(param_1 + 0x60) == 0) goto LAB_00486b7c;
    FUN_0044de90(local_120);
    local_124 = (uint)*(ushort *)(param_1 + 0x60);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  }
  FUN_00493d40(DAT_004fc438,local_120,*(ushort *)(param_1 + 0x2d53),'\x01');
LAB_00486e97:
  if (*(int *)(param_1 + 0x2f89) != 0) {
    FUN_0044d9d0(local_120);
    local_128[0] = 0xcb;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,param_1,0x1f);
    FUN_00493d40(DAT_004fc438,local_120,*(ushort *)(param_1 + 0x2d53),'\x01');
    param_1[0x2f89] = 0;
    param_1[0x2f8a] = 0;
    param_1[0x2f8b] = 0;
    param_1[0x2f8c] = 0;
  }
  if (*(int *)(param_1 + 0x2f8d) != 0) {
    FUN_0044d9d0(local_120);
    local_128[0] = 0xd2;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,param_1 + 0x117,0x36);
    FUN_00493d40(DAT_004fc438,local_120,*(ushort *)(param_1 + 0x2d53),'\x01');
    param_1[0x2f8d] = 0;
    param_1[0x2f8e] = 0;
    param_1[0x2f8f] = 0;
    param_1[0x2f90] = 0;
  }
  if (*(int *)(param_1 + 0x2f91) != 0) {
    FUN_0044d9d0(local_120);
    local_128[0] = 0xd1;
    FUN_0044df40(local_120,local_128,8,'\x01');
    local_124 = (uint)*(ushort *)(param_1 + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,param_1 + 0xc2,0x43);
    FUN_00493e50(DAT_004fc438,local_120,*(ushort *)(param_1 + 0xc2),*(ushort *)(param_1 + 0x2d53));
    param_1[0x2f91] = 0;
    param_1[0x2f92] = 0;
    param_1[0x2f93] = 0;
    param_1[0x2f94] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004868a0 */
