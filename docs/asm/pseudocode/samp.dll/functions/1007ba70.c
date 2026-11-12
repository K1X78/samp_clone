/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007ba70
 * Name: FUN_1007ba70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1007ba70(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if ((((-1 < param_3) && (param_3 < param_1[1])) && (-1 < param_4)) &&
     (param_4 = param_4 + param_3, param_4 <= param_1[1])) {
    if (param_3 < param_4) {
      piVar1 = (int *)(*param_1 + param_3 * 4);
      do {
        if (*param_2 == *piVar1) {
          return param_3;
        }
        param_3 = param_3 + 1;
        piVar1 = piVar1 + 1;
      } while (param_3 < param_4);
    }
    return -1;
  }
  return -1;
}


/* END FUNCTION 0x1007ba70 */
