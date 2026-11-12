/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401030
 * Name: FUN_00401030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401030(int *param_1,undefined2 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, *(short *)(iVar1 + 4) != -0xe20)) {
    return 0x11;
  }
  if ((*(char *)(iVar1 + 6) < '\t') && ('\x05' < *(char *)(iVar1 + 7))) {
    *param_2 = *(undefined2 *)(iVar1 + 8);
    return 0;
  }
  return 0x12;
}


/* END FUNCTION 0x00401030 */
