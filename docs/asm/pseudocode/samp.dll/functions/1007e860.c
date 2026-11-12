/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007e860
 * Name: FUN_1007e860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007e860(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_1007e000(0);
  iVar2 = FUN_10082a20(param_1,param_2);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 0x13c)) {
      piVar4 = *(int **)(iVar2 + 0x138);
      do {
        iVar1 = *piVar4;
        if ((*(int *)(iVar1 + 0xc) == param_3) && (*(int *)(iVar1 + 0x10) == param_4)) {
          *param_5 = *(int *)(iVar1 + 8);
          return 0;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x13c));
    }
  }
  *param_5 = param_3;
  return 0x80004005;
}


/* END FUNCTION 0x1007e860 */
