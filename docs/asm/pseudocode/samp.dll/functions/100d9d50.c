/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9d50
 * Name: FUN_100d9d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100d9d50(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint _MaxCount;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar2 - (int)(param_1 + 1);
  if (_MaxCount == 1) {
    return true;
  }
  pcVar2 = (char *)(*(code *)PTR___strdup_101554c4)(param_2);
  if (pcVar2 == (char *)0x0) {
    return false;
  }
  pcVar3 = _strchr(pcVar2,0x3f);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((pcVar3 == pcVar2 + 1) || (*pcVar2 != '/')) {
    (*(code *)PTR__free_101554bc)(pcVar2);
    pcVar2 = (char *)(*(code *)PTR___strdup_101554c4)(&DAT_10117694);
    if (pcVar2 == (char *)0x0) {
      return false;
    }
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((_MaxCount <= (uint)((int)pcVar3 - (int)(pcVar2 + 1))) &&
     (iVar4 = _strncmp(param_1,pcVar2,_MaxCount), iVar4 == 0)) {
    if (_MaxCount != (int)pcVar3 - (int)(pcVar2 + 1)) {
      cVar1 = pcVar2[_MaxCount];
      (*(code *)PTR__free_101554bc)(pcVar2);
      return cVar1 == '/';
    }
    (*(code *)PTR__free_101554bc)(pcVar2);
    return true;
  }
  (*(code *)PTR__free_101554bc)(pcVar2);
  return false;
}


/* END FUNCTION 0x100d9d50 */
