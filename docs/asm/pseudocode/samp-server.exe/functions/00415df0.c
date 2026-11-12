/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415df0
 * Name: FUN_00415df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00415df0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  char *unaff_EBX;
  
  uVar1 = FUN_00415dc0();
  if (*unaff_EBX != -0x7c) {
    iVar2 = *(int *)(in_EAX + 0x48) + 1;
    *(int *)(in_EAX + 0x48) = iVar2;
    FUN_00414e70(uVar1,0xe);
    *(int *)(unaff_EBX + 0x18) = iVar2;
    unaff_EBX[0x23] = *unaff_EBX;
    *unaff_EBX = -0x7c;
  }
  return uVar1;
}


/* END FUNCTION 0x00415df0 */
