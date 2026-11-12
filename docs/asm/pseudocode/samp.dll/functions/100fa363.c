/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa363
 * Name: _fread
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  __lock_file(_File);
  sVar1 = __fread_lk(_DstBuf,_ElementSize,_Count,_File);
  FUN_100fa3a5();
  return sVar1;
}


/* END FUNCTION 0x100fa363 */
