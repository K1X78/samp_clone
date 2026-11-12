/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7750
 * Name: FUN_100a7750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a7750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100b3480(param_2);
  if (iVar1 == -1) {
    iVar1 = FUN_100b34a0(param_2);
    iVar2 = FUN_100b5900(param_3);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_100b34c0(iVar1,param_3);
  }
  FUN_100b4260(param_1,iVar1);
  FUN_100b3510();
  FUN_100b3530(iVar1);
  return 1;
}


/* END FUNCTION 0x100a7750 */
