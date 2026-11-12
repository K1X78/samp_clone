/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100085d0
 * Name: thunk_FUN_1002e2b0
 * Status: ok
 * Single JMP forwarder to 0x1002e2b0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_1002e2b0(void)

{
  undefined8 uVar1;
  LARGE_INTEGER LStack_8;
  
  if (DAT_10156bac == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_10156ba4);
    DAT_10156bac = '\x01';
  }
  QueryPerformanceCounter(&LStack_8);
  uVar1 = __allmul(LStack_8.s.LowPart,LStack_8.s.HighPart,1000,0);
  __alldiv(uVar1,DAT_10156ba4,DAT_10156ba8);
  return;
}


/* END FUNCTION 0x100085d0 */
