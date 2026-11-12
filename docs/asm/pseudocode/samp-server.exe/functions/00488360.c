/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488360
 * Name: FUN_00488360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00488360(void *this,byte param_1,undefined4 param_2,char *param_3,uint param_4)

{
  int iVar1;
  byte local_128 [4];
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b187b;
  local_c = ExceptionList;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_c;
    if (param_4 != 0) {
      ExceptionList = &local_c;
      iVar1 = FUN_0049fbe9(param_3,"rb");
      *(int *)((int)this + 4) = iVar1;
      if (iVar1 != 0) {
        FUN_0044d8a0(local_120);
        local_4 = 0;
        local_128[0] = 5;
        FUN_0044df40(local_120,local_128,8,'\x01');
        local_128[0] = param_1;
        FUN_0044df40(local_120,local_128,8,'\x01');
        local_124 = param_2;
        FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
        if (DAT_004fc438 != (void *)0x0) {
          FUN_00493c10(DAT_004fc438,&DAT_004bef9c,local_120,*(ushort *)((int)this + 0x11),5);
        }
        *(undefined4 *)this = 1;
        *(undefined1 *)((int)this + 8) = 2;
        *(undefined4 *)((int)this + 0x17) = 0;
        *(undefined4 *)((int)this + 0x1024) = 0;
        *(uint *)((int)this + 0x1020) = param_4 >> 0xc;
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
        ExceptionList = local_c;
        return;
      }
    }
    FUN_004881a0((int)this);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00488360 */
