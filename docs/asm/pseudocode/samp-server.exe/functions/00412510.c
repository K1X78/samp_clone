/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412510
 * Name: FUN_00412510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00412510(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  
  iVar1 = (*DAT_004ca150)();
  FUN_004073d0(5);
  if (DAT_004ed540 != 0) {
    iVar2 = FUN_00407390();
    iVar3 = iVar2 + iVar1 >> 0x1f;
    if ((DAT_004ed53c <= iVar3) &&
       ((DAT_004ed53c < iVar3 || (DAT_004ed538 <= (uint)(iVar2 + iVar1))))) {
      FUN_00408010(iVar1);
    }
  }
  iVar2 = (*DAT_004ca140)(iVar1);
  if (iVar2 == 0) {
    if (DAT_004ed540 == 0) goto LAB_0041259b;
    FUN_00408010(iVar1);
    iVar2 = (*DAT_004ca140)(iVar1);
    if (iVar2 == 0) goto LAB_0041259b;
  }
  iVar1 = FUN_004080a0();
  FUN_004073a0(0);
LAB_0041259b:
  *unaff_EBX = iVar2;
  return iVar1;
}


/* END FUNCTION 0x00412510 */
