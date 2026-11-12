/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401970
 * Name: FUN_00401970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401970(int *param_1,int param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 6) < '\x05') {
    *param_3 = '\0';
    *param_4 = 0;
    return 0x12;
  }
  if (*(char *)(iVar2 + 6) < '\a') {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x34);
  }
  if (param_2 < (iVar3 - *(int *)(iVar2 + 0x30)) / (int)*(short *)(iVar2 + 10)) {
    puVar4 = (undefined4 *)(*(short *)(iVar2 + 10) * param_2 + *(int *)(iVar2 + 0x30) + iVar2);
    if (*(short *)(iVar2 + 10) == 8) {
      pcVar5 = (char *)(puVar4[1] + iVar2);
    }
    else {
      pcVar5 = (char *)(puVar4 + 1);
    }
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *param_3 = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    *param_4 = *puVar4;
    return 0;
  }
  return 0x14;
}


/* END FUNCTION 0x00401970 */
