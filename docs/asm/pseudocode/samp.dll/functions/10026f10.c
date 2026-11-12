/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026f10
 * Name: FUN_10026f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10026f10(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  param_1 = param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[param_1] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* END FUNCTION 0x10026f10 */
