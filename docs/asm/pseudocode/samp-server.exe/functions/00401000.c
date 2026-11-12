/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401000
 * Name: FUN_00401000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00401000(void)

{
  undefined1 uVar1;
  undefined1 *in_EAX;
  
  uVar1 = *in_EAX;
  *in_EAX = in_EAX[3];
  in_EAX[3] = uVar1;
  uVar1 = in_EAX[1];
  in_EAX[1] = in_EAX[2];
  in_EAX[2] = uVar1;
  return;
}


/* END FUNCTION 0x00401000 */
