/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e530
 * Name: FUN_0040e530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0040e530(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = FUN_0040e500(param_2), (param_2 & 1) != 0)) {
    uVar2 = FUN_0040e530(*(int *)(param_1 + 0xc),param_2);
    uVar3 = FUN_0040e530(*(int *)(param_1 + 8),param_2);
    return uVar3 + uVar1 + uVar2;
  }
  return uVar1;
}


/* END FUNCTION 0x0040e530 */
