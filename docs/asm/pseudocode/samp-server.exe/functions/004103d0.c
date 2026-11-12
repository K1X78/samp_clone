/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004103d0
 * Name: FUN_004103d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004103d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[3];
  iVar2 = *unaff_ESI;
  unaff_ESI[3] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    piVar3 = (int *)unaff_ESI[2];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))(piVar3);
    }
    FUN_00408130(iVar2);
  }
  return;
}


/* END FUNCTION 0x004103d0 */
