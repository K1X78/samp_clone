/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ab682
 * Name: __set_errno
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


errno_t __cdecl __set_errno(int _Value)

{
  int *piVar1;
  
  if (_Value == 1) {
    _Value = (int)FUN_004a5f9b();
    *(int *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    piVar1 = FUN_004a5f9b();
    *piVar1 = 0x22;
    return (errno_t)piVar1;
  }
  return _Value;
}


/* END FUNCTION 0x004ab682 */
