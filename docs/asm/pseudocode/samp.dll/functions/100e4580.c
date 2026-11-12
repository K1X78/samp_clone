/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4580
 * Name: FUN_100e4580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4580(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[2] != 0) {
    param_1[2] = *(int *)(param_1[2] + 8);
  }
  if (param_1[2] == 0) {
    iVar3 = param_1[1];
    iVar1 = ((int *)*param_1)[4];
    if (iVar3 < iVar1) {
      iVar2 = *(int *)*param_1;
      piVar4 = (int *)(iVar3 * 0x10 + iVar2);
      do {
        if (*piVar4 != 0) {
          param_1[2] = *(int *)(iVar3 * 0x10 + iVar2);
          param_1[1] = iVar3 + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if ((undefined4 *)param_1[2] == (undefined4 *)0x0) {
    param_1[2] = 0;
    return 0;
  }
  return *(undefined4 *)param_1[2];
}


/* END FUNCTION 0x100e4580 */
