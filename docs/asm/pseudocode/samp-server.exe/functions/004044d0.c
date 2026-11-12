/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004044d0
 * Name: FUN_004044d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004044d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  int unaff_EBX;
  char *unaff_EDI;
  
  pcVar2 = unaff_EDI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = _malloc((size_t)(pcVar2 + (1 - (int)(unaff_EDI + 1))));
  if (pvVar3 != (void *)0x0) {
    if (*(void **)(unaff_EBX + 8) != (void *)0x0) {
      _free(*(void **)(unaff_EBX + 8));
    }
    iVar4 = (int)pvVar3 - (int)unaff_EDI;
    do {
      cVar1 = *unaff_EDI;
      unaff_EDI[iVar4] = cVar1;
      unaff_EDI = unaff_EDI + 1;
    } while (cVar1 != '\0');
    *(void **)(unaff_EBX + 8) = pvVar3;
    *(undefined4 *)(unaff_EBX + 4) = param_1;
    *(undefined4 *)(unaff_EBX + 0xc) = param_2;
  }
  return;
}


/* END FUNCTION 0x004044d0 */
