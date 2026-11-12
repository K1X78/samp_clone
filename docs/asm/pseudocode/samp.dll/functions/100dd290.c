/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd290
 * Name: FUN_100dd290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_100dd290(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 == 0) && (param_2 == 0 && param_3 == 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_100f9cc9(*(undefined4 *)(param_1 + 0x10),&DAT_10118e1c);
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0) {
      return 1;
    }
  }
  iVar1 = _fseek(*(FILE **)(param_1 + 0x24),param_2,param_4);
  return -(iVar1 != 0) & 2;
}


/* END FUNCTION 0x100dd290 */
