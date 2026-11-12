/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee820
 * Name: FUN_100ee820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100ee820(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3 + -1;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (*pcVar1 == param_2) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}


/* END FUNCTION 0x100ee820 */
