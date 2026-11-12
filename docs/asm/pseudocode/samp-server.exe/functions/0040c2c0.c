/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c2c0
 * Name: FUN_0040c2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040c2c0(void)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  if ((*(char *)((int)unaff_EDI + 9) != '\0') &&
     (unaff_EDI[3] = unaff_EDI[3] + 1, *(char *)((int)unaff_EDI + 10) == '\0')) {
    iVar1 = FUN_00407e70(*(int *)(unaff_EDI[1] + 0x34));
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EDI[1] + 4) = *unaff_EDI;
      *(undefined1 *)((int)unaff_EDI + 10) = 1;
      return;
    }
    for (iVar1 = unaff_EDI[5]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (*(char *)(iVar1 + 10) != '\0') {
        FUN_0040c2a0();
      }
    }
    FUN_0040c280();
    for (iVar1 = unaff_EDI[5]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (*(int *)(iVar1 + 0xc) != 0) {
        FUN_0040c280();
      }
    }
  }
  return;
}


/* END FUNCTION 0x0040c2c0 */
