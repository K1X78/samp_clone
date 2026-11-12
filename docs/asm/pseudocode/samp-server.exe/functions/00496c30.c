/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496c30
 * Name: FUN_00496c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00496c30(undefined1 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  iVar3 = 0;
  if (pcVar2 == param_3 + 1) {
    *param_1 = 0;
    return;
  }
  do {
    cVar1 = param_3[iVar4];
    if ((',' < cVar1) && (cVar1 < '{')) {
      param_1[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != (int)pcVar2 - (int)(param_3 + 1));
  param_1[iVar3] = 0;
  return;
}


/* END FUNCTION 0x00496c30 */
