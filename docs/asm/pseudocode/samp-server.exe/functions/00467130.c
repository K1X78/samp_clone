/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467130
 * Name: FUN_00467130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00467130(void *this,ushort param_1,uint param_2)

{
  char *pcVar1;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14db;
  local_c = ExceptionList;
  if (((ushort)param_2 < 0x800) && (*(int *)((int)this + (param_2 & 0xffff) * 4) != 0)) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_124 = param_2;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    pcVar1 = (char *)((int)this + param_1 + 0x6000 + (param_2 & 0xffff) * 1000);
    if (*pcVar1 != '\0') {
      FUN_00493c10(DAT_004fc438,&DAT_004bb324,local_120,param_1,2);
    }
    *pcVar1 = '\0';
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00467130 */
