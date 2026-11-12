/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064220
 * Name: FUN_10064220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10064220(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    piVar2 = param_1;
    do {
      if (*param_2 < *(uint *)*piVar2) {
        param_1 = (int *)piVar2[1];
        if (param_1 == (int *)0x0) {
          piVar1 = operator_new(0x10);
          if (piVar1 != (int *)0x0) {
            piVar1[1] = 0;
            piVar1[2] = 0;
            piVar1[3] = 0;
            *piVar1 = (int)param_2;
            piVar2[1] = (int)piVar1;
            return;
          }
          piVar2[1] = 0;
          return;
        }
      }
      else {
        param_1 = (int *)piVar2[2];
        if (param_1 == (int *)0x0) {
          piVar1 = operator_new(0x10);
          if (piVar1 != (int *)0x0) {
            piVar1[1] = 0;
            piVar1[2] = 0;
            piVar1[3] = 0;
            *piVar1 = (int)param_2;
            piVar2[2] = (int)piVar1;
            return;
          }
          piVar2[2] = 0;
          return;
        }
      }
      piVar2 = param_1;
    } while (*param_1 != 0);
  }
  *param_1 = (int)param_2;
  return;
}


/* END FUNCTION 0x10064220 */
