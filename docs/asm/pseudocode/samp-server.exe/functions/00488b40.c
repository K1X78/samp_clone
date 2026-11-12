/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488b40
 * Name: FUN_00488b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00488b40(void *this,uint param_1)

{
  uint uVar1;
  int local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b189b;
  local_c = ExceptionList;
  if (((ushort)param_1 < 0x100) && (uVar1 = param_1 & 0xffff, *(int *)((int)this + uVar1 * 4) != 0))
  {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_124 = param_1 + 0x800;
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    if (*(char *)(uVar1 + 0xc00 + (int)this) != '\0') {
      FUN_00493c10(DAT_004fc438,&DAT_004bb324,local_120,*(ushort *)((int)this + 0xd00),2);
    }
    *(undefined1 *)(uVar1 + 0xc00 + (int)this) = 0;
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00488b40 */
