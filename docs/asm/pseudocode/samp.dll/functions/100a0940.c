/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0940
 * Name: FUN_100a0940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a0940(int param_1,char param_2)

{
  FUN_100aa0b0(&DAT_0052cf10,1);
  if (param_2 != '\0') {
    DAT_0052cf10 = 0x56;
    *(undefined4 *)(param_1 + 0x69) = 1;
    return;
  }
  DAT_0052cf10 = 0xc3;
  *(undefined4 *)(param_1 + 0x69) = 0;
  return;
}


/* END FUNCTION 0x100a0940 */
