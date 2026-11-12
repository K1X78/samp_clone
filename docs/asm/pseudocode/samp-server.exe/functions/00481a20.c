/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481a20
 * Name: FUN_00481a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00481a20(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc408) && (iVar2 = *(int *)(DAT_004fc404 + uVar1 * 4), iVar2 != 0)) {
    iVar3 = *(int *)(param_2 + 8);
    if ((-1 < iVar3) && (iVar3 < *(int *)(iVar2 + 4))) {
      pcVar4 = *(char **)(*(int *)(iVar2 + 8) + iVar3 * 4);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      FUN_0046fcb0(param_1,*(int *)(param_2 + 0xc),pcVar4,*(int *)(param_2 + 0x10));
      return 1;
    }
    FUN_0046fcb0(param_1,*(int *)(param_2 + 0xc),"",*(int *)(param_2 + 0x10));
  }
  else if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_field_name(): invalid result handle %u");
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x00481a20 */
