/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468dc0
 * Name: FUN_00468dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_00468dc0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((param_3 < 0) || (0x23 < param_3)) {
    *param_2 = '\0';
  }
  else {
    if (param_3 == 0) {
      param_3 = 10;
    }
    bVar5 = param_1 < 0;
    if (param_1 == 0) {
      *param_2 = '0';
      param_2[1] = '\0';
      return param_2;
    }
    pcVar4 = param_2;
    if (bVar5) {
      param_1 = -param_1;
    }
    while (0 < param_1) {
      iVar3 = param_1 % param_3;
      if (9 < iVar3) {
        iVar3 = iVar3 + 7;
      }
      *pcVar4 = (char)iVar3 + '0';
      pcVar4 = pcVar4 + 1;
      param_1 = param_1 / param_3;
    }
    if (bVar5) {
      *pcVar4 = '-';
      pcVar4 = pcVar4 + 1;
    }
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + -1;
    pcVar2 = param_2;
    if (param_2 < pcVar4) {
      do {
        cVar1 = *pcVar2;
        *pcVar2 = *pcVar4;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + -1;
      } while (pcVar2 < pcVar4);
      return param_2;
    }
  }
  return param_2;
}


/* END FUNCTION 0x00468dc0 */
