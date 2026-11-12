/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490bc0
 * Name: FUN_00490bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00490bc0(void *this,char *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_00490aa0(this,param_1);
  if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
    if ((void *)piVar2[2] != (void *)0x0) {
      _free((void *)piVar2[2]);
    }
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pvVar4 = _malloc((size_t)(pcVar3 + (1 - (int)(param_2 + 1))));
    iVar5 = (int)pvVar4 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[iVar5] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    piVar2[2] = (int)pvVar4;
  }
  return;
}


/* END FUNCTION 0x00490bc0 */
