/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004835b0
 * Name: FUN_004835b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004835b0(void *this,ushort param_1)

{
  if (0x3ff < param_1) {
    return 0;
  }
  return (uint)param_1 * 0x21 + 0x1000 + (int)this;
}


/* END FUNCTION 0x004835b0 */
