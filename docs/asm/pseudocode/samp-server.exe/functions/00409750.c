/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409750
 * Name: FUN_00409750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00409750(int param_1,uint *param_2)

{
  BOOL BVar1;
  
  if (1 < *(byte *)(param_1 + 0xc)) {
    *param_2 = 1;
    return 0;
  }
  BVar1 = LockFile(*(HANDLE *)(param_1 + 8),DAT_004ca204 + 1,0,1,0);
  if (BVar1 != 0) {
    UnlockFile(*(HANDLE *)(param_1 + 8),DAT_004ca204 + 1,0,1,0);
  }
  *param_2 = (uint)(BVar1 == 0);
  return 0;
}


/* END FUNCTION 0x00409750 */
