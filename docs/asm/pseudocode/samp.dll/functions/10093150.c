/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093150
 * Name: FUN_10093150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_10093150(char *param_1)

{
  LARGE_INTEGER local_8;
  
  if (*param_1 == '\0') {
    return (float10)-1.0;
  }
  if ((int)*(longlong *)(param_1 + 10) != 0 || *(int *)(param_1 + 0xe) != 0) {
    return (float10)*(longlong *)(param_1 + 10) / (float10)*(longlong *)(param_1 + 2);
  }
  QueryPerformanceCounter(&local_8);
  return (float10)CONCAT44(local_8.s.HighPart,local_8.s.LowPart) /
         (float10)*(longlong *)(param_1 + 2);
}


/* END FUNCTION 0x10093150 */
