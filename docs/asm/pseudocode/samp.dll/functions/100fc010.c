/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fc010
 * Name: _strftime
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = __Strftime(_Buf,_SizeInBytes,_Format,_Tm,(void *)0x0);
  return sVar1;
}


/* END FUNCTION 0x100fc010 */
