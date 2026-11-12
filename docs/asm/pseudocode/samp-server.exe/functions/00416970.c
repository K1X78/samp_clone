/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416970
 * Name: FUN_00416970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00416970(void)

{
  int iVar1;
  char *pcVar2;
  byte *extraout_ECX;
  int *unaff_EBX;
  int iVar3;
  
  iVar1 = unaff_EBX[9];
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      iVar3 = *(int *)(iVar1 + 0xc);
      if (iVar3 == 0) {
        pcVar2 = *(char **)(iVar1 + 8);
      }
      else {
        pcVar2 = *(char **)(iVar3 + 8);
      }
      FUN_00408380(pcVar2);
      FUN_00412f40((void *)(unaff_EBX[0x11] + 0x34),extraout_ECX,iVar3);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    }
    FUN_00416920(*(int *)(iVar1 + 0x1c));
    FUN_00416920(*(int *)(iVar1 + 0x20));
    iVar1 = *(int *)(iVar1 + 4);
    FUN_00408130(*unaff_EBX);
  }
  return;
}


/* END FUNCTION 0x00416970 */
