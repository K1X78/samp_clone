/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e1d0
 * Name: FUN_0044e1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e1d0(void *this,undefined4 *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0c8b;
  local_c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    FUN_0044d930(local_120,param_1,param_2 + 7U >> 3,'\0');
    pbVar2 = *(byte **)this;
    local_4 = 0;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar1 = FUN_0044d9f0((int)local_120);
      if ((char)uVar1 == '\0') {
        pbVar2 = *(byte **)(pbVar2 + 8);
      }
      else {
        pbVar2 = *(byte **)(pbVar2 + 0xc);
      }
      if ((*(int *)(pbVar2 + 8) == 0) && (*(int *)(pbVar2 + 0xc) == 0)) {
        FUN_0044df40(param_3,pbVar2,8,'\x01');
        pbVar2 = *(byte **)this;
      }
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0044e1d0 */
