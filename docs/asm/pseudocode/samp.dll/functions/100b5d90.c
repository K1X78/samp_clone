/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5d90
 * Name: FUN_100b5d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b5d90(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (DAT_102aca3c != 0) {
    iVar1 = FUN_100a7630(param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_100a7630(param_1);
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x2c))();
        return uVar3;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100b5d90 */
