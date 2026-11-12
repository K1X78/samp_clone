/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408070
 * Name: FUN_00408070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00408070(int param_1)

{
  uint in_EAX;
  
  if ((((param_1 != 0) && (in_EAX != 0)) && (*(uint *)(param_1 + 0xf8) <= in_EAX)) &&
     (in_EAX < *(uint *)(param_1 + 0xfc))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00408070 */
