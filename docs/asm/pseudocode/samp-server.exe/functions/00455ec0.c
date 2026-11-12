/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455ec0
 * Name: FUN_00455ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_00455ec0(void *this,byte *param_1,byte *param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined2 param_8,undefined4 param_9,
            char param_10)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte local_128 [4];
  int local_124;
  int local_120 [3];
  int local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0dbb;
  local_c = ExceptionList;
  if (param_1 == (byte *)0x0) {
    uVar1 = (uint)ExceptionList & 0xffffff00;
  }
  else {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    if (param_10 != '\0') {
      local_128[0] = 0x28;
      FUN_0044df40(local_120,local_128,8,'\x01');
      uVar3 = FUN_0044e910();
      local_124 = (int)uVar3;
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    }
    local_128[0] = 0x14;
    FUN_0044df40(local_120,local_128,8,'\x01');
    FUN_0044dff0(local_120,param_1,1);
    local_124 = param_3;
    FUN_0044e080(local_120,(byte *)&local_124,0x20,'\x01');
    if (param_3 == 0) {
      local_124 = 0;
      FUN_0044e080(local_120,(byte *)&local_124,0x20,'\x01');
    }
    else {
      FUN_0044df40(local_120,param_2,param_3,'\0');
    }
    lVar4 = FUN_0044e970();
    FUN_00453ac0(this,local_114,local_120[0],param_4,param_5,param_6,param_7,param_8,'\0','\0',
                 (int)lVar4,(int)((ulonglong)lVar4 >> 0x20));
    local_4 = 0xffffffff;
    uVar2 = FUN_0044d9b0((int)local_120);
    uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar1;
}


/* END FUNCTION 0x00455ec0 */
