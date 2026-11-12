/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418a40
 * Name: FUN_00418a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00418a40(undefined4 param_1,undefined **param_2,double *param_3)

{
  undefined4 uVar1;
  undefined1 local_438 [25];
  undefined1 local_41f;
  undefined1 local_41c [1052];
  
  FUN_004081c0(local_41c,0x41a,0);
  local_41f = 0;
  FUN_00417bf0((int)local_438,0,param_2,param_3);
  uVar1 = FUN_00412be0();
  (*DAT_004ca1fc)(DAT_004ca200,param_1,uVar1);
  return;
}


/* END FUNCTION 0x00418a40 */
