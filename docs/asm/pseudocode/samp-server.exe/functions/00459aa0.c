/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00459aa0
 * Name: FUN_00459aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00459aa0(int *param_1)

{
  char cVar1;
  
  *(undefined1 *)((int)param_1 + 5) = 1;
  cVar1 = (char)param_1[1];
  while (cVar1 == '\0') {
    FUN_004587f0(param_1);
    if (-1 < param_1[0x305]) {
      FUN_0045ae30(param_1[0x305]);
    }
    cVar1 = (char)param_1[1];
  }
  *(undefined1 *)((int)param_1 + 5) = 0;
  return 0;
}


/* END FUNCTION 0x00459aa0 */
