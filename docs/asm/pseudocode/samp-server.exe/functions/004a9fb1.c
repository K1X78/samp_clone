/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9fb1
 * Name: __msize
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

size_t __cdecl __msize(void *_Memory)

{
  uint uVar1;
  SIZE_T SVar2;
  size_t local_20;
  
  if (DAT_0051c934 == 3) {
    __lock(4);
    uVar1 = ___sbh_find_block((int)_Memory);
    if (uVar1 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_004aa01e();
    if (uVar1 != 0) {
      return local_20;
    }
  }
  SVar2 = HeapSize(DAT_0051c930,0,_Memory);
  return SVar2;
}


/* END FUNCTION 0x004a9fb1 */
