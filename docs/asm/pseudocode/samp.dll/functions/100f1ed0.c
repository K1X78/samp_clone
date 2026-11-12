/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1ed0
 * Name: FUN_100f1ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f1ed0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 / 10 != 0) {
    iVar1 = FUN_100f1ed0(param_1,param_2,param_3 / 10);
    param_3 = param_3 % 10;
  }
  if (iVar1 < param_2) {
    *(char *)(iVar1 + param_1) = (char)param_3 + '0';
  }
  iVar1 = iVar1 + 1;
  if (iVar1 < param_2) {
    *(undefined1 *)(iVar1 + param_1) = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100f1ed0 */
