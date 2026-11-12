/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c09d0
 * Name: FUN_100c09d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c09d0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  
  while( true ) {
    uVar3 = unaff_EDI;
    if (*(int *)(unaff_ESI + 0x30) == 0) {
      uVar1 = *(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 0x2c);
      if (uVar1 < unaff_EDI - *(int *)(unaff_ESI + 0x24)) {
        uVar3 = *(int *)(unaff_ESI + 0x24) + uVar1;
      }
    }
    iVar2 = FUN_100bf4b0(unaff_ESI,uVar3,unaff_EBX);
    if (iVar2 != 0) break;
    if ((*(int *)(unaff_ESI + 0x30) == 0) &&
       (*(uint *)(unaff_ESI + 0xc) <= *(uint *)(unaff_ESI + 0x2c))) {
      *(uint *)(unaff_ESI + 0x30) = *(uint *)(unaff_ESI + 0xc);
    }
    FUN_100c0950();
    if (((unaff_EDI <= *(uint *)(unaff_ESI + 0x24)) || (unaff_EBX <= *(uint *)(unaff_ESI + 0x18)))
       || (0x111 < *(uint *)(unaff_ESI + 0x48))) {
      if (0x112 < *(uint *)(unaff_ESI + 0x48)) {
        *(undefined4 *)(unaff_ESI + 0x48) = 0x112;
      }
      return 0;
    }
  }
  return iVar2;
}


/* END FUNCTION 0x100c09d0 */
