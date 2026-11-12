/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f5ad
 * Name: __heap_alloc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void * __cdecl __heap_alloc(size_t _Size)

{
  int *piVar1;
  LPVOID pvVar2;
  
  if ((DAT_0051c934 == 3) && (_Size <= DAT_0051c920)) {
    __lock(4);
    piVar1 = ___sbh_alloc_block((uint *)_Size);
    FUN_0049f61f();
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (DAT_0051c934 != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  pvVar2 = HeapAlloc(DAT_0051c930,0,_Size);
  return pvVar2;
}


/* END FUNCTION 0x0049f5ad */
