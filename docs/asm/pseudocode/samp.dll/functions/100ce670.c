/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce670
 * Name: FUN_100ce670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ce670(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  if (param_1[6] == 0) {
    param_2[6] = 0;
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1[6]);
    param_2[6] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1[7] == 0) {
    param_2[7] = 0;
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1[7]);
    param_2[7] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1[8] == 0) {
    param_2[8] = 0;
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1[8]);
    param_2[8] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1[9] == 0) {
    param_2[9] = 0;
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1[9]);
    param_2[9] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1[10] == 0) {
    param_2[10] = 0;
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1[10]);
    param_2[10] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1[0xb] == 0) {
    param_2[0xb] = 0;
  }
  else {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_1[0xb]);
    param_2[0xb] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x100ce670 */
