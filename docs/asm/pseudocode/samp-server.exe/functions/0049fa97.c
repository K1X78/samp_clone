/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fa97
 * Name: _fgetpos
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftelli64(_File);
  *_Pos = lVar2;
  iVar1 = -1;
  if (((uint)lVar2 & *(uint *)((int)_Pos + 4)) != 0xffffffff) {
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x0049fa97 */
