/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497ec0
 * Name: FUN_00497ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00497ec0(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = (undefined4)((ulonglong)param_1 * (ulonglong)param_2);
  *param_4 = local_8;
  local_4 = (undefined4)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20);
  *param_3 = local_4;
  return;
}


/* END FUNCTION 0x00497ec0 */
