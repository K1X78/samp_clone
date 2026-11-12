/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046af20
 * Name: FUN_0046af20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_0046af20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_00401710(piVar1,(byte *)"OnGameModeInit",&local_4);
      if (iVar2 == 0) {
        FUN_00401c90(*(int **)(param_1 + iVar3 * 4),&local_8,local_4);
        if (local_8 == 0) {
          return 0;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return local_8;
}


/* END FUNCTION 0x0046af20 */
