/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a8957
 * Name: __startOneArgErrorHandling
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)local_c;
}


/* END FUNCTION 0x004a8957 */
