/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a24bc
 * Name: __copysign
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}


/* END FUNCTION 0x004a24bc */
