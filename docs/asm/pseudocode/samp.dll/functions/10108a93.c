/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10108a93
 * Name: __set_errno
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


errno_t __cdecl __set_errno(int _Value)

{
  undefined4 *puVar1;
  
  if (_Value == 1) {
    _Value = FUN_100fdc77();
    *(undefined4 *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    puVar1 = (undefined4 *)FUN_100fdc77();
    *puVar1 = 0x22;
    return (errno_t)puVar1;
  }
  return _Value;
}


/* END FUNCTION 0x10108a93 */
