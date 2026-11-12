/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044aa10
 * Name: FUN_0044aa10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0044aa10(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x6a];
  if ((int *)param_1[0x6a] == (int *)0x0) {
    piVar1 = param_1;
  }
  piVar1 = (int *)piVar1[0x8a];
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_0044a7a0(param_1,param_2,param_3,param_4);
      return;
    }
    if (((int *)*piVar1 == param_2) && (piVar1[1] == param_4)) break;
    piVar1 = (int *)piVar1[5];
  }
  return;
}


/* END FUNCTION 0x0044aa10 */
