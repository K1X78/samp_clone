/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415c30
 * Name: FUN_00415c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00415c30(int param_1)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI != unaff_EDI) {
    FUN_00414dd0(0xd,unaff_ESI,unaff_EDI,param_1);
    iVar1 = *(int *)(unaff_EBX + 0x70);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0x70) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0x88);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0x88) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0xa0);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0xa0) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0xb8);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0xb8) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0xd0);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0xd0) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0xe8);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0xe8) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0x100);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0x100) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0x118);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0x118) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0x130);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0x130) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
    iVar1 = *(int *)(unaff_EBX + 0x148);
    if ((unaff_ESI <= iVar1) && (iVar1 < unaff_ESI + param_1)) {
      *(int *)(unaff_EBX + 0x148) = (iVar1 - unaff_ESI) + unaff_EDI;
    }
  }
  return;
}


/* END FUNCTION 0x00415c30 */
