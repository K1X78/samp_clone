/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dad50
 * Name: FUN_100dad50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dad50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) &&
     (piVar2 = (int *)*param_1, piVar4 = piVar2, piVar3 = piVar2, piVar2 != (int *)0x0)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar3[6] == 0 && piVar3[7] == 0) {
        if (piVar4 == piVar3) {
          piVar4 = piVar1;
        }
        if (piVar2 == piVar3) {
          FUN_100d9c80();
          param_1[3] = param_1[3] + -1;
          piVar3 = piVar1;
        }
        else {
          *piVar2 = (int)piVar1;
          FUN_100d9c80();
          param_1[3] = param_1[3] + -1;
          piVar3 = piVar2;
        }
      }
      piVar2 = piVar3;
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
    *param_1 = (int)piVar4;
  }
  return;
}


/* END FUNCTION 0x100dad50 */
