/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428280
 * Name: FUN_00428280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00428280(void)

{
  int *unaff_EBX;
  int iVar1;
  
  if (*unaff_EBX != 0) {
    iVar1 = unaff_EBX[1];
    FUN_0040c2c0();
    FUN_0040c720();
    if (unaff_EBX[3] == 0) {
      *(int *)(iVar1 + 8) = unaff_EBX[2];
    }
    else {
      *(int *)(unaff_EBX[3] + 8) = unaff_EBX[2];
    }
    if (unaff_EBX[2] != 0) {
      *(int *)(unaff_EBX[2] + 0xc) = unaff_EBX[3];
    }
    iVar1 = 0;
    if (-1 < (short)unaff_EBX[0x17]) {
      do {
        FUN_00427610();
        iVar1 = iVar1 + 1;
      } while (iVar1 <= (short)unaff_EBX[0x17]);
    }
    FUN_00427d60();
    FUN_0040c650();
    FUN_0040c340();
  }
  return 0;
}


/* END FUNCTION 0x00428280 */
