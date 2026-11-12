/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c69a0
 * Name: FUN_100c69a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100c69a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xe;
  if (_DAT_00c17044 < 0x400) {
    iVar2 = 0xc;
  }
  iVar1 = FUN_10065890("fontsize");
  iVar1 = iVar2 + iVar1 * 2;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


/* END FUNCTION 0x100c69a0 */
