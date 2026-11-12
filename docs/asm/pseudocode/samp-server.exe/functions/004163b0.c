/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004163b0
 * Name: FUN_004163b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004163b0(void)

{
  int iVar1;
  int *unaff_EBX;
  int iVar2;
  int iVar3;
  
  iVar3 = unaff_EBX[4];
  iVar2 = 0;
  iVar1 = *unaff_EBX;
  if (iVar3 != 0) {
    if (0 < unaff_EBX[3]) {
      do {
        FUN_00408130(iVar1);
        FUN_004158d0(iVar1,*(int *)(iVar3 + 4));
        FUN_00408130(iVar1);
        FUN_00408130(iVar1);
        FUN_00408130(iVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < unaff_EBX[3]);
    }
    FUN_00408130(iVar1);
    unaff_EBX[4] = 0;
    unaff_EBX[3] = 0;
    return;
  }
  unaff_EBX[4] = 0;
  unaff_EBX[3] = 0;
  return;
}


/* END FUNCTION 0x004163b0 */
