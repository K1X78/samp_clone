/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9c6d
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
  undefined4 *puVar2;
  
  pFVar1 = __getstream();
  if (pFVar1 == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_100fdc77();
    *puVar2 = 0x18;
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = __openfile(_Filename,_Mode,_ShFlag,pFVar1);
    FUN_100f9cbf();
  }
  return pFVar1;
}


/* END FUNCTION 0x100f9c6d */
