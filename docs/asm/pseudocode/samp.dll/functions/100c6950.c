/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6950
 * Name: FUN_100c6950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100c6950(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_00c17044 < 0x400) {
    iVar2 = 0xe;
  }
  else if (_DAT_00c17044 < 0x578) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = (uint)(0x63f < _DAT_00c17044) * 2 + 0x12;
  }
  iVar1 = FUN_10065890("fontsize");
  return iVar2 + iVar1 * 2;
}


/* END FUNCTION 0x100c6950 */
