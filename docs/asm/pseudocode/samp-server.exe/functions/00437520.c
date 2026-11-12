/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437520
 * Name: FUN_00437520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00437520(int param_1,undefined4 param_2,byte param_3,int param_4,int param_5)

{
  uint uVar1;
  
  FUN_00407e50(*(int *)(param_1 + 0x44));
  uVar1 = FUN_004338a0(param_1,param_3,0,param_4,param_5,0);
  uVar1 = FUN_004340c0(uVar1);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar1;
}


/* END FUNCTION 0x00437520 */
