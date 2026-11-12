/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d280
 * Name: FUN_0040d280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __cdecl FUN_0040d280(double param_1)

{
  ulonglong uVar1;
  
  if (-9.223372036854776e+18 <= param_1) {
    if (param_1 <= 9.223372036854776e+18) {
      uVar1 = FUN_004a0540();
      return uVar1;
    }
  }
  return 0x8000000000000000;
}


/* END FUNCTION 0x0040d280 */
