/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405880
 * Name: FUN_00405880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00405880(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 local_8;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_8 = FID_conflict__getc(*(FILE **)(param_2 + 4));
    uVar1 = (uint)(local_8 != 0xffffffff);
  }
  else {
    uVar1 = FUN_00404ef0(*(FILE **)(param_2 + 4),2,1);
  }
  if (uVar1 == 0) {
    local_8 = 0xffffffff;
  }
  return local_8;
}


/* END FUNCTION 0x00405880 */
