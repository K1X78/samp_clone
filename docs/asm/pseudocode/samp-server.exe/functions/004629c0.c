/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004629c0
 * Name: FUN_004629c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_004629c0(undefined4 param_1)

{
  if (DAT_004f6330 == '\0') {
    WSAStartup(0x202,(LPWSADATA)&DAT_004ee1a0);
    DAT_004f6330 = '\x01';
  }
  return param_1;
}


/* END FUNCTION 0x004629c0 */
