/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee3f0
 * Name: FUN_100ee3f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * FUN_100ee3f0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_20;
  int local_1c;
  int local_18;
  
  if (param_3 == (int *)0x0) {
    return (int *)0x0;
  }
  local_18 = 0;
  local_1c = 0;
  piVar3 = param_3;
  param_3 = &local_1c;
  local_20 = &local_1c;
  do {
    while (piVar3[4] <= param_1) {
      if (param_1 <= piVar3[4]) {
        if (param_2 < piVar3[5]) break;
        if (param_2 <= piVar3[5]) goto LAB_100ee4cd;
      }
      piVar1 = (int *)piVar3[1];
      piVar4 = piVar3 + 1;
      if (piVar1 == (int *)0x0) goto LAB_100ee4cd;
      piVar2 = piVar3;
      if ((piVar1[4] <= param_1) &&
         ((piVar1[4] < param_1 || ((piVar1[5] <= param_2 && (piVar1[5] < param_2)))))) {
        *piVar4 = *piVar1;
        *piVar1 = (int)piVar3;
        piVar4 = piVar1 + 1;
        piVar3 = piVar1;
        piVar2 = piVar1;
        if (*piVar4 == 0) goto LAB_100ee4cd;
      }
      param_3[1] = (int)piVar2;
      param_3 = piVar2;
      piVar3 = (int *)*piVar4;
    }
    piVar4 = (int *)*piVar3;
    if (piVar4 == (int *)0x0) {
LAB_100ee4cd:
      param_3[1] = *piVar3;
      *local_20 = piVar3[1];
      *piVar3 = local_18;
      piVar3[1] = local_1c;
      return piVar3;
    }
    if ((param_1 < piVar4[4]) || ((piVar1 = piVar3, param_1 <= piVar4[4] && (param_2 < piVar4[5]))))
    {
      *piVar3 = piVar4[1];
      piVar4[1] = (int)piVar3;
      piVar3 = piVar4;
      piVar1 = piVar4;
      if (*piVar4 == 0) goto LAB_100ee4cd;
    }
    *local_20 = (int)piVar1;
    piVar3 = (int *)*piVar1;
    local_20 = piVar1;
  } while( true );
}


/* END FUNCTION 0x100ee3f0 */
