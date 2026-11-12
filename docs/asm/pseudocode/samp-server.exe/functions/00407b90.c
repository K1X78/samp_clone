/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407b90
 * Name: FUN_00407b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00407b90(int *param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(*param_1 + 0x2c) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
    return uVar1;
  }
  return 0x200;
}


/* END FUNCTION 0x00407b90 */
