/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e2b0
 * Name: FUN_1002e2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002e2b0(void)

{
  undefined8 uVar1;
  LARGE_INTEGER local_8;
  
  if (DAT_10156bac == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_10156ba4);
    DAT_10156bac = '\x01';
  }
  QueryPerformanceCounter(&local_8);
  uVar1 = __allmul(local_8.s.LowPart,local_8.s.HighPart,1000,0);
  __alldiv(uVar1,DAT_10156ba4,DAT_10156ba8);
  return;
}


/* END FUNCTION 0x1002e2b0 */
