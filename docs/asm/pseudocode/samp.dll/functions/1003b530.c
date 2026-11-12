/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003b530
 * Name: FUN_1003b530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003b530(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_20 [8];
  
  FUN_1003b210(param_1,param_2,param_3);
  uVar1 = 0;
  do {
    if (param_3[uVar1] != 0) {
      FUN_1003b210(param_2,param_3,local_20);
      uVar1 = 0;
      do {
        if (local_20[uVar1] != 0) {
          do {
            FUN_1003b210(param_3,local_20,param_3);
            uVar1 = 0;
            while (param_3[uVar1] == 0) {
              uVar1 = uVar1 + 1;
              if (7 < uVar1) {
                piVar3 = local_20;
                for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *param_3 = *piVar3;
                  piVar3 = piVar3 + 1;
                  param_3 = param_3 + 1;
                }
                return;
              }
            }
            FUN_1003b210(local_20,param_3,local_20);
            uVar1 = 0;
            while (local_20[uVar1] == 0) {
              uVar1 = uVar1 + 1;
              if (7 < uVar1) {
                return;
              }
            }
          } while( true );
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 8);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}


/* END FUNCTION 0x1003b530 */
