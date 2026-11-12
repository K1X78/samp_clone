/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468e60
 * Name: FUN_00468e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_00468e60(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  if (((int)param_3 < 0) || (0x23 < (int)param_3)) {
    *param_2 = '\0';
  }
  else {
    if (param_3 == 0) {
      param_3 = 10;
    }
    pcVar3 = param_2;
    if (param_1 == 0) {
      *param_2 = '0';
      param_2[1] = '\0';
      return param_2;
    }
    do {
      pcVar5 = pcVar3;
      uVar2 = param_1 / param_3;
      uVar4 = param_1 % param_3;
      if (9 < (int)uVar4) {
        uVar4 = uVar4 + 7;
      }
      *pcVar5 = (char)uVar4 + '0';
      param_1 = uVar2;
      pcVar3 = pcVar5 + 1;
    } while (uVar2 != 0);
    pcVar5[1] = '\0';
    pcVar3 = param_2;
    if (param_2 < pcVar5) {
      do {
        cVar1 = *pcVar3;
        *pcVar3 = *pcVar5;
        pcVar3 = pcVar3 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + -1;
      } while (pcVar3 < pcVar5);
      return param_2;
    }
  }
  return param_2;
}


/* END FUNCTION 0x00468e60 */
