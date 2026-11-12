/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10057170
 * Name: FUN_10057170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10057170(int param_1,byte *param_2)

{
  undefined1 uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_EDX;
  int extraout_EDX_00;
  
  do {
    uVar1 = FUN_10057160(*param_2 >> 4);
    *(undefined1 *)(extraout_ECX + param_1) = uVar1;
    uVar1 = FUN_10057160(*extraout_EDX & 0xf);
    *(undefined1 *)(extraout_ECX_00 + param_1) = uVar1;
    param_2 = (byte *)(extraout_EDX_00 + 1);
  } while (extraout_ECX_00 + 1 < 0x28);
  *(undefined1 *)(extraout_ECX_00 + 1 + param_1) = 0;
  return;
}


/* END FUNCTION 0x10057170 */
