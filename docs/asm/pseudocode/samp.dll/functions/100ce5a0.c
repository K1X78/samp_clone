/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce5a0
 * Name: FUN_100ce5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ce5a0(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) {
    iVar1 = FUN_100de890(param_1[6],param_2[6]);
    if (iVar1 != 0) {
      iVar1 = FUN_100de890(param_1[7],param_2[7]);
      if (iVar1 != 0) {
        iVar1 = FUN_100de890(param_1[8],param_2[8]);
        if (iVar1 != 0) {
          iVar1 = FUN_100de890(param_1[9],param_2[9]);
          if (iVar1 != 0) {
            iVar1 = FUN_100de890(param_1[10],param_2[10]);
            if (iVar1 != 0) {
              iVar1 = FUN_100de890(param_1[0xb],param_2[0xb]);
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100ce5a0 */
