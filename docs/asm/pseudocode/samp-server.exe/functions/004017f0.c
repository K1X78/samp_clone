/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004017f0
 * Name: FUN_004017f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004017f0(int *param_1,int param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  iVar2 = *param_1;
  if (param_2 < (*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c)) / (int)*(short *)(iVar2 + 10)) {
    puVar3 = (undefined4 *)(*(short *)(iVar2 + 10) * param_2 + *(int *)(iVar2 + 0x2c) + iVar2);
    if (*(short *)(iVar2 + 10) == 8) {
      pcVar4 = (char *)(puVar3[1] + iVar2);
    }
    else {
      pcVar4 = (char *)(puVar3 + 1);
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *param_3 = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    *param_4 = *puVar3;
    return 0;
  }
  return 0x14;
}


/* END FUNCTION 0x004017f0 */
