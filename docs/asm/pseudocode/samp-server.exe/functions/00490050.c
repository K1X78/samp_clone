/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490050
 * Name: FUN_00490050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00490050(void)

{
  char *_Str;
  long lVar1;
  
  _Str = _strtok((char *)0x0," ");
  if (_Str != (char *)0x0) {
    lVar1 = _atol(_Str);
    FUN_00496240(DAT_004fc438,(byte)lVar1);
  }
  return;
}


/* END FUNCTION 0x00490050 */
