/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f0f0
 * Name: FUN_1001f0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_1001f0f0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = bVar1 ^ *(byte *)(iVar2 + param_1) & 0xaa;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  return bVar1;
}


/* END FUNCTION 0x1001f0f0 */
