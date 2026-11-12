/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066040
 * Name: FUN_10066040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10066040(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  puVar5 = (undefined4 *)&DAT_1016c5c0;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = 0;
  pcVar2 = (char *)BASS_ChannelGetTags(DAT_1016c7cc,5);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)BASS_ChannelGetTags(DAT_1016c7cc,2);
    if (pcVar2 != (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar6 = (char *)0x0;
      if (*pcVar2 != '\0') {
        do {
          iVar4 = __strnicmp(pcVar2,"artist=",7);
          if (iVar4 == 0) {
            pcVar3 = pcVar2 + 7;
          }
          iVar4 = __strnicmp(pcVar2,"title=",6);
          if (iVar4 == 0) {
            pcVar6 = pcVar2 + 6;
          }
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
        } while (*pcVar2 != '\0');
        if (pcVar3 != (char *)0x0) {
          __snprintf(&DAT_1016c5c0,0x100,"%s - %s",pcVar3,pcVar6);
          return;
        }
        if (pcVar6 != (char *)0x0) {
          __snprintf(&DAT_1016c5c0,0x100,"%s",pcVar6);
        }
      }
    }
  }
  else {
    pcVar2 = _strstr(pcVar2,"StreamTitle=\'");
    if (pcVar2 != (char *)0x0) {
      pcVar2 = __strdup(pcVar2 + 0xd);
      pcVar3 = _strchr(pcVar2,0x3b);
      pcVar3[-1] = '\0';
      __snprintf(&DAT_1016c5c0,0x100,"%s",pcVar2);
      _free(pcVar2);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x10066040 */
