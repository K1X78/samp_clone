/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00456240
 * Name: FUN_00456240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00456240(void *this,undefined4 param_1,undefined2 param_2,char param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  byte local_124 [4];
  int local_120 [3];
  int local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0dbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8d0(local_120,(*(int *)((int)this + 0xc) + 7 >> 3) + 1);
  local_4 = 0;
  local_124[0] = 0x29;
  FUN_0044df40(local_120,local_124,8,'\x01');
  FUN_0044dff0(local_120,*(byte **)((int)this + 0x18),*(int *)((int)this + 0xc) + 7 >> 3);
  if (param_3 == '\0') {
    uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
    if ((char)uVar1 == '\0') {
      (**(code **)(*(int *)this + 0x30))(local_120,0,8,0,param_1,param_2,0);
    }
    else {
      (**(code **)(*(int *)this + 0x30))(local_120,0,8,0,param_1,param_2,1);
    }
  }
  else {
    uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
    bVar2 = (char)uVar1 == '\0';
    if (bVar2) {
      uVar3 = FUN_0044e910();
      uVar1 = (undefined4)uVar3;
    }
    else {
      uVar3 = FUN_0044e910();
      uVar1 = (undefined4)uVar3;
    }
    FUN_00453ac0(this,local_114,local_120[0],0,8,0,param_1,param_2,!bVar2,'\0',uVar1,0);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00456240 */
