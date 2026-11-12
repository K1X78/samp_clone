/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef040
 * Name: FUN_100ef040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ef040(SOCKET param_1,uint param_2)

{
  param_2 = (uint)(param_2 != 0);
  ioctlsocket(param_1,-0x7ffb9982,&param_2);
  return;
}


/* END FUNCTION 0x100ef040 */
