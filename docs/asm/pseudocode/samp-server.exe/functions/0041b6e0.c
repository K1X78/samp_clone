/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b6e0
 * Name: FUN_0041b6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __fastcall FUN_0041b6e0(int param_1,int param_2,byte param_3)

{
  int in_EAX;
  int *piVar1;
  int *piVar2;
  
  if (in_EAX == 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
  }
  else {
    piVar1 = FUN_0041b630(param_1,param_2);
  }
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + (uint)param_3 * 5 + -5;
  }
  return piVar2;
}


/* END FUNCTION 0x0041b6e0 */
