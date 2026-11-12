/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086010
 * Name: FUN_10086010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10086010(undefined4 *param_1,undefined4 param_2,LONG *param_3,undefined4 param_4)

{
  *param_1 = param_2;
  if (param_3 == (LONG *)0x0) {
    SetRectEmpty((LPRECT)(param_1 + 3));
  }
  else {
    ((LPRECT)(param_1 + 3))->left = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
    param_1[6] = param_3[3];
  }
  FUN_10085e90(param_4,0xc8808080,0);
  return;
}


/* END FUNCTION 0x10086010 */
