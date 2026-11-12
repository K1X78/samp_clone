/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a2241
 * Name: _free
 * Status: ok
 * Single JMP forwarder to 0x004a1368; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_0051c934 == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_0049f6b9();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    HeapFree(DAT_0051c930,0,_Memory);
  }
  return;
}


/* END FUNCTION 0x004a2241 */
