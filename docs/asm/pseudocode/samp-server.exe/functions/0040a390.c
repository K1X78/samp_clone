/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a390
 * Name: FUN_0040a390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a390(void)

{
  int in_EAX;
  int iVar1;
  
  if ((*(byte *)(in_EAX + 0x14) & 2) != 0) {
    iVar1 = FUN_0040a040();
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xf9;
    if (*(short *)(iVar1 + 0x16) == 0) {
      FUN_0040a0d0(iVar1);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x0040a390 */
