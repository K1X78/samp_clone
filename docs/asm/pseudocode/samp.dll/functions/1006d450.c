/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d450
 * Name: FUN_1006d450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1006d450(void)

{
  undefined4 uVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (DAT_102aca24 == 0) {
    return 0xffff;
  }
  FUN_100739e0(0x43160000,local_c,local_18);
  uVar1 = FUN_10012d70(0x43160000,local_c,local_18);
  return uVar1;
}


/* END FUNCTION 0x1006d450 */
