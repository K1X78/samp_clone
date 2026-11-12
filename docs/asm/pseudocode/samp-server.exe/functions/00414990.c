/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414990
 * Name: FUN_00414990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_00414990(void)

{
  uint *puVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint unaff_EDI;
  
  if (*(int *)(in_EAX + 0x38) == 0) {
    iVar2 = FUN_00413460(*(undefined4 *)(in_EAX + 0x28));
    *(int *)(in_EAX + 0x38) = iVar2;
    if (iVar2 == 0) {
      return 7;
    }
  }
  puVar1 = *(uint **)(in_EAX + 0x38);
  uVar3 = FUN_0040b9a0();
  if (unaff_EDI <= uVar3) {
    uVar3 = FUN_00413480(puVar1,unaff_EDI);
    return uVar3;
  }
  return 0;
}


/* END FUNCTION 0x00414990 */
