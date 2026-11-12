/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415250
 * Name: FUN_00415250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00415250(void)

{
  int iVar1;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    iVar1 = *unaff_ESI;
    if (unaff_ESI[1] == 0) {
      *(int *)(iVar1 + 0x88) = unaff_ESI[2];
    }
    else {
      *(int *)(unaff_ESI[1] + 8) = unaff_ESI[2];
    }
    if (unaff_ESI[2] != 0) {
      *(int *)(unaff_ESI[2] + 4) = unaff_ESI[1];
    }
    FUN_0040d750(unaff_ESI[0xf]);
    FUN_0040d750(unaff_ESI[10]);
    FUN_00415060(iVar1,unaff_ESI[5],unaff_ESI[3]);
    FUN_00408130(iVar1);
    FUN_00408130(iVar1);
    FUN_00408130(iVar1);
    unaff_ESI[0x11] = -0x49f93c38;
    FUN_00408130(iVar1);
    *unaff_ESI = 0;
    FUN_00408130(iVar1);
  }
  return;
}


/* END FUNCTION 0x00415250 */
