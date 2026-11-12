/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109c30
 * Name: setSBCS
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_102ad320;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_102ad424 = 0;
  DAT_102ad310 = 0;
  DAT_102ad308 = 0;
  _DAT_102ad430 = 0;
  DAT_102ad434 = 0;
  DAT_102ad438 = 0;
  return;
}


/* END FUNCTION 0x10109c30 */
