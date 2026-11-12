/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040eb80
 * Name: FUN_0040eb80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040eb80(void)

{
  byte bVar1;
  undefined3 extraout_var;
  int *unaff_EBX;
  int iVar2;
  int *unaff_EDI;
  int local_4;
  
  iVar2 = 0;
  if (unaff_EDI == (int *)0x0) {
    if (unaff_EBX == (int *)0x0) {
      return 0;
    }
  }
  else if ((unaff_EBX != (int *)0x0) && (*unaff_EDI == *unaff_EBX)) {
    local_4 = 0;
    if (0 < *unaff_EDI) {
      do {
        if (*(char *)(unaff_EDI[3] + iVar2 + 0xc) != *(char *)(unaff_EBX[3] + iVar2 + 0xc)) {
          return 1;
        }
        bVar1 = FUN_00415fe0(*(char **)(unaff_EDI[3] + iVar2),*(char **)(unaff_EBX[3] + iVar2));
        if (CONCAT31(extraout_var,bVar1) != 0) {
          return 1;
        }
        local_4 = local_4 + 1;
        iVar2 = iVar2 + 0x14;
      } while (local_4 < *unaff_EDI);
    }
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x0040eb80 */
