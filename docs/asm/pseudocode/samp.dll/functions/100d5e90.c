/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5e90
 * Name: FUN_100d5e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d5e90(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    param_1 = param_1 + 5;
    iVar1 = FUN_100e8a90(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)*param_1;
      FUN_100e89e0(param_1,(int *)*param_1,0);
      uVar2 = FUN_100e8a90(param_1);
      uVar2 = FUN_100d9a00(uVar2);
      *param_2 = uVar2;
      return iVar1 + 0xc;
    }
  }
  return 0;
}


/* END FUNCTION 0x100d5e90 */
