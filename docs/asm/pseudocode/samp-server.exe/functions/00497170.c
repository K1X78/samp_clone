/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497170
 * Name: FUN_00497170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte * __thiscall
FUN_00497170(void *this,byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,char *param_6,byte param_7,byte param_8)

{
  byte *_Dest;
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  byte local_12c [4];
  byte *local_128;
  byte *local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1bab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar2 = _calloc(1,0x229);
  *(undefined4 *)(pbVar2 + 1) = param_2;
  *pbVar2 = param_1;
  _Dest = pbVar2 + 0xd;
  *(undefined4 *)(pbVar2 + 5) = param_3;
  *(undefined4 *)(pbVar2 + 9) = param_4;
  _strncpy((char *)_Dest,param_5,0x104);
  _strncpy((char *)(pbVar2 + 0x112),param_6,0x104);
  pbVar2[0x227] = param_7;
  pbVar2[0x228] = param_8;
  puVar1 = (uint *)(pbVar2 + 0x217);
  if (*pbVar2 == 4) {
    uVar3 = FUN_00496c00(_Dest);
    *puVar1 = uVar3;
  }
  else {
    uVar4 = FUN_00496bc0(this,_Dest,puVar1);
    *(undefined4 *)(pbVar2 + 0x21f) = uVar4;
    FUN_00491fa0("[artwork:crc] %s CRC = 0x%X");
    if (*(int *)(pbVar2 + 0x21f) == 0) {
      FUN_00491fa0("[artwork:error] Bad file: %s");
      ExceptionList = local_c;
      return (byte *)0x0;
    }
  }
  local_124 = pbVar2 + 0x112;
  uVar4 = FUN_00496bc0(this,local_124,(uint *)(pbVar2 + 0x21b));
  *(undefined4 *)(pbVar2 + 0x223) = uVar4;
  FUN_00491fa0("[artwork:crc] %s CRC = 0x%X");
  if (*(int *)(pbVar2 + 0x223) == 0) {
    FUN_00491fa0("[artwork:error] Bad file: %s");
    local_124 = (byte *)0x0;
  }
  else {
    local_124 = (byte *)FUN_00482100((void *)((int)this + 0x105),(int)pbVar2);
    if (DAT_004fc438 != (void *)0x0) {
      FUN_0044d8a0(local_120);
      local_4 = 0;
      local_128 = local_124;
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = *(byte **)((int)this + 0x109);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_12c[0] = *pbVar2;
      FUN_0044df40(local_120,local_12c,8,'\x01');
      local_128 = *(byte **)(pbVar2 + 1);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = *(byte **)(pbVar2 + 5);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = *(byte **)(pbVar2 + 9);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = (byte *)*puVar1;
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = *(byte **)(pbVar2 + 0x21b);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = *(byte **)(pbVar2 + 0x21f);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_128 = *(byte **)(pbVar2 + 0x223);
      FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
      local_12c[0] = pbVar2[0x227];
      FUN_0044df40(local_120,local_12c,8,'\x01');
      local_12c[0] = pbVar2[0x228];
      FUN_0044df40(local_120,local_12c,8,'\x01');
      FUN_00493960(DAT_004fc438,&DAT_004c006c,local_120,0xffff);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
  }
  ExceptionList = local_c;
  return local_124;
}


/* END FUNCTION 0x00497170 */
