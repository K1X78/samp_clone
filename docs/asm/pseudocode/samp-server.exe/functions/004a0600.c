/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a0600
 * Name: FUN_004a0600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004a0600(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_0051c90c != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_004a7a10();
    return;
  }
  FUN_004a065d(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


/* END FUNCTION 0x004a0600 */
