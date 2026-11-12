/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109365
 * Name: __setenvp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_102ae6b8 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_102acd90;
  if (DAT_102acd90 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = _malloc(iVar5 * 4 + 4);
    pcVar4 = DAT_102acd90;
    DAT_102acd64 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_102acd90);
          DAT_102acd90 = (char *)0x0;
          *puVar1 = 0;
          DAT_102ae6ac = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        if (*pcVar4 != '=') {
          pvVar3 = _malloc(sVar2 + 1);
          *puVar1 = pvVar3;
          if (pvVar3 == (void *)0x0) {
            _free(DAT_102acd64);
            DAT_102acd64 = (undefined4 *)0x0;
            return -1;
          }
          FUN_10103c90(pvVar3,pcVar4);
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2 + 1;
      } while( true );
    }
  }
  return -1;
}


/* END FUNCTION 0x10109365 */
