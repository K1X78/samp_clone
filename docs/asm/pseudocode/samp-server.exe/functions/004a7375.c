/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a7375
 * Name: __cfltcvt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  int unaff_EBP;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = __cftoe(arg,buffer,format,precision,unaff_EBP);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = __cftof(arg,buffer,format,unaff_EBP);
      return eVar1;
    }
    eVar1 = __cftog(arg,buffer,format,precision);
  }
  return eVar1;
}


/* END FUNCTION 0x004a7375 */
