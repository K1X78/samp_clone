/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c9290
 * Name: FUN_100c9290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c9290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_100c9230(&local_c,&local_8);
  if (iVar1 == 0) {
    *param_4 = 0;
    iVar1 = FUN_100d8800(local_8,local_c,param_2,param_3,&local_4);
    if (iVar1 == 0) {
      *param_4 = local_4;
    }
  }
  return;
}


/* END FUNCTION 0x100c9290 */
