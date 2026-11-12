/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467000
 * Name: FUN_00467000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00467000(void *this,uint param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14db;
  local_c = ExceptionList;
  if (((ushort)param_1 < 0x800) && (uVar5 = param_1 & 0xffff, *(int *)((int)this + uVar5 * 4) != 0))
  {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    pcVar3 = *(char **)((int)this + uVar5 * 4 + 0x4000);
    local_4 = 0;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    local_124 = param_1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,*(byte **)((int)this + uVar5 * 4 + 0x2000),0x3f);
    local_124 = (int)pcVar3 - (int)pcVar1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,*(byte **)((int)this + uVar5 * 4 + 0x4000),
                 (int)pcVar3 - (int)pcVar1 & 0xffff);
    FUN_00493960(DAT_004fc438,&DAT_004bb320,local_120,0xffff);
    puVar6 = (undefined4 *)(uVar5 * 1000 + 0x6000 + (int)this);
    for (iVar4 = 0xfa; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0x1010101;
      puVar6 = puVar6 + 1;
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00467000 */
