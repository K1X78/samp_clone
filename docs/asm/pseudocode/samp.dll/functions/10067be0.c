/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067be0
 * Name: FUN_10067be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10067be0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - (int)(param_2 + 1)) < 0x91) {
    FUN_100b5c40(param_2,0xff);
    FUN_10066e90(param_2);
    FUN_10067650(4,param_2,0,param_1 >> 8 | 0xff000000,0);
  }
  return;
}


/* END FUNCTION 0x10067be0 */
