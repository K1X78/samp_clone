/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7560
 * Name: FUN_100a7560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a7560(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (DAT_102ac9b8 == 1) {
      pcVar2 = *(char **)((int)&DAT_10152ae8 + iVar3);
      cVar1 = (&DAT_10152aec)[iVar3];
    }
    else {
      pcVar2 = *(char **)(iVar3 + 0x101538b8);
      cVar1 = *(char *)(iVar3 + 0x101538bc);
    }
    if (cVar1 == *pcVar2) {
      if (((cVar1 == -0x75) || (cVar1 == -0x77)) || (cVar1 == '9')) {
        FUN_100aa0b0(pcVar2 + 3,4);
        *(undefined **)(pcVar2 + 3) = PTR_DAT_10152ae0;
      }
      else if ((cVar1 == -0x42) || (cVar1 == -0x41)) {
        FUN_100aa0b0(pcVar2 + 1,4);
        *(undefined **)(pcVar2 + 1) = PTR_DAT_10152ae0;
      }
    }
    iVar3 = iVar3 + 5;
  } while (iVar3 != 0xdcf);
  DAT_101e0444 = 1;
  return 1;
}


/* END FUNCTION 0x100a7560 */
