/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463d60
 * Name: FUN_00463d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00463d60(void *this,ushort param_1)

{
  undefined4 in_EAX;
  
  if (param_1 < 0x400) {
    return (uint)CONCAT11((char)(param_1 >> 8),*(undefined1 *)(param_1 + 0x14dd + (int)this));
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),param_1) & 0xffffff00;
}


/* END FUNCTION 0x00463d60 */
