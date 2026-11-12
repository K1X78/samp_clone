/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e300
 * Name: FUN_0042e300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0042e300(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *in_EAX;
  undefined3 extraout_var;
  int extraout_ECX;
  
  iVar1 = *in_EAX;
  iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x14);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0x1c) != '\0') &&
     (bVar3 = FUN_0040d070(iVar2), CONCAT31(extraout_var,bVar3) == 0)) {
    FUN_0042d3b0(extraout_ECX);
    *(undefined4 *)(*(int *)(iVar1 + 8) + 0x14) = 0;
    FUN_00420a50(0);
    return 0;
  }
  FUN_00418b00((undefined **)"temporary storage cannot be changed from within a transaction");
  return 1;
}


/* END FUNCTION 0x0042e300 */
