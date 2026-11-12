/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2860
 * Name: FUN_100b2860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b2860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100b3480(param_1);
  if (iVar1 == -1) {
    return 0;
  }
  FUN_100b3510();
  FUN_100b3530(iVar1);
  uVar2 = FUN_100b3540(param_2);
  FUN_100b3520();
  return uVar2;
}


/* END FUNCTION 0x100b2860 */
