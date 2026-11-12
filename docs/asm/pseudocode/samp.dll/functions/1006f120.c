/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f120
 * Name: FUN_1006f120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1006f120(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  char local_84 [132];
  
  iVar3 = FUN_10086b40(1);
  piVar2 = *(int **)(iVar3 + 0x104);
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_88 = (int)pcVar4 - (int)(param_1 + 1);
    if ((local_88 != 0) && (piVar2 != (int *)0x0)) {
      iVar3 = -(int)param_1;
      do {
        cVar1 = *param_1;
        param_1[(int)(local_84 + iVar3)] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      FUN_100b5c00(local_84);
      puVar5 = &local_98;
      pcVar4 = local_84;
      (**(code **)(*piVar2 + 0x38))(piVar2,0,pcVar4,0xffffffff,puVar5,0x540,0xffffffff);
      return (int)puVar5 - (int)pcVar4;
    }
  }
  return -1;
}


/* END FUNCTION 0x1006f120 */
