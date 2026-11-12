/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c180
 * Name: FUN_1000c180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000c180(int param_1,undefined4 param_2)

{
  char local_108 [264];
  
  __snprintf(local_108,0x104,"%s\\%s",param_1 + 9,param_2);
  DeleteFileA(local_108);
  return;
}


/* END FUNCTION 0x1000c180 */
