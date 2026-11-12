/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fb8d
 * Name: __fsopen
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = __getstream();
  if (pFVar1 == (FILE *)0x0) {
    piVar2 = FUN_004a5f9b();
    *piVar2 = 0x18;
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = __openfile(_Filename,_Mode,_ShFlag,pFVar1);
    FUN_0049fbdf();
  }
  return pFVar1;
}


/* END FUNCTION 0x0049fb8d */
