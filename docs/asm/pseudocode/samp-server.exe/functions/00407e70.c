/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407e70
 * Name: FUN_00407e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00407e70(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00407e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_004ca174)();
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x00407e70 */
