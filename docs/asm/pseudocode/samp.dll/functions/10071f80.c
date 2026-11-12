/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071f80
 * Name: FUN_10071f80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071f80(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x78) = 2;
  FUN_10071c90(0);
  *(undefined4 *)(extraout_ECX + 0x8a) = param_2;
  *(undefined2 *)(extraout_ECX + 0x88) = 0xffff;
  *(char *)(extraout_ECX + 0xa2) = (char)extraout_EDX;
  FUN_100a0530(0,extraout_EDX);
  *(undefined4 *)(DAT_102aca3c + 0x65) = 0;
  FUN_100a0410();
  return;
}


/* END FUNCTION 0x10071f80 */
