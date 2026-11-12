/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f38d
 * Name: ___initstdio
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 ___initstdio(void)

{
  size_t sVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  sVar1 = 0x14;
  if (DAT_0051da60 == 0) {
    sVar1 = 0x200;
  }
  else if (0x13 < (int)DAT_0051da60) goto LAB_0049f3ac;
  DAT_0051da60 = sVar1;
LAB_0049f3ac:
  DAT_0051ca54 = _calloc(DAT_0051da60,4);
  if (DAT_0051ca54 == (void *)0x0) {
    DAT_0051da60 = 0x14;
    DAT_0051ca54 = _calloc(0x14,4);
    if (DAT_0051ca54 == (void *)0x0) {
      return 0x1a;
    }
  }
  iVar4 = 0;
  ppuVar2 = &PTR_DAT_004ebe18;
  do {
    *(undefined ***)(iVar4 + (int)DAT_0051ca54) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar4 = iVar4 + 4;
  } while ((int)ppuVar2 < 0x4ec098);
  uVar3 = 0;
  puVar5 = &DAT_004ebe28;
  do {
    iVar4 = *(int *)((&DAT_0051c940)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar4 == -1) || (iVar4 == 0)) {
      *puVar5 = 0xffffffff;
    }
    puVar5 = puVar5 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar5 < 0x4ebe88);
  return 0;
}


/* END FUNCTION 0x0049f38d */
