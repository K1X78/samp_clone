/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062360
 * Name: FUN_10062360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10062360(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10062000(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10062040(param_1);
    if (iVar1 != -1) {
      (&DAT_1016be98)[iVar1] = 0;
      return 1;
    }
  }
  uVar2 = (*DAT_1016c360)(param_1);
  return uVar2;
}


/* END FUNCTION 0x10062360 */
