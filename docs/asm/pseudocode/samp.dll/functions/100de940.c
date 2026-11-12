/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de940
 * Name: FUN_100de940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100de940(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    cVar1 = *param_2;
    if (('`' < cVar1) && (cVar1 < '{')) {
      cVar1 = cVar1 + -0x20;
    }
    *param_1 = cVar1;
    cVar1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    param_3 = param_3 + -1;
  }
  return;
}


/* END FUNCTION 0x100de940 */
