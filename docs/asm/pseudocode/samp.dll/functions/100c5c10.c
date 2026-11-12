/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5c10
 * Name: FUN_100c5c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c5c10(void)

{
  if ((DAT_102aca24 != 0) && (DAT_102aca3c != 0)) {
    FUN_100aa0b0(&DAT_00541df5,5);
    _DAT_00541df5 = 0x90909090;
    DAT_00541df9 = 0x90;
    FUN_100a03c0();
    FUN_100a02f0();
    FUN_100a0310();
    FUN_100aa0b0(&DAT_006194a0,1);
    DAT_006194a0 = 0xc3;
    DAT_102aca60 = DAT_102aca60 + 1;
  }
  return 0x45;
}


/* END FUNCTION 0x100c5c10 */
