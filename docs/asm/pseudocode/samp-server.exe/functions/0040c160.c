/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c160
 * Name: FUN_0040c160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040c160(void)

{
  int iVar1;
  int *piVar2;
  int extraout_EDX;
  int unaff_EBX;
  int *piVar3;
  bool bVar4;
  
  if (*(char *)(unaff_EBX + 0x1f) != '\0') {
    return 8;
  }
  iVar1 = FUN_0040bd20();
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_EBX + 0x1d) = 1;
    piVar2 = (int *)FUN_0040ba90();
    iVar1 = 0xc;
    bVar4 = true;
    piVar3 = (int *)(unaff_EBX + 0x20);
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar3 == *piVar2;
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (bVar4);
    iVar1 = extraout_EDX;
    if (!bVar4) {
      FUN_0040bd50();
      *(undefined1 *)(unaff_EBX + 0x1d) = 0;
      iVar1 = 5;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0040c160 */
