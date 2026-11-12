/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e970
 * Name: FUN_1001e970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1001e970(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 extraout_var;
  int iVar1;
  int *piVar2;
  int local_38;
  undefined1 local_34 [52];
  
  local_38 = 0;
  FUN_100b3710(param_3,param_4,local_34,&local_38,0,1,0,0,0,0,0,0);
  if (local_38 == 0) {
    return CONCAT22(extraout_var,0xffff);
  }
  iVar1 = 1;
  if (0 < *param_1) {
    piVar2 = param_1 + 0x13ee;
    do {
      if (local_38 == *piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= *param_1);
  }
  return 0xffff;
}


/* END FUNCTION 0x1001e970 */
