/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004168e0
 * Name: FUN_004168e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004168e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004154a0(param_1,(void *)0x0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0040ddd0(param_1,*puVar1,puVar1[1]);
    return;
  }
  FUN_0040ddd0(param_1,0,0);
  return;
}


/* END FUNCTION 0x004168e0 */
