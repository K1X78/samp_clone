/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fca09
 * Name: _free
 * Status: ok
 * Single JMP forwarder to 0x100f836b; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_102ad68c == 3) {
      __lock(4);
      iVar1 = ___sbh_find_block(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_100f8970();
      if (iVar1 != 0) {
        return;
      }
    }
    HeapFree(DAT_102ad688,0,_Memory);
  }
  return;
}


/* END FUNCTION 0x100fca09 */
