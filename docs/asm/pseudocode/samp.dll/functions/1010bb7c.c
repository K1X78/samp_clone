/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bb7c
 * Name: _GetPrimaryLen
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* END FUNCTION 0x1010bb7c */
