/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd4b0
 * Name: FUN_100cd4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cd4b0(char *param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t _Count;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  if (param_1 == (char *)0x0) {
    return 0x1b;
  }
  pcVar3 = _strchr(param_1,0x5c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = _strchr(param_1,0x2f);
    if (pcVar3 == (char *)0x0) {
      pcVar5 = "";
      _Count = 0;
      pcVar3 = param_1;
      goto LAB_100cd510;
    }
  }
  _Count = (int)pcVar3 - (int)param_1;
  pcVar3 = pcVar3 + 1;
  pcVar5 = param_1;
LAB_100cd510:
  pcVar3 = (char *)(*(code *)PTR___strdup_101554c4)(pcVar3);
  if (pcVar3 != (char *)0x0) {
    *param_3 = pcVar3;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = FUN_100d9a10((int)pcVar3 - (int)pcVar1);
    param_3[1] = uVar4;
    pcVar3 = (char *)(*(code *)PTR__malloc_101554b8)(_Count + 1);
    if (pcVar3 != (char *)0x0) {
      _strncpy(pcVar3,pcVar5,_Count);
      pcVar3[_Count] = '\0';
      param_3[2] = pcVar3;
      uVar4 = FUN_100d9a10(_Count);
      param_3[3] = uVar4;
      if (param_2 != 0) {
        pcVar3 = (char *)(*(code *)PTR___strdup_101554c4)(param_2);
        if (pcVar3 != (char *)0x0) {
          param_3[4] = pcVar3;
          pcVar5 = pcVar3 + 1;
          do {
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          uVar4 = FUN_100d9a10((int)pcVar3 - (int)pcVar5);
          param_3[5] = uVar4;
          param_3[6] = 1;
          return 0;
        }
      }
    }
  }
  return 0x1b;
}


/* END FUNCTION 0x100cd4b0 */
