/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414d00
 * Name: FUN_00414d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00414d00(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *unaff_EDI;
  
  iVar1 = unaff_EDI[4];
  FUN_0040d250((int)unaff_EDI);
  puVar2 = FUN_00412930(0x40);
  unaff_EDI[9] = puVar2;
  if (*(char *)(iVar1 + 0x1e) != '\0') {
    *(undefined2 *)(unaff_EDI + 7) = 1;
    return;
  }
  uVar3 = FUN_004080b0(iVar1);
  uVar4 = FUN_0040ac60(extraout_ECX,iVar1,uVar3);
  *unaff_EDI = uVar4;
  *(undefined2 *)(unaff_EDI + 7) = 0x20;
  return;
}


/* END FUNCTION 0x00414d00 */
