/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407240
 * Name: FUN_00407240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00407240(undefined4 param_1,int param_2)

{
  _DAT_004ed174 = timeGetTime();
  DAT_004ed17c = *(undefined4 *)(param_2 + 4);
  DAT_004ed178 = (uint)(*(int *)(param_2 + 8) == 0);
  return 0;
}


/* END FUNCTION 0x00407240 */
