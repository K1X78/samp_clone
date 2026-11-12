/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebd10
 * Name: FUN_100ebd10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ebd10(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[0x18b];
  if (iVar1 != 0) {
    if (*(int *)(*param_2 + 0x6c) != 0) {
      FUN_100dec30(*param_2,5,2);
    }
    FUN_100eb940();
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_100ebb60();
    }
    if (*(int *)(*param_2 + 0x6c) != 0) {
      FUN_100dec70(*param_2,5);
    }
    if (param_1 != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return;
}


/* END FUNCTION 0x100ebd10 */
