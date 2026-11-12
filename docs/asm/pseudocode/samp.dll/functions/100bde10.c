/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bde10
 * Name: FUN_100bde10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bde10(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100bc390(param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(int *)((int)param_1 + 0x1b) = param_1[3];
  piVar2 = (int *)FUN_100bda10(param_1 + 1);
  *(int **)((int)param_1 + 0x1f) = piVar2;
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0x16) {
      if (*param_1 == 0) {
        *param_1 = 54000;
      }
      return 0;
    }
    FUN_100bdd80(piVar2);
    if (*(short *)((int)param_1 + 0x27) != *(short *)((int)param_1 + 0x29)) {
      if (*param_1 == 0) {
        *param_1 = 0xd2f2;
      }
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x100bde10 */
