/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004223d0
 * Name: FUN_004223d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004223d0(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (int *)0x0) && (0 < *param_2)) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      pcVar1 = FUN_00422300(param_1,*(char **)(param_2[3] + iVar3),param_3,param_4);
      *(char **)(iVar3 + param_2[3]) = pcVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *param_2);
  }
  return;
}


/* END FUNCTION 0x004223d0 */
