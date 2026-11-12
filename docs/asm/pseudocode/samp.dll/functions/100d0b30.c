/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0b30
 * Name: FUN_100d0b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100d0b30(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  uint uVar2;
  
  uVar2 = 0;
  if (((*(byte *)(*(int *)(in_EAX + 800) + 0x40) & 3) != 0) &&
     ((*(int *)(in_EAX + 700) == 0 || (*(int *)(in_EAX + 0x284) == 0)))) {
    iVar1 = FUN_100d5880(*(undefined4 *)(unaff_ESI + 100),1);
    if ((iVar1 != 0) &&
       ((*(int *)(unaff_ESI + 0x3ec) != 1 &&
        ((*(int *)(unaff_ESI + 1000) == 1 || (*(int *)(unaff_ESI + 1000) == 6)))))) {
      uVar2 = 1;
    }
    iVar1 = FUN_100d5880(*(undefined4 *)(unaff_ESI + 100),2);
    if ((iVar1 != 0) && (2 < *(int *)(unaff_ESI + 0x3ec))) {
      uVar2 = uVar2 | 2;
    }
  }
  return uVar2;
}


/* END FUNCTION 0x100d0b30 */
