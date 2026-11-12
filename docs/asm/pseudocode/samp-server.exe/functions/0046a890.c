/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a890
 * Name: FUN_0046a890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_0046a890(int param_1,int param_2)

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


/* END FUNCTION 0x0046a890 */
