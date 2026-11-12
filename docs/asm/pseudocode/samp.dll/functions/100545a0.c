/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100545a0
 * Name: FUN_100545a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100545a0(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *local_8;
  char local_4;
  
  local_4 = param_2;
  pcVar2 = param_1;
  if (param_2 != '\0') {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    iVar3 = (int)pcVar2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  local_8 = pcVar2;
  iVar3 = FUN_100544f0(&local_8,&local_8);
  if ((iVar3 == 0) && (param_2 != '\0')) {
    _free(pcVar2);
  }
  return;
}


/* END FUNCTION 0x100545a0 */
