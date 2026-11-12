/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5e10
 * Name: FUN_100e5e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e5e10(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_100dc080(param_1,0);
  iVar1 = FUN_100ead00(param_1,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x2e8) == 0) &&
       ((*(int *)(param_1 + 0xf0) != 2 || (*(int *)(param_1 + 0x304) != 0)))) {
      iVar1 = FUN_100ea090(param_1);
      if (iVar1 == 0) {
        if ((*(byte *)(*(int *)(param_1 + 0x324) + 0x40) & 2) == 0) {
          *param_2 = 1;
        }
        else {
          iVar1 = FUN_100e56d0(param_1,param_2);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100e5e10 */
