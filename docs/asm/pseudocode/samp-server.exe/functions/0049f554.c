/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f554
 * Name: __fputchar
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* Library Function - Single Match
    __fputchar
   
   Library: Visual Studio 2003 Release */

int __cdecl __fputchar(int _Ch)

{
  int iVar1;
  
  iVar1 = _putc(_Ch,(FILE *)&DAT_004ebe38);
  return iVar1;
}


/* END FUNCTION 0x0049f554 */
