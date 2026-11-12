/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ca40
 * Name: FUN_1000ca40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000ca40(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(char *)((int)param_1 + 0x21f) == '\0') {
    return 1;
  }
  uVar1 = param_1[1];
  uVar3 = 0;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if (((bVar4) && (iVar2 = *(int *)(*param_1 + uVar3 * 4), iVar2 != 0)) &&
         ((*(int *)(iVar2 + 0x46) == param_2 || (*(int *)(iVar2 + 0x4a) == param_2)))) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0;
}


/* END FUNCTION 0x1000ca40 */
