/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ab6aa
 * Name: __errcode
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __errcode(byte param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) << 1;
      }
      uStack_4 = 3;
    }
    else {
      uStack_4 = 2;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}


/* END FUNCTION 0x004ab6aa */
