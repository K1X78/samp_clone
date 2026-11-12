/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5df0
 * Name: FUN_100b5df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b5df0(char *param_1)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\x01') {
      iVar1 = *(int *)(param_1 + 4);
      FUN_100b1400(param_1);
      if (iVar1 != 0) {
        FUN_100b13d0(iVar1);
      }
    }
    else if (*param_1 == '\x02') {
      FUN_100b1880();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100b5df0 */
