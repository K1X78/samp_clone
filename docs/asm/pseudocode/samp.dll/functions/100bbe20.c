/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bbe20
 * Name: FUN_100bbe20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100bbe20(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1[1];
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar4 = (int *)*param_1;
    do {
      if (*piVar4 == 0) {
        if (-1 < iVar3) {
          ((int *)*param_1)[iVar3] = param_2;
          return iVar3;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 != iVar1);
  }
  cVar2 = FUN_1000c630(iVar1 + 1);
  if (cVar2 == '\0') {
    return -1;
  }
  *(int *)(*param_1 + iVar1 * 4) = param_2;
  return iVar1;
}


/* END FUNCTION 0x100bbe20 */
