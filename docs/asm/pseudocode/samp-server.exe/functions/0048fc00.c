/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048fc00
 * Name: FUN_0048fc00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048fc00(void)

{
  int iVar1;
  char *_Str;
  uint uVar2;
  _union_1226 unaff_EDI;
  undefined1 local_8 [8];
  
  _Str = _strtok((char *)0x0,"");
  if (_Str != (char *)0x0) {
    iVar1 = *(int *)((int)DAT_004fc438 + 8);
    uVar2 = _atol(_Str);
    if (((ushort)uVar2 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar2 & 0xffff) * 4) != 0)) {
      (**(code **)(**(int **)((int)DAT_004fc438 + 0x40) + 0xe8))(local_8,uVar2 & 0xffff);
      inet_ntoa((in_addr)unaff_EDI);
      FUN_00491fa0("%s <#%d - %s> has been kicked.");
      FUN_00494040(DAT_004fc438,uVar2);
    }
  }
  return;
}


/* END FUNCTION 0x0048fc00 */
