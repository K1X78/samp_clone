/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d580
 * Name: FUN_0041d580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041d580(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  
  iVar2 = FUN_004103b0(*in_EAX);
  piVar1 = *(int **)(iVar2 + 8);
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
  iVar3 = 0;
  if (iVar2 != 0) {
    if (iVar2 == 7) {
      *(undefined1 *)(*in_EAX + 0x1e) = 1;
    }
    else {
      if (piVar1[2] == 0) {
        FUN_00411540();
      }
      FUN_00418b00((undefined **)&DAT_004b23ac);
    }
  }
  FUN_00408130(*in_EAX);
  piVar1[2] = 0;
  iVar2 = 0;
  if (0 < *unaff_EBX) {
    do {
      if ((*(char *)(unaff_EBX[1] + 5 + iVar3) == '\0') && (0 < *(int *)(unaff_EBX[4] + iVar2 * 8)))
      {
        FUN_00418b00((undefined **)"table %s: xBestIndex returned an invalid plan");
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *unaff_EBX);
  }
  return in_EAX[0x10];
}


/* END FUNCTION 0x0041d580 */
