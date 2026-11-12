/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048fca0
 * Name: FUN_0048fca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048fca0(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  _union_1226 unaff_EDI;
  undefined1 local_8 [8];
  
  pcVar2 = _strtok((char *)0x0," ");
  if (pcVar2 != (char *)0x0) {
    iVar1 = *(int *)((int)DAT_004fc438 + 8);
    uVar3 = _atol(pcVar2);
    if (((ushort)uVar3 < 1000) &&
       (uVar4 = uVar3 & 0xffff, *(int *)(iVar1 + 0x24de4 + uVar4 * 4) != 0)) {
      (**(code **)(**(int **)((int)DAT_004fc438 + 0x40) + 0xe8))(local_8,uVar4);
      inet_ntoa((in_addr)unaff_EDI);
      FUN_00491fa0("%s <#%d - %s> has been banned.");
      pcVar2 = inet_ntoa((in_addr)unaff_EDI);
      FUN_004940e0(DAT_004fc438,uVar4 * 0x19 + 0x26d24 + iVar1,pcVar2);
      FUN_00494040(DAT_004fc438,uVar3);
    }
  }
  return;
}


/* END FUNCTION 0x0048fca0 */
