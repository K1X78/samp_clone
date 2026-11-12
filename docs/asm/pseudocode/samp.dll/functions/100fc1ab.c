/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fc1ab
 * Name: FID_conflict___time32
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FID_conflict___time32(undefined4 *param_1)

{
  undefined4 uVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  uVar1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar1;
  }
  return;
}


/* END FUNCTION 0x100fc1ab */
