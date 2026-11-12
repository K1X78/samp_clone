/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004209f0
 * Name: FUN_004209f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004209f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  FUN_0041c720();
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 400)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(unaff_ESI + 0x194);
      FUN_004197c0(*(undefined4 *)(iVar1 + 4 + iVar3),*(undefined4 *)(iVar1 + iVar3),0x7b,
                   *(char **)(iVar1 + 0xc + iVar3),-2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(unaff_ESI + 400));
  }
  return;
}


/* END FUNCTION 0x004209f0 */
