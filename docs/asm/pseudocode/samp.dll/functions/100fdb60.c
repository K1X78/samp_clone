/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fdb60
 * Name: entry
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_102acd8c == 0)) {
LAB_100fdc3a:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_102ae6a8 != (code *)0x0) {
        local_20 = (*DAT_102ae6a8)(param_1,param_2,param_3);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_1,param_2,param_3), iVar1 == 0))
      goto LAB_100fdc3a;
    }
    local_20 = thunk_FUN_100c6780(param_1,param_2,param_3);
    if ((param_2 == 1) && (local_20 == 0)) {
      __CRT_INIT_12(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_1,param_2,param_3);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_102ae6a8 != (code *)0x0)) {
        local_20 = (*DAT_102ae6a8)(param_1,param_2,param_3);
      }
    }
  }
  return local_20;
}


/* END FUNCTION 0x100fdb60 */
