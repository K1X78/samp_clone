/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100657d0
 * Name: FUN_100657d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100657d0(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  piVar2 = (int *)(param_1 + 0x7a04);
  iVar6 = 0;
  do {
    if (piVar2[-1] == 0) break;
    if (*piVar2 == 0) {
      iVar6 = iVar6 + 1;
      break;
    }
    if (piVar2[1] == 0) {
      iVar6 = iVar6 + 2;
      break;
    }
    if (piVar2[2] == 0) {
      iVar6 = iVar6 + 3;
      break;
    }
    iVar4 = iVar4 + 4;
    piVar2 = piVar2 + 4;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0x200);
  if (iVar6 == 0x200) {
    return -1;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(param_2 + 1)) < 0x29) {
    __strlwr(param_2);
    iVar4 = iVar6 * 0x3d + param_1;
    iVar5 = iVar4 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[iVar5] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(iVar4 + 0x29) = 0;
    *(undefined4 *)(iVar4 + 0x2d) = 0;
    *(undefined4 *)(param_1 + 0x7a00 + iVar6 * 4) = 1;
    FUN_100656c0();
    return iVar6;
  }
  return -1;
}


/* END FUNCTION 0x100657d0 */
