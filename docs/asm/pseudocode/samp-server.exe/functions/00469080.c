/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469080
 * Name: FUN_00469080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00469080(char *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  do {
    bVar2 = false;
    pcVar6 = param_1;
    if (*param_1 == '\0') break;
    do {
      uVar3 = FUN_00468f70(pcVar6);
      if (uVar3 == 0xffffffff) {
        pcVar6 = pcVar6 + 1;
      }
      else {
        pcVar4 = pcVar6 + 8;
        iVar5 = (int)pcVar6 - (int)pcVar4;
        do {
          cVar1 = *pcVar4;
          pcVar4[iVar5] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        bVar2 = true;
      }
    } while (*pcVar6 != '\0');
  } while (bVar2);
  *pcVar6 = '\0';
  return;
}


/* END FUNCTION 0x00469080 */
