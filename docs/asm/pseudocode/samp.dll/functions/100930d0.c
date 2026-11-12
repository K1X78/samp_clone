/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100930d0
 * Name: FUN_100930d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100930d0(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LARGE_INTEGER local_8;
  
  if ((*param_1 != '\0') && (param_1[1] == '\0')) {
    uVar1 = *(int *)(param_1 + 0xe);
    uVar2 = *(DWORD *)(param_1 + 10);
    if (*(DWORD *)(param_1 + 10) == 0 && *(int *)(param_1 + 0xe) == 0) {
      QueryPerformanceCounter(&local_8);
      uVar1 = local_8.s.HighPart;
      uVar2 = local_8.s.LowPart;
    }
    *(undefined4 *)(param_1 + 10) = uVar2;
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    *(undefined4 *)(param_1 + 0x12) = uVar2;
    *(undefined4 *)(param_1 + 0x16) = uVar1;
    param_1[1] = '\x01';
  }
  return;
}


/* END FUNCTION 0x100930d0 */
