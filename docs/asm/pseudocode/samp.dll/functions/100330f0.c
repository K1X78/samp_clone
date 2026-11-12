/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100330f0
 * Name: FUN_100330f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100330f0(int *param_1,int *param_2)

{
  char cVar1;
  
  if ((char)param_1[4] != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x14))();
    if (cVar1 != '\0') {
      FUN_10033040();
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  *param_2 = param_1[1];
  param_2[1] = param_1[2];
  return;
}


/* END FUNCTION 0x100330f0 */
