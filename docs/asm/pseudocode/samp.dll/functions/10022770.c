/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022770
 * Name: FUN_10022770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10022770(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_100331a0(param_2);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_100223e0(param_1);
    if ((char)uVar1 != '\0') {
      FUN_10022390(param_1);
      uVar1 = FUN_100224c0(param_2);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}


/* END FUNCTION 0x10022770 */
