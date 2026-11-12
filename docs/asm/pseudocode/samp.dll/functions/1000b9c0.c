/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b9c0
 * Name: FUN_1000b9c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000b9c0(undefined1 *param_1,int param_2,char *param_3)

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
    if (param_2 == 0) break;
    cVar1 = param_3[iVar4];
    if ((((cVar1 == '.') || (('`' < cVar1 && (cVar1 < '{')))) || (('@' < cVar1 && (cVar1 < '['))))
       || (('/' < cVar1 && (cVar1 < ':')))) {
      param_1[iVar3] = cVar1;
      param_2 = param_2 + -1;
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != (int)pcVar2 - (int)(param_3 + 1));
  param_1[iVar3] = 0;
  return;
}


/* END FUNCTION 0x1000b9c0 */
