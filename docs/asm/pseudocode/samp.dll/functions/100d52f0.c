/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d52f0
 * Name: FUN_100d52f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d52f0(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_3 = 0;
  iVar1 = FUN_100d4a30(param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = *param_2;
    if ((*(int *)(iVar1 + 0x3a4) != 0) || (*(int *)(iVar1 + 0x3b4) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != 0) {
      return 0;
    }
    iVar1 = FUN_100d2760(iVar1,param_4);
  }
  if (iVar1 != 0x59) {
    if ((iVar1 != 0) && (*param_2 != 0)) {
      FUN_100d2d00(*param_2,0);
      *param_2 = 0;
    }
    return iVar1;
  }
  *param_2 = 0;
  return 0x59;
}


/* END FUNCTION 0x100d52f0 */
