/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004046f0
 * Name: FUN_004046f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004046f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_2 = CONCAT13((char)uVar1,
                     CONCAT12((char)((uint)uVar1 >> 8),
                              CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
  return param_2;
}


/* END FUNCTION 0x004046f0 */
