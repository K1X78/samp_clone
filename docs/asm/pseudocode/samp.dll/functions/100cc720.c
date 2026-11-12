/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cc720
 * Name: FUN_100cc720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cc720(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *local_c;
  int local_8;
  int local_4;
  
  local_c = param_1;
  local_4 = param_2;
  local_8 = 0;
  iVar1 = FUN_100cc840(&local_c,&LAB_100cc6f0,param_3,param_4);
  if ((iVar1 != -1) && (local_4 != 0)) {
    if (local_4 == local_8) {
      local_c[-1] = 0;
      return;
    }
    *local_c = 0;
  }
  return;
}


/* END FUNCTION 0x100cc720 */
