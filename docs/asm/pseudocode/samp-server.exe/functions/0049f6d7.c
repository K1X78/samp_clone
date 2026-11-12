/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f6d7
 * Name: FID_conflict___time32
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FID_conflict___time32(undefined4 *param_1)

{
  undefined8 uVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  uVar1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (int)uVar1;
  }
  return;
}


/* END FUNCTION 0x0049f6d7 */
