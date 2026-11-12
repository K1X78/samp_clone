/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4470
 * Name: FUN_100e4470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e4470(int *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  piVar4 = param_1;
  if ((param_1 != (int *)0x0) && (local_4 = 0, 0 < param_1[4])) {
    param_1 = (int *)0x0;
    do {
      iVar1 = *piVar4;
      piVar2 = *(int **)(iVar1 + (int)param_1);
      while (piVar3 = piVar2, piVar3 != (int *)0x0) {
        piVar2 = (int *)piVar3[2];
        if ((param_3 == (code *)0x0) ||
           (iVar5 = (*param_3)(param_2,*(undefined4 *)(*piVar3 + 0xc)), iVar5 != 0)) {
          FUN_100e89e0(iVar1 + (int)param_1,piVar3,piVar4);
          piVar4[5] = piVar4[5] + -1;
        }
      }
      local_4 = local_4 + 1;
      param_1 = (int *)((int)param_1 + 0x10);
    } while (local_4 < piVar4[4]);
  }
  return;
}


/* END FUNCTION 0x100e4470 */
