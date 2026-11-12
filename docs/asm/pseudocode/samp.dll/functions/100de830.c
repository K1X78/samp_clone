/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de830
 * Name: FUN_100de830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100de830(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  for (; (cVar1 != '\0' && (cVar2 = *param_2, cVar2 != '\0')); param_2 = param_2 + 1) {
    if (('`' < cVar1) && (cVar1 < '{')) {
      cVar1 = cVar1 + -0x20;
    }
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    if (cVar1 != cVar2) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  if (('`' < cVar1) && (cVar1 < '{')) {
    cVar1 = cVar1 + -0x20;
  }
  cVar2 = *param_2;
  if (('`' < cVar2) && (cVar2 < '{')) {
    cVar2 = cVar2 + -0x20;
  }
  return cVar1 == cVar2;
}


/* END FUNCTION 0x100de830 */
