/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004173c0
 * Name: FUN_004173c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004173c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char *in_EAX;
  
  piVar1 = *(int **)(param_3 + 0xc);
  if (in_EAX != (char *)0x0) {
    for (; (0 < param_1 && (*in_EAX == 'b')); in_EAX = in_EAX + 1) {
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    }
    for (; (1 < param_1 && (in_EAX[param_1 + -1] == 'b')); param_1 = param_1 + -1) {
    }
    if (0 < param_1) {
      FUN_00414e70(param_2,0x1d);
      FUN_00415110(param_1,in_EAX,piVar1);
      thunk_FUN_0040ea60(param_1);
    }
  }
  return;
}


/* END FUNCTION 0x004173c0 */
