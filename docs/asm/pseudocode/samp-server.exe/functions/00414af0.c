/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414af0
 * Name: FUN_00414af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00414af0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(in_EAX + 4);
  FUN_0040c2c0();
  if ((*(int *)(iVar1 + 0x2c) == 0) && (unaff_EBX != 0)) {
    puVar2 = FUN_00412900();
    *(undefined4 **)(iVar1 + 0x2c) = puVar2;
    *(undefined4 *)(iVar1 + 0x30) = param_1;
  }
  FUN_0040c340();
  return *(undefined4 *)(iVar1 + 0x2c);
}


/* END FUNCTION 0x00414af0 */
