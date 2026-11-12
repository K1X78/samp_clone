/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455b00
 * Name: FUN_00455b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00455b00(void *this,undefined4 param_1,undefined2 param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte local_124 [4];
  int local_120 [3];
  undefined4 *local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0dbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
  if ((char)uVar1 == '\0') {
    FUN_0044d8d0(local_120,1);
    pbVar4 = local_124;
    local_4 = 0;
    local_124[0] = 0x20;
    FUN_0044df40(local_120,pbVar4,8,'\x01');
    if (param_3 == '\0') {
      FUN_00452170(this,local_114,local_120[0],1,6,(char)param_4,param_1,param_2,0,1);
    }
    else {
      iVar2 = FUN_00453950(this,param_1,CONCAT22((short)((uint)pbVar4 >> 0x10),param_2),'\0','\x01')
      ;
      if (iVar2 != 0) {
        uVar3 = FUN_0044e910();
        FUN_00453ac0(this,(int)local_114,local_120[0],1,6,param_4,param_1,param_2,'\0','\0',
                     (int)uVar3,0);
        *(undefined4 *)(iVar2 + 0xcb0) = 1;
      }
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00455b00 */
