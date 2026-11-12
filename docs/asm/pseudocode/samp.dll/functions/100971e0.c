/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100971e0
 * Name: FUN_100971e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100971e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar1 = (char *)FUN_10093290();
  iVar2 = 0;
  iVar4 = 0x104;
  pcVar3 = pcVar1;
  do {
    if (pcVar3[param_1 - (int)pcVar1] == '\0') {
      if (iVar4 != 0) goto LAB_10097219;
      break;
    }
    *pcVar3 = pcVar3[param_1 - (int)pcVar1];
    pcVar3 = pcVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pcVar3 = pcVar3 + -1;
  iVar2 = -0x7ff8ff86;
LAB_10097219:
  *pcVar3 = '\0';
  if (-1 < iVar2) {
    if (pcVar1 != (char *)0x0) {
      iVar4 = 0x104;
      iVar2 = 0;
      pcVar3 = pcVar1;
      do {
        if (*pcVar3 == '\0') {
          if (iVar4 != 0) {
            iVar4 = 0x104 - iVar4;
            goto LAB_10097243;
          }
          break;
        }
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar2 = -0x7ff8ffa9;
    iVar4 = param_1;
LAB_10097243:
    if ((-1 < iVar2) && (pcVar1[iVar4 + -1] != '\\')) {
      iVar4 = 0x104;
      iVar2 = 0;
      pcVar3 = pcVar1;
      do {
        if (*pcVar3 == '\0') {
          if (iVar4 == 0) {
            iVar2 = -0x7ff8ffa9;
          }
          else {
            param_1 = 0x104 - iVar4;
          }
          goto LAB_1009728e;
        }
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar2 = -0x7ff8ffa9;
LAB_1009728e:
      if (-1 < iVar2) {
        iVar2 = FUN_10077b90(pcVar1 + param_1,0x104 - param_1,&DAT_101183ec);
      }
    }
  }
  return iVar2;
}


/* END FUNCTION 0x100971e0 */
