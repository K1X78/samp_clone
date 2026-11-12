/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004822d0
 * Name: FUN_004822d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_004822d0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc410) && (iVar2 = *(int *)(DAT_004fc40c + uVar1 * 4), iVar2 != 0)) {
    iVar2 = FUN_004334e0(iVar2);
    FUN_00482160(&DAT_004fc40c,uVar1);
    return iVar2 == 0;
  }
  if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_close: invalid database handle %u");
  }
  return false;
}


/* END FUNCTION 0x004822d0 */
