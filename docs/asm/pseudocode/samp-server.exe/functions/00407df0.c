/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407df0
 * Name: FUN_00407df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00407df0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0043a410();
  if (iVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00407dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_004ca168)();
  return uVar2;
}


/* END FUNCTION 0x00407df0 */
