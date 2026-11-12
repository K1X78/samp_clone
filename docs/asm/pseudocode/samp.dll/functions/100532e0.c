/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100532e0
 * Name: FUN_100532e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100532e0(undefined4 param_1)

{
  if (DAT_1015fa50 == '\0') {
    WSAStartup(0x202,(LPWSADATA)&DAT_101578c0);
    DAT_1015fa50 = '\x01';
  }
  return param_1;
}


/* END FUNCTION 0x100532e0 */
