/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423910
 * Name: FUN_00423910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_00423910(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  char *pcVar4;
  
  if (*(int *)(unaff_EBX + 0x28) != 0) {
    return 0;
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBX + 0xc) + 0x40);
  uVar2 = FUN_00423650(*(int *)(*(int *)(unaff_EBX + 0xc) + 0x44));
  if (uVar2 == 0) {
    pcVar1[0] = 'S';
    pcVar1[1] = 'Q';
    pcVar1[2] = 'L';
    pcVar1[3] = 'i';
    pcVar1[4] = 't';
    pcVar1[5] = 'e';
    pcVar1[6] = ' ';
    pcVar1[7] = 'f';
    pcVar1[8] = 'o';
    pcVar1[9] = 'r';
    pcVar1[10] = 'm';
    pcVar1[0xb] = 'a';
    pcVar1[0xc] = 't';
    pcVar1[0xd] = ' ';
    pcVar1[0xe] = '3';
    pcVar1[0xf] = '\0';
    pcVar1[0x10] = *(char *)(unaff_EBX + 0x17);
    pcVar1[0x11] = *(char *)(unaff_EBX + 0x16);
    pcVar1[0x12] = '\x01';
    pcVar1[0x13] = '\x01';
    pcVar1[0x14] = *(char *)(unaff_EBX + 0x16) - *(char *)(unaff_EBX + 0x18);
    pcVar1[0x16] = ' ';
    pcVar1[0x17] = ' ';
    pcVar1[0x15] = '@';
    pcVar4 = pcVar1 + 0x18;
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    FUN_0041f920(0xd);
    *(undefined1 *)(unaff_EBX + 0x11) = 1;
    FUN_00408fa0(pcVar1 + 0x34);
    FUN_00408fa0(pcVar1 + 0x40);
    *(undefined4 *)(unaff_EBX + 0x28) = 1;
    pcVar1[0x1f] = '\x01';
    uVar2 = 0;
  }
  return uVar2;
}


/* END FUNCTION 0x00423910 */
