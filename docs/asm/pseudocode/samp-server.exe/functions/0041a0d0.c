/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a0d0
 * Name: FUN_0041a0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0041a0d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return in_EAX;
  }
  if (in_EAX == (undefined4 *)0x0) {
    return param_2;
  }
  puVar1 = FUN_00419f00(param_1,0x45,0);
  FUN_0041a040((int)puVar1);
  return puVar1;
}


/* END FUNCTION 0x0041a0d0 */
