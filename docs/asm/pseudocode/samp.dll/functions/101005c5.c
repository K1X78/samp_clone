/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101005c5
 * Name: ___sbh_heap_init
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_102ad674 = HeapAlloc(DAT_102ad688,0,0x140);
  if (DAT_102ad674 == (LPVOID)0x0) {
    return 0;
  }
  DAT_102ad66c = 0;
  DAT_102ad670 = 0;
  DAT_102ad67c = DAT_102ad674;
  DAT_102ad678 = param_1;
  DAT_102ad680 = 0x10;
  return 1;
}


/* END FUNCTION 0x101005c5 */
