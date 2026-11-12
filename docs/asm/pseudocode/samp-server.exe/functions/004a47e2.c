/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a47e2
 * Name: __heap_init
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_0051c930 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_0051c930 == (HANDLE)0x0) {
    return 0;
  }
  DAT_0051c934 = ___heap_select();
  if ((DAT_0051c934 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_0051c930);
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x004a47e2 */
