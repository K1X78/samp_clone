/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010a306
 * Name: __CopyMan
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  param_1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x1010a306 */
