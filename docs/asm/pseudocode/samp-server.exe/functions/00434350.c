/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434350
 * Name: FUN_00434350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00434350(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00419de0();
  if (iVar1 != 0) {
    uVar2 = FUN_0041d7c0();
    return uVar2;
  }
  iVar1 = *(int *)(*param_1 + 0x44);
  FUN_00407e50(iVar1);
  uVar2 = FUN_0042fc30();
  uVar2 = FUN_004340c0(uVar2);
  FUN_00407e90(iVar1);
  return uVar2;
}


/* END FUNCTION 0x00434350 */
