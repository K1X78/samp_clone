/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410490
 * Name: FUN_00410490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00410490(void)

{
  int *in_EAX;
  int iVar1;
  
  FUN_00410400(0);
  if (in_EAX[0xf] != 0) {
    iVar1 = 0;
    if (0 < in_EAX[0xe]) {
      do {
        FUN_00408130(*in_EAX);
        iVar1 = iVar1 + 1;
      } while (iVar1 < in_EAX[0xe]);
    }
    FUN_00408130(*in_EAX);
  }
  return;
}


/* END FUNCTION 0x00410490 */
