/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a4833
 * Name: ___sbh_heap_init
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_0051c91c = HeapAlloc(DAT_0051c930,0,0x140);
  if (DAT_0051c91c == (LPVOID)0x0) {
    return 0;
  }
  DAT_0051c914 = 0;
  DAT_0051c918 = 0;
  DAT_0051c924 = DAT_0051c91c;
  DAT_0051c920 = param_1;
  DAT_0051c928 = 0x10;
  return 1;
}


/* END FUNCTION 0x004a4833 */
