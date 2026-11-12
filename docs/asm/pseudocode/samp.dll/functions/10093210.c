/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093210
 * Name: FUN_10093210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_10093210(char *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LARGE_INTEGER local_8;
  
  if (*param_1 == '\0') {
    return (float10)-1.0;
  }
  uVar3 = *(int *)(param_1 + 0xe);
  uVar4 = *(uint *)(param_1 + 10);
  if (*(uint *)(param_1 + 10) == 0 && *(int *)(param_1 + 0xe) == 0) {
    QueryPerformanceCounter(&local_8);
    uVar3 = local_8.s.HighPart;
    uVar4 = local_8.s.LowPart;
  }
  iVar1 = *(int *)(param_1 + 0x16);
  uVar2 = *(uint *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  *(undefined4 *)(param_1 + 0x16) = uVar3;
  return (float10)CONCAT44((uVar3 - iVar1) - (uint)((uint)uVar4 < uVar2),uVar4 - uVar2) /
         (float10)*(longlong *)(param_1 + 2);
}


/* END FUNCTION 0x10093210 */
