/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cc20
 * Name: FUN_0040cc20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __fastcall FUN_0040cc20(int param_1)

{
  undefined1 uVar1;
  int in_EAX;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_0040c2c0();
  if (-1 < in_EAX) {
    *(bool *)(*(int *)(param_1 + 4) + 0x12) = in_EAX != 0;
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 0x12);
  FUN_0040c340();
  return uVar1;
}


/* END FUNCTION 0x0040cc20 */
