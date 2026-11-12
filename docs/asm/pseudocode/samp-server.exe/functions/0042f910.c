/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f910
 * Name: FUN_0042f910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0042f910(char param_1,void *param_2,void *param_3)

{
  int unaff_ESI;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_0042e460(param_3,param_2,param_1);
  FUN_0041fbf0(1);
  if (*(char *)(unaff_ESI + 0x1e) != '\0') {
    FUN_0040d250((int)&local_28);
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x0042f910 */
