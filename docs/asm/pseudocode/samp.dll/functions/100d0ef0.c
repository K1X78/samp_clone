/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0ef0
 * Name: FUN_100d0ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d0ef0(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x548) != 0) {
    if (param_1[0xa7] == 0) {
      if (param_1[0xa6] == 0) {
        if (param_1[0xa3] == 0) {
          iVar1 = param_1[0x29];
        }
        else {
          iVar1 = param_1[0x2e];
        }
      }
      else {
        iVar1 = param_1[0x3a];
      }
    }
    else {
      iVar1 = param_1[0x32];
    }
    FUN_100d8ae0(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",iVar1,param_1 + 0x18,
                 param_1[0x3f],param_1[0x13]);
  }
  return;
}


/* END FUNCTION 0x100d0ef0 */
