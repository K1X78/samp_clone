/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004189f0
 * Name: FUN_004189f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004189f0(int param_1,undefined4 param_2,undefined **param_3)

{
  undefined4 uVar1;
  undefined1 local_1c [25];
  undefined1 local_3;
  
  if (param_1 < 1) {
    return param_2;
  }
  FUN_004081c0(param_2,param_1,0);
  local_3 = 0;
  FUN_00417bf0((int)local_1c,0,param_3,(double *)&stack0x00000010);
  uVar1 = FUN_00412be0();
  return uVar1;
}


/* END FUNCTION 0x004189f0 */
