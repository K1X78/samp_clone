/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437360
 * Name: FUN_00437360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_00437360(int param_1,byte *param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  
  FUN_00407e50(*(int *)(param_1 + 0x44));
  uVar1 = FUN_00433740(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = FUN_004340c0(uVar1);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar1;
}


/* END FUNCTION 0x00437360 */
