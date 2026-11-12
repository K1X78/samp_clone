/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f89f5
 * Name: __heap_alloc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void * __cdecl __heap_alloc(size_t _Size)

{
  void *pvVar1;
  LPVOID pvVar2;
  
  if ((DAT_102ad68c == 3) && (_Size <= DAT_102ad678)) {
    __lock(4);
    pvVar1 = (void *)___sbh_alloc_block(_Size);
    FUN_100f8a67();
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (DAT_102ad68c != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  pvVar2 = HeapAlloc(DAT_102ad688,0,_Size);
  return pvVar2;
}


/* END FUNCTION 0x100f89f5 */
