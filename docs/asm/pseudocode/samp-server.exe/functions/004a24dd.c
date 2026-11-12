/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a24dd
 * Name: __isnan
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __isnan(double _X)

{
  if ((((_X._6_2_ & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)_X & 0x7ffff00000000) == 0 && (_X._0_4_ == 0)))) &&
     ((_X._6_2_ & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x004a24dd */
