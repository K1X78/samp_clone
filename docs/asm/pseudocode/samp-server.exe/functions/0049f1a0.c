/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f1a0
 * Name: htons
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}


/* END FUNCTION 0x0049f1a0 */
