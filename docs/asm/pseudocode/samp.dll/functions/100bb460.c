/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb460
 * Name: FUN_100bb460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bb460(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100bc390(param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(int *)((int)param_1 + 0x1f) = param_1[4];
  piVar2 = (int *)FUN_100bb170(param_1 + 2);
  param_1[0xb] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  if (*piVar2 == 0x2b) {
    FUN_1000b850();
    _free(piVar2);
    param_1[0xb] = 0;
    iVar1 = FUN_100bb170(param_1 + 2);
    param_1[0xb] = iVar1;
  }
  if (*(int *)param_1[0xb] == 0x10) {
    iVar1 = FUN_100bb320((int *)param_1[0xb]);
    if (iVar1 != 0) {
      iVar1 = param_1[0x10];
      if (iVar1 == 0) {
        return 1;
      }
      if (*(int *)(iVar1 + 4) == 0) {
        return 1;
      }
      piVar2 = (int *)FUN_100bb170(iVar1 + 0xc);
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      if (*piVar2 != 0x253f2ff) {
        return 1;
      }
      *(undefined1 *)((int)param_1 + 0x23) = 1;
      return 1;
    }
  }
  else if (*param_1 == 0) {
    *param_1 = 44000;
  }
  return 0;
}


/* END FUNCTION 0x100bb460 */
