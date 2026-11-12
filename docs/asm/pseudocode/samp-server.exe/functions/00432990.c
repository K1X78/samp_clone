/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00432990
 * Name: FUN_00432990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00432990(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *unaff_ESI;
  
  uVar1 = *(ushort *)(*(char **)(unaff_ESI + 0xc) + 2);
  uVar2 = *(ushort *)(*(int *)(unaff_ESI + 8) + 2);
  piVar4 = FUN_004300f0(*(char **)(unaff_ESI + 0xc));
  *(int **)(*(int *)(unaff_ESI + 0xc) + 0x14) = piVar4;
  piVar4 = FUN_004300f0(*(char **)(unaff_ESI + 8));
  *(int **)(*(int *)(unaff_ESI + 8) + 0x14) = piVar4;
  uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x14);
  *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x14) =
       *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x14);
  *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x14) = uVar3;
  *(ushort *)(*(int *)(unaff_ESI + 0xc) + 2) =
       *(ushort *)(*(int *)(unaff_ESI + 0xc) + 2) & 0xfeff | uVar2 & 0x100;
  *(ushort *)(*(int *)(unaff_ESI + 8) + 2) =
       *(ushort *)(*(int *)(unaff_ESI + 8) + 2) & 0xfeff | uVar1 & 0x100;
  uVar3 = *(undefined4 *)(unaff_ESI + 8);
  *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined4 *)(unaff_ESI + 0xc) = uVar3;
  if (0x4c < *unaff_ESI) {
    *unaff_ESI = (*unaff_ESI + 0xb3 ^ 2) + 0x4d;
  }
  return;
}


/* END FUNCTION 0x00432990 */
