/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004933a0
 * Name: thunk_FUN_0044e910
 * Status: ok
 * Single JMP forwarder to 0x0044e910; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 thunk_FUN_0044e910(void)

{
  longlong lVar1;
  undefined8 uVar2;
  LARGE_INTEGER LStack_8;
  
  if (DAT_004ed580 == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_004ed578);
    DAT_004ed580 = '\x01';
  }
  QueryPerformanceCounter(&LStack_8);
  lVar1 = __allmul(LStack_8.s.LowPart,LStack_8.s.HighPart,1000,0);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),DAT_004ed578,DAT_004ed57c);
  return uVar2;
}


/* END FUNCTION 0x004933a0 */
