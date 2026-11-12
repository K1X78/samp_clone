/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ace17
 * Name: setSBCS
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0051c6e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_0051c7e4 = 0;
  DAT_0051c6d8 = 0;
  DAT_0051c6d0 = 0;
  DAT_0051c7f0 = 0;
  DAT_0051c7f4 = 0;
  DAT_0051c7f8 = 0;
  return;
}


/* END FUNCTION 0x004ace17 */
