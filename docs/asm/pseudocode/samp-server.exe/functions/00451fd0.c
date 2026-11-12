/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451fd0
 * Name: FUN_00451fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint __thiscall
FUN_00451fd0(void *this,char *param_1,uint param_2,undefined4 param_3,undefined2 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *_Memory;
  undefined4 uVar5;
  int local_13c [2];
  int local_134;
  byte *local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  void *local_1a;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b0ddb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044d930(local_13c,(undefined4 *)param_1,param_2,'\0');
  local_20 = param_3;
  local_8 = 0;
  local_1c = param_4;
  local_1a = this;
  FUN_0044dd00(local_13c,8);
  if (*param_1 == '(') {
    FUN_0044dd00(local_13c,0x28);
  }
  FUN_0044da70(local_13c,(byte *)&param_2,8,'\x01');
  bVar1 = FUN_00460ac0((char)param_2);
  bVar2 = FUN_0044db30(local_13c,(byte *)&local_24,0x20,1);
  if (((bVar2) && (bVar1 != 0xff)) &&
     (iVar3 = FUN_00460ab0((void *)((int)this + 0x80c),bVar1), iVar3 != 0)) {
    if (local_24 == 0) {
      local_28 = (byte *)0x0;
      (**(code **)(iVar3 + 4))(&local_28);
LAB_00452134:
      local_8 = 0xffffffff;
      uVar5 = FUN_0044d9b0((int)local_13c);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    if (local_13c[0] - local_134 != 0) {
      uVar4 = (local_13c[0] - local_134) + 7 >> 3;
      if (0xfffff < (int)uVar4) {
        _Memory = operator_new(uVar4);
      }
      else {
        _Memory = &stack0xfffffeb8;
      }
      uVar5 = FUN_0044da70(local_13c,_Memory,local_24,'\0');
      if ((char)uVar5 != '\0') {
        local_28 = _Memory;
        (**(code **)(iVar3 + 4))(&local_28);
        if ((0xfffff < (int)uVar4) && (_Memory != (byte *)0x0)) {
          _free(_Memory);
        }
        goto LAB_00452134;
      }
    }
  }
  local_8 = 0xffffffff;
  uVar4 = FUN_0044d9b0((int)local_13c);
  ExceptionList = local_10;
  return uVar4 & 0xffffff00;
}


/* END FUNCTION 0x00451fd0 */
