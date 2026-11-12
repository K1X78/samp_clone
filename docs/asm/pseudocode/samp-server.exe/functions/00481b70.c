/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481b70
 * Name: FUN_00481b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


long __cdecl FUN_00481b70(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *_Str;
  long lVar4;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc408) && (iVar2 = *(int *)(DAT_004fc404 + uVar1 * 4), iVar2 != 0)) {
    iVar3 = *(int *)(param_2 + 8);
    if ((-1 < iVar3) &&
       ((iVar3 < *(int *)(iVar2 + 4) &&
        (_Str = *(char **)(*(int *)(iVar2 + 8) +
                          ((*(int *)(iVar2 + 0x10) + 1) * *(int *)(iVar2 + 4) + iVar3) * 4),
        _Str != (char *)0x0)))) {
      lVar4 = _atol(_Str);
      return lVar4;
    }
  }
  else if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_get_field_int(): invalid result handle %u");
  }
  return 0;
}


/* END FUNCTION 0x00481b70 */
