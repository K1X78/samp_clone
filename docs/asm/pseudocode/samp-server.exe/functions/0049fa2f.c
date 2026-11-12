/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fa2f
 * Name: _fsetpos
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = __fseeki64(_File,(ulonglong)*(uint *)((int)_Pos + 4),unaff_retaddr);
  return iVar1;
}


/* END FUNCTION 0x0049fa2f */
