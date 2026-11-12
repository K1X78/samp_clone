/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a5c90
 * Name: FUN_100a5c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a5c90(undefined4 param_1,size_t param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_1018f6b4 != '\0') {
    DAT_1018f6b8 = _calloc(1,param_2);
    FUN_100b1a40(param_1,DAT_1018f6b8,param_2);
    FUN_100b6610(DAT_1018f6b8,param_2,param_3);
    if (DAT_1018f6b8 != (void *)0x0) {
      _free(DAT_1018f6b8);
      DAT_1018f6b8 = (void *)0x0;
    }
    return param_1;
  }
  uVar1 = (*(code *)0x6f9fd0)(param_1,param_2,param_3);
  return uVar1;
}


/* END FUNCTION 0x100a5c90 */
