/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10017380
 * Name: FUN_10017380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10017380(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    cVar1 = *param_2;
LAB_100173a0:
    do {
      if (('`' < cVar2) && (cVar2 < '{')) {
        cVar2 = cVar2 + -0x20;
      }
      cVar3 = cVar1;
      if (('`' < cVar1) && (cVar1 < '{')) {
        cVar3 = cVar1 + -0x20;
      }
      if (cVar2 != cVar3) {
        cVar2 = param_1[1];
        param_1 = param_1 + 1;
        if (cVar2 != '\0') goto LAB_100173a0;
      }
      pcVar4 = param_2;
      cVar2 = cVar1;
      while( true ) {
        cVar3 = pcVar4[(int)param_1 - (int)param_2];
        if (('`' < cVar3) && (cVar3 < '{')) {
          cVar3 = cVar3 + -0x20;
        }
        if (('`' < cVar2) && (cVar2 < '{')) {
          cVar2 = cVar2 + -0x20;
        }
        if (cVar3 != cVar2) break;
        cVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar2 == '\0') {
          return param_1;
        }
      }
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  return (char *)0x0;
}


/* END FUNCTION 0x10017380 */
