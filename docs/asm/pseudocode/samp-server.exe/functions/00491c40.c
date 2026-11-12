/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491c40
 * Name: FUN_00491c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __thiscall
FUN_00491c40(void *this,char *param_1,undefined4 param_2,char *param_3,undefined *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_3 == (char *)0x0) {
    puVar2 = _malloc(1);
    *puVar2 = 0;
  }
  else {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    puVar2 = _malloc((size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    iVar4 = (int)puVar2 - (int)param_3;
    do {
      cVar1 = *param_3;
      param_3[iVar4] = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
  }
  FUN_00491ab0(this,param_1,3,param_2,puVar2,param_4);
  return puVar2;
}


/* END FUNCTION 0x00491c40 */
