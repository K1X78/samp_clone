/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f3b30
 * Name: FUN_100f3b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f3b30(int *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  
  piVar3 = param_1;
  iVar6 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = (undefined1 *)param_1[0x5d];
    puVar8 = (undefined1 *)param_1[0x5c];
    param_1 = *(int **)(iVar6 + 0x66c);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&DAT_10126fb8;
    }
    iVar7 = piVar3[0x28];
    iVar9 = iVar6 + 0x48dc;
  }
  else {
    param_2 = (undefined1 *)param_1[0x3e];
    puVar8 = (undefined1 *)param_1[0x3d];
    param_1 = *(int **)(iVar6 + 0x668);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&DAT_10126fb8;
    }
    iVar7 = piVar3[0x39];
    iVar9 = iVar6 + 0x491c;
  }
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &DAT_10117a39;
  }
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_10117a39;
  }
  bVar1 = *(byte *)(param_3 + 9);
  pcVar10 = (char *)(param_3 + 9);
  while ((bVar1 != 0 && (iVar4 = _isspace((uint)bVar1), iVar4 != 0))) {
    bVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 1;
  }
  pcVar5 = pcVar10;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if ((pcVar5 == pcVar10 + 1) && (*(int *)(iVar9 + 0xc) != 0)) {
    return 0x43;
  }
  iVar6 = FUN_100f4eb0(iVar6,puVar8,param_2,param_1,iVar7,pcVar10,iVar9);
  if (iVar6 != 0) {
    FUN_100f4e30(iVar9);
  }
  return iVar6;
}


/* END FUNCTION 0x100f3b30 */
