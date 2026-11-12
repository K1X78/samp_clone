/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e910
 * Name: FUN_0044e910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 FUN_0044e910(void)

{
  longlong lVar1;
  undefined8 uVar2;
  LARGE_INTEGER local_8;
  
  if (DAT_004ed580 == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_004ed578);
    DAT_004ed580 = '\x01';
  }
  QueryPerformanceCounter(&local_8);
  lVar1 = __allmul(local_8.s.LowPart,local_8.s.HighPart,1000,0);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),DAT_004ed578,DAT_004ed57c);
  return uVar2;
}


/* END FUNCTION 0x0044e910 */
