/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2160
 * Name: FUN_100f2160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f2160(char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *unaff_EDI;
  
  for (pcVar1 = unaff_EDI; ((pcVar1 < param_1 && ('/' < *pcVar1)) && (*pcVar1 < ':'));
      pcVar1 = pcVar1 + 1) {
  }
  iVar3 = (int)pcVar1 - (int)unaff_EDI;
  if (((iVar3 != 0xc) && (iVar3 != 0xd)) && (iVar3 != 0xe)) {
    return 0;
  }
  if ((pcVar1 < param_1) && ((*pcVar1 == '.' || (*pcVar1 == ',')))) {
    pcVar4 = pcVar1;
    do {
      pcVar4 = pcVar4 + 1;
      if ((param_1 <= pcVar4) || (*pcVar4 < '0')) break;
    } while (*pcVar4 < ':');
    iVar3 = (int)pcVar4 - (int)(pcVar1 + 1);
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
    } while (pcVar1[iVar3] == '0');
  }
  uVar2 = FUN_100cd220("%.4s-%.2s-%.2s %.2s:%.2s:%c%c%s%.*s%s%.*s");
  return uVar2;
}


/* END FUNCTION 0x100f2160 */
