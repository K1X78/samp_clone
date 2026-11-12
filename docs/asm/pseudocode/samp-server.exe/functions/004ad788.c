/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad788
 * Name: __ld12tof
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_F,(int *)&DAT_004ecb90);
  return IVar1;
}


/* END FUNCTION 0x004ad788 */
