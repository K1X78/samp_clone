/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410800
 * Name: FUN_00410800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00410800(int param_1)

{
  int in_EAX;
  
  *(ushort *)(in_EAX + 2) = *(ushort *)(in_EAX + 2) | *(byte *)(param_1 + 2) & 1;
  *(undefined2 *)(in_EAX + 0x20) = *(undefined2 *)(param_1 + 0x20);
  return;
}


/* END FUNCTION 0x00410800 */
