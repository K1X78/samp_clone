/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006acf0
 * Name: FUN_1006acf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006acf0(int param_1,undefined4 *param_2,char *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  int *unaff_EBP;
  int unaff_EDI;
  int iVar3;
  undefined1 local_10 [16];
  
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (100000 < (uint)((int)pcVar2 - (int)(param_3 + 1))) {
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  pcVar2 = *(char **)(param_1 + 0x1c);
  do {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_100b5c00(*(undefined4 *)(param_1 + 0x1c));
  iVar3 = -0x1000000;
  (**(code **)(**(int **)(param_1 + 4) + 0x38))
            (*(int **)(param_1 + 4),0,*(undefined4 *)(param_1 + 0x1c),0xffffffff);
  *unaff_EBP = iVar3 - (int)local_10;
  unaff_EBP[1] = unaff_EDI - (param_4 | 0x400);
  return;
}


/* END FUNCTION 0x1006acf0 */
