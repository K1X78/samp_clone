/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479020
 * Name: FUN_00479020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00479020(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_0049f130(&DAT_004fc480,*(int *)(param_2 + 4));
  if (pcVar1 == (char *)0x0) {
    FUN_0046fcb0(param_1,*(int *)(param_2 + 8),&DAT_004fc400,*(int *)(param_2 + 0xc));
    return 0;
  }
  iVar2 = FUN_0046fcb0(param_1,*(int *)(param_2 + 8),pcVar1,*(int *)(param_2 + 0xc));
  return iVar2;
}


/* END FUNCTION 0x00479020 */
