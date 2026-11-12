/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409e00
 * Name: FUN_00409e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00409e00(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  _FILETIME local_8;
  
  GetSystemTimeAsFileTime(&local_8);
  lVar1 = __allmul(local_8.dwHighDateTime,0,0,1);
  lVar1 = __alldiv((uint)(lVar1 + (ulonglong)local_8.dwLowDateTime),
                   (uint)(lVar1 + (ulonglong)local_8.dwLowDateTime >> 0x20),10000,0);
  *param_2 = lVar1 + 0xb5310d9cba00;
  return 0;
}


/* END FUNCTION 0x00409e00 */
