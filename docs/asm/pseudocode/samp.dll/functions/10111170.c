/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111170
 * Name: FUN_10111170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10111170(char *param_1,int param_2)

{
  if (param_1 == (char *)0x0) {
    param_1 = (char *)0x0;
  }
  else if ((*param_1 == -1) && (param_1[1] == '%')) {
    param_1 = (char *)**(int **)(param_1 + 2);
  }
  else if ((*param_1 == -0x17) && (param_2 != 0)) {
    param_1 = param_1 + *(int *)(param_1 + 1) + 5;
  }
  return param_1;
}


/* END FUNCTION 0x10111170 */
