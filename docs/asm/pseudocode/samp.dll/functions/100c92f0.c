/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c92f0
 * Name: FUN_100c92f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c92f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = 0;
  iVar1 = FUN_100c9230(&local_8,&local_c);
  if (iVar1 == 0) {
    *param_4 = 0;
    iVar1 = FUN_100d8660(local_c,local_8,param_2,param_3,&local_4);
    if (local_4 == -1) {
      return 0x37;
    }
    if ((iVar1 == 0) && (local_4 == 0)) {
      return 0x51;
    }
    *param_4 = local_4;
  }
  return iVar1;
}


/* END FUNCTION 0x100c92f0 */
