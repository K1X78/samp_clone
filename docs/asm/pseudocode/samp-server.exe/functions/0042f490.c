/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f490
 * Name: FUN_0042f490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f490(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004154a0(param_1,(void *)0x0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0042e950(param_1,*puVar1);
    return;
  }
  FUN_0042e950(param_1,0);
  return;
}


/* END FUNCTION 0x0042f490 */
