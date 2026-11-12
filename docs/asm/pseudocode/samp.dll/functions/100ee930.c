/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee930
 * Name: FUN_100ee930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ee930(void)

{
  int iVar1;
  int *unaff_EBX;
  int iVar2;
  int iVar3;
  
  if (unaff_EBX[5] < 0x46) {
    return -1;
  }
  iVar2 = unaff_EBX[4];
  iVar3 = unaff_EBX[5] + 0x76c;
  if (iVar2 < 0) {
    iVar3 = iVar3 + (0xb - iVar2) / 0xc;
    iVar1 = 0xb - (0xb - iVar2) % 0xc;
  }
  else {
    iVar1 = iVar2;
    if (0xb < iVar2) {
      iVar1 = iVar2 % 0xc;
      iVar3 = iVar3 - iVar2 / 0xc;
    }
  }
  iVar2 = iVar3 - (uint)(iVar2 < 2);
  return ((unaff_EBX[2] +
          (((*(int *)(&DAT_10129228 + iVar1 * 4) + iVar2 / 400 + iVar3 * 0x16d) - iVar2 / 100) +
           ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) + unaff_EBX[3]) * 0x18) * 0x3c + unaff_EBX[1])
         * 0x3c + -0x79747c00 + *unaff_EBX;
}


/* END FUNCTION 0x100ee930 */
