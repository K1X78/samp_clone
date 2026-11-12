/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1280
 * Name: FUN_100a1280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a1280(int param_1,char param_2)

{
  FUN_100aa0b0(&DAT_00859a6c,10);
  if (param_2 != '\0') {
    FUN_100aa0b0(&DAT_0052cf10,1);
    DAT_0052cf10 = 0x56;
    *(undefined4 *)(param_1 + 0x69) = 1;
    _DAT_00859a6c = 0x64323025;
    _DAT_00859a70 = 0x3230253a;
    _DAT_00859a74 = 100;
    return;
  }
  FUN_100aa0b0(&DAT_0052cf10,1);
  DAT_0052cf10 = 0xc3;
  *(undefined4 *)(param_1 + 0x69) = 0;
  _DAT_00859a6c = 0;
  _DAT_00859a70 = 0;
  _DAT_00859a74 = 0;
  return;
}


/* END FUNCTION 0x100a1280 */
