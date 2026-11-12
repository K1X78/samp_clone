/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb9b0
 * Name: FUN_100eb9b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100eb9b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100c8b20();
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_100e41b0(param_1,param_2,&LAB_100e4500,&LAB_100e4530,FUN_100eb990);
  if (iVar1 != 0) {
    FUN_100d2af0(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    return iVar1;
  }
  *(int *)(*(int *)(param_1 + 0x28) + 0x838) = param_1;
  return 0;
}


/* END FUNCTION 0x100eb9b0 */
