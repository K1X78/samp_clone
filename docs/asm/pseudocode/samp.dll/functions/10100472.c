/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10100472
 * Name: __heap_init
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_102ad688 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_102ad688 == (HANDLE)0x0) {
    return 0;
  }
  DAT_102ad68c = ___heap_select();
  if ((DAT_102ad68c == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_102ad688);
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x10100472 */
