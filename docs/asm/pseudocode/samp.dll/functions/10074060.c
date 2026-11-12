/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10074060
 * Name: FUN_10074060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10074060(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_100c5620();
  iVar1 = (**(code **)(*DAT_102ac9d0 + 0x40))(DAT_102ac9d0,param_2);
  if (-1 < iVar1) {
    FUN_100c5880();
  }
  return iVar1;
}


/* END FUNCTION 0x10074060 */
