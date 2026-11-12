/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0040
 * Name: FUN_100d0040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100d0040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5)

{
  undefined4 uVar1;
  
  *param_4 = 0;
  if (param_5 < 0) {
    return 0xfffffffe;
  }
  uVar1 = FUN_100cfeb0(param_1,param_2,param_3,param_4);
  return uVar1;
}


/* END FUNCTION 0x100d0040 */
