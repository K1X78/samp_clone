/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065c60
 * Name: FUN_10065c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10065c60(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  double dVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_100659e0(param_2);
  if (iVar2 == 1) {
    uVar6 = 0;
    lVar4 = _atol(param_2);
    FUN_10065b00(param_1,lVar4,uVar6);
  }
  else {
    if (iVar2 == 2) {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      _strncpy(param_2,param_2 + 1,(size_t)(pcVar3 + (-1 - (int)(param_2 + 1))));
      param_2[(int)(pcVar3 + (-2 - (int)(param_2 + 1)))] = '\0';
      FUN_10065b60(param_1,param_2,0);
      return;
    }
    if (iVar2 == 3) {
      uVar6 = 0;
      dVar5 = _atof(param_2);
      FUN_10065c00(param_1,(float)dVar5,uVar6);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x10065c60 */
