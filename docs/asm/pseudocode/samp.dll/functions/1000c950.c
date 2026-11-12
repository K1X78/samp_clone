/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c950
 * Name: FUN_1000c950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000c950(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 0x21f) == '\0') {
    return 0;
  }
  uVar2 = 0;
  if (0 < param_2) {
    do {
      if (((uVar2 < (uint)param_1[1]) && (iVar1 = *(int *)(*param_1 + uVar2 * 4), iVar1 != 0)) &&
         (((*(int *)(iVar1 + 0x46) == param_3 && (*(char *)(iVar1 + 2) != '\0')) ||
          ((*(int *)(iVar1 + 0x4a) == param_3 && (*(char *)(iVar1 + 3) != '\0')))))) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_2);
  }
  return 0;
}


/* END FUNCTION 0x1000c950 */
