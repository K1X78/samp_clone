/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e3d0
 * Name: FUN_0040e3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040e3d0(int *param_1)

{
  undefined4 *in_EAX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)in_EAX[7]) {
    FUN_0040e390(param_1);
    FUN_0040e390(extraout_ECX);
    FUN_0040e390(extraout_ECX_00);
    FUN_0040e390(extraout_ECX_01);
    FUN_0040e3a0(extraout_ECX_02,(int *)*in_EAX);
    FUN_0040e3a0(extraout_ECX_03,(int *)in_EAX[4]);
    FUN_0040e3a0(extraout_ECX_04,(int *)in_EAX[6]);
    param_1 = extraout_ECX_05;
  }
  return;
}


/* END FUNCTION 0x0040e3d0 */
