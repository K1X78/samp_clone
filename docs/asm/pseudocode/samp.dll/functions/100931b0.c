/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100931b0
 * Name: FUN_100931b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100931b0(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LARGE_INTEGER local_8;
  
  if (*param_1 == '\0') {
    return (float10)-1.0;
  }
  uVar1 = *(int *)(param_1 + 0xe);
  uVar2 = *(uint *)(param_1 + 10);
  if (*(uint *)(param_1 + 10) == 0 && *(int *)(param_1 + 0xe) == 0) {
    QueryPerformanceCounter(&local_8);
    uVar1 = local_8.s.HighPart;
    uVar2 = local_8.s.LowPart;
  }
  return (float10)CONCAT44((uVar1 - *(int *)(param_1 + 0x1e)) -
                           (uint)((uint)uVar2 < *(uint *)(param_1 + 0x1a)),
                           uVar2 - *(uint *)(param_1 + 0x1a)) / (float10)*(longlong *)(param_1 + 2);
}


/* END FUNCTION 0x100931b0 */
