/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a120
 * Name: FUN_0041a120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0041a120(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00419f00(*param_1,0x97,1);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0040e580();
    return (undefined4 *)0x0;
  }
  puVar1[4] = param_2;
  FUN_00419ee0();
  return puVar1;
}


/* END FUNCTION 0x0041a120 */
