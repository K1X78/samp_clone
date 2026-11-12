/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416de0
 * Name: FUN_00416de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00416de0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar2 = *(int *)(unaff_ESI + 300);
  if (iVar2 % 5 == 0) {
    puVar3 = FUN_004129a0(iVar2,iVar2 * 4 + 0x14,unaff_ESI,*(undefined4 **)(unaff_ESI + 0x128));
    if (puVar3 == (undefined4 *)0x0) {
      return 7;
    }
    puVar1 = puVar3 + *(int *)(unaff_ESI + 300);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 **)(unaff_ESI + 0x128) = puVar3;
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 0x128) + *(int *)(unaff_ESI + 300) * 4) = unaff_EDI;
  *(int *)(unaff_ESI + 300) = *(int *)(unaff_ESI + 300) + 1;
  FUN_004103a0();
  return 0;
}


/* END FUNCTION 0x00416de0 */
