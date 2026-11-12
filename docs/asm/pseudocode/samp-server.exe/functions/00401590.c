/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401590
 * Name: FUN_00401590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401590(int *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = *param_1;
  if (param_2 < (*(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24)) / (int)*(short *)(iVar2 + 10)) {
    iVar3 = *(short *)(iVar2 + 10) * param_2 + *(int *)(iVar2 + 0x24) + iVar2;
    if (*(short *)(iVar2 + 10) == 8) {
      pcVar4 = (char *)(*(int *)(iVar3 + 4) + iVar2);
    }
    else {
      pcVar4 = (char *)(iVar3 + 4);
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *param_3 = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    return 0;
  }
  return 0x14;
}


/* END FUNCTION 0x00401590 */
