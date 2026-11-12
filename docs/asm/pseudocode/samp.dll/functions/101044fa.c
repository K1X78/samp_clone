/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101044fa
 * Name: __msize
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

size_t __cdecl __msize(void *_Memory)

{
  int iVar1;
  SIZE_T SVar2;
  size_t local_20;
  
  if (DAT_102ad68c == 3) {
    __lock(4);
    iVar1 = ___sbh_find_block(_Memory);
    if (iVar1 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_10104567();
    if (iVar1 != 0) {
      return local_20;
    }
  }
  SVar2 = HeapSize(DAT_102ad688,0,_Memory);
  return SVar2;
}


/* END FUNCTION 0x101044fa */
