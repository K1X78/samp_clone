/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493cf0
 * Name: FUN_00493cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00493cf0(float param_1)

{
  int iVar1;
  int iVar2;
  
  if (150.0 <= param_1) {
    iVar2 = 1;
    if (250.0 <= param_1) {
      iVar2 = 2;
    }
    iVar1 = _rand();
    if (iVar1 % iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00493cf0 */
