/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093060
 * Name: FUN_10093060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10093060(char *param_1)

{
  uint uVar1;
  uint uVar2;
  LARGE_INTEGER local_8;
  
  if (*param_1 != '\0') {
    QueryPerformanceCounter(&local_8);
    if (param_1[1] != '\0') {
      uVar2 = local_8.s.LowPart - *(uint *)(param_1 + 10);
      uVar1 = *(uint *)(param_1 + 0x1a);
      *(uint *)(param_1 + 0x1a) = uVar1 + uVar2;
      *(uint *)(param_1 + 0x1e) =
           *(int *)(param_1 + 0x1e) +
           ((local_8.s.HighPart - *(int *)(param_1 + 0xe)) -
           (uint)(local_8.s.LowPart < *(uint *)(param_1 + 10))) + (uint)CARRY4(uVar1,uVar2);
    }
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    *(DWORD *)(param_1 + 0x12) = local_8.s.LowPart;
    *(LONG *)(param_1 + 0x16) = local_8.s.HighPart;
    param_1[1] = '\0';
  }
  return;
}


/* END FUNCTION 0x10093060 */
