/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eac80
 * Name: FUN_100eac80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100eac80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((param_1[0x18a] != 0) || (iVar1 = FUN_100ea0b0(), iVar1 == 0)) &&
     ((iVar1 = FUN_100ea160(param_1,param_2,param_3,param_4), iVar1 != 0 ||
      ((param_1[0x18a] == 0 || (*(int *)(param_1[0x18a] + 0x401c) == 2)))))) {
    *(undefined4 *)(param_1[0x18a] + 0x401c) = 2;
    FUN_100d8ae0(*param_1,"CONNECT phase completed!\n");
  }
  return iVar1;
}


/* END FUNCTION 0x100eac80 */
