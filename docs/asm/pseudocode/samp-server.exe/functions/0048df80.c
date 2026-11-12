/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048df80
 * Name: FUN_0048df80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048df80(int param_1)

{
  int local_38 [14];
  
  FUN_0048bd40();
  FUN_0048a9b0(param_1 + 0xd0);
  FUN_0048ba50(local_38);
  FUN_0048bc40(param_1,local_38);
  FUN_0048bbd0((undefined1 *)(param_1 + 0x30534));
  FUN_0048c020();
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x3bafc) = 0;
  return;
}


/* END FUNCTION 0x0048df80 */
