/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f19a
 * Name: htonl
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


u_long htonl(u_long hostlong)

{
  u_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f19a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htonl(hostlong);
  return uVar1;
}


/* END FUNCTION 0x0049f19a */
