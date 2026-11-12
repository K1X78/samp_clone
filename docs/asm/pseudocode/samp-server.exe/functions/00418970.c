/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418970
 * Name: FUN_00418970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00418970(undefined **param_1,double *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_17c [28];
  undefined1 local_160 [352];
  
  iVar1 = FUN_0043a410();
  if (iVar1 != 0) {
    return 0;
  }
  FUN_004081c0(local_160,0x15e,1000000000);
  FUN_00417bf0((int)local_17c,0,param_1,param_2);
  uVar2 = FUN_00412be0();
  return uVar2;
}


/* END FUNCTION 0x00418970 */
