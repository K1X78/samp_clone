/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7820
 * Name: FUN_100a7820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100a7820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  
  DAT_101e0448 = param_2;
  iVar2 = FUN_100a76c0(param_1,param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_100a7750(param_2,param_3,param_5);
    if (cVar1 == '\0') {
      if (DAT_102aca10 != 0) {
        FUN_10067b60(DAT_102aca10,"[error] Failed to load texture for model ID: %d",param_2);
      }
    }
    else {
      iVar2 = FUN_100b1bc0(param_4,param_2);
      if (iVar2 != 0) {
        return 1;
      }
      if (DAT_102aca10 != 0) {
        FUN_10067b60(DAT_102aca10,"[error] Failed to load model ID: %d",param_2);
        return 0;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100a7820 */
