/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a5f0
 * Name: FUN_0042a5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042a5f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  *(bool *)(iVar1 + 0x23) = unaff_EBX == 1;
  uVar3 = FUN_00427d80(unaff_EDI,0);
  if (uVar3 == 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x40);
    cVar4 = (char)unaff_EBX;
    if ((((*(char *)(iVar2 + 0x12) != cVar4) || (*(char *)(iVar2 + 0x13) != cVar4)) &&
        (uVar3 = FUN_00427d80(unaff_EDI,2), uVar3 == 0)) &&
       (uVar3 = FUN_00423650(*(int *)(*(int *)(iVar1 + 0xc) + 0x44)), uVar3 == 0)) {
      *(char *)(iVar2 + 0x12) = cVar4;
      *(char *)(iVar2 + 0x13) = cVar4;
    }
  }
  *(undefined1 *)(iVar1 + 0x23) = 0;
  return;
}


/* END FUNCTION 0x0042a5f0 */
