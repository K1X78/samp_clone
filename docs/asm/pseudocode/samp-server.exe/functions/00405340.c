/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405340
 * Name: FUN_00405340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00405340(FILE *param_1,int param_2)

{
  int in_EAX;
  uint _Ch;
  int iVar1;
  bool bVar2;
  
  iVar1 = 0;
  bVar2 = false;
  if (in_EAX != 1) {
    while( true ) {
      _Ch = FID_conflict__getc(param_1);
      if (_Ch == 0xffffffff) break;
      *(char *)(iVar1 + param_2) = (char)_Ch;
      iVar1 = iVar1 + 1;
      if (_Ch == 10) break;
      if (bVar2) {
        _ungetc(_Ch,param_1);
        break;
      }
      bVar2 = _Ch == 0xd;
      if (iVar1 == in_EAX + -1) {
        *(undefined1 *)(iVar1 + param_2) = 0;
        return iVar1;
      }
    }
  }
  *(undefined1 *)(iVar1 + param_2) = 0;
  return iVar1;
}


/* END FUNCTION 0x00405340 */
