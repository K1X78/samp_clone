/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b094a
 * Name: __getextendedkeycode
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __getextendedkeycode(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 8);
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_004c5410 + uVar4 * 8;
        }
        else {
          pcVar2 = &DAT_004c5412 + uVar4 * 8;
        }
      }
      else {
        pcVar2 = &DAT_004c5414 + uVar4 * 8;
      }
    }
    else {
      pcVar2 = &DAT_004c5416 + uVar4 * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = (char *)0x0;
    iVar3 = 0;
    uVar4 = 0;
    do {
      if (*(short *)((int)&DAT_004c5398 + uVar4) == *(short *)(param_1 + 8)) {
        if ((uVar1 & 3) != 0) {
          return &UNK_004c53a0 + iVar3 * 10;
        }
        if ((uVar1 & 0xc) != 0) {
          return &UNK_004c539e + iVar3 * 10;
        }
        if ((uVar1 & 0x10) != 0) {
          return &UNK_004c539c + iVar3 * 10;
        }
        return &UNK_004c539a + iVar3 * 10;
      }
      uVar4 = uVar4 + 10;
      iVar3 = iVar3 + 1;
    } while (uVar4 < 0x78);
  }
  return pcVar2;
}


/* END FUNCTION 0x004b094a */
