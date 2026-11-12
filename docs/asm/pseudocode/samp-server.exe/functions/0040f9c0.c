/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f9c0
 * Name: FUN_0040f9c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_0040f9c0(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 == (byte *)0x0) {
    return param_2 == (byte *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    return false;
  }
  iVar1 = FUN_00408450(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


/* END FUNCTION 0x0040f9c0 */
