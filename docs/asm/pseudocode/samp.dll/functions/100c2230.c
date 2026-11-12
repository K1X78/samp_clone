/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2230
 * Name: FUN_100c2230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c2230(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  
  uVar3 = 8;
  do {
    iVar2 = 0;
    iVar4 = 4;
    uVar1 = uVar3;
    do {
      iVar2 = iVar2 << 1;
      for (uVar1 = uVar1 * uVar1; 0xffff < uVar1; uVar1 = uVar1 >> 1) {
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar1 = uVar3 >> 4;
    uVar3 = uVar3 + 0x10;
    *(int *)(unaff_EDI + uVar1 * 4) = 0xa1 - iVar2;
  } while (uVar3 < 0x800);
  return;
}


/* END FUNCTION 0x100c2230 */
