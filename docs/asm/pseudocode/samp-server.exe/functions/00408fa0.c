/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408fa0
 * Name: FUN_00408fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00408fa0(undefined1 *param_1)

{
  undefined4 in_EAX;
  
  *param_1 = (char)((uint)in_EAX >> 0x18);
  param_1[1] = (char)((uint)in_EAX >> 0x10);
  param_1[2] = (char)((uint)in_EAX >> 8);
  param_1[3] = (char)in_EAX;
  return;
}


/* END FUNCTION 0x00408fa0 */
