/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4fb0
 * Name: FUN_100c4fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c4fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100c41e0(param_10);
  if (iVar1 == 0) {
    return 2;
  }
  iVar2 = FUN_100c1e50(iVar1,param_5);
  if (iVar2 == 0) {
    iVar2 = FUN_100c4e50(iVar1,param_6,param_7);
    if (iVar2 == 0) {
      iVar2 = FUN_100c4f00(iVar1,param_1,param_2,param_3,param_4,param_8,param_9,param_10,param_11);
    }
  }
  FUN_100c4280(iVar1,param_10,param_11);
  return iVar2;
}


/* END FUNCTION 0x100c4fb0 */
