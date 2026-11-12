/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041dfb0
 * Name: FUN_0041dfb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041dfb0(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  size_t _Size;
  undefined1 uVar4;
  int unaff_ESI;
  
  iVar3 = 0;
  if (1 < *(int *)(unaff_ESI + 0x18)) {
    cVar1 = **(char **)(unaff_ESI + 0x14);
    cVar2 = (*(char **)(unaff_ESI + 0x14))[1];
    if (cVar1 == -2) {
      if (cVar2 != -1) {
        return 0;
      }
      uVar4 = 3;
    }
    else {
      if (cVar1 != -1) {
        return 0;
      }
      if (cVar2 != -2) {
        return 0;
      }
      uVar4 = 2;
    }
    iVar3 = FUN_004196b0();
    if (iVar3 == 0) {
      _Size = *(int *)(unaff_ESI + 0x18) - 2;
      *(size_t *)(unaff_ESI + 0x18) = _Size;
      _memmove(*(void **)(unaff_ESI + 0x14),(void *)((int)*(void **)(unaff_ESI + 0x14) + 2),_Size);
      *(undefined1 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x14)) = 0;
      *(undefined1 *)(*(int *)(unaff_ESI + 0x18) + 1 + *(int *)(unaff_ESI + 0x14)) = 0;
      *(byte *)(unaff_ESI + 0x1d) = *(byte *)(unaff_ESI + 0x1d) | 2;
      *(undefined1 *)(unaff_ESI + 0x1f) = uVar4;
    }
  }
  return iVar3;
}


/* END FUNCTION 0x0041dfb0 */
