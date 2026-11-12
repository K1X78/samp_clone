/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c430
 * Name: FUN_0040c430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040c430(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_EBX + 4)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(unaff_EBX + 8) + 4 + iVar4);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 9) != '\0')) {
        piVar1 = (int *)(iVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_0040c2a0();
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(unaff_EBX + 4));
  }
  return;
}


/* END FUNCTION 0x0040c430 */
