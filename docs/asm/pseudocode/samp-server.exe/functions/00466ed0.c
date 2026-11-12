/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466ed0
 * Name: FUN_00466ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00466ed0(void *this,ushort param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14db;
  local_c = ExceptionList;
  if (((ushort)param_2 < 0x800) && (uVar4 = param_2 & 0xffff, *(int *)((int)this + uVar4 * 4) != 0))
  {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    pcVar3 = *(char **)((int)this + uVar4 * 4 + 0x4000);
    local_4 = 0;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    local_124 = param_2;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,*(byte **)((int)this + uVar4 * 4 + 0x2000),0x3f);
    local_124 = (int)pcVar3 - (int)pcVar1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,*(byte **)((int)this + uVar4 * 4 + 0x4000),
                 (int)pcVar3 - (int)pcVar1 & 0xffff);
    FUN_00493c10(DAT_004fc438,&DAT_004bb320,local_120,param_1,2);
    *(undefined1 *)((int)this + param_1 + 0x6000 + uVar4 * 1000) = 1;
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00466ed0 */
