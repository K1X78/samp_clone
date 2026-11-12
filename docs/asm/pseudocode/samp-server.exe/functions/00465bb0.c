/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465bb0
 * Name: FUN_00465bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00465bb0(void *this,ushort param_1)

{
  undefined4 in_EAX;
  
  if (param_1 < 1000) {
    return (uint)CONCAT11((char)(param_1 >> 8),*(undefined1 *)(param_1 + 0x155 + (int)this));
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),param_1) & 0xffffff00;
}


/* END FUNCTION 0x00465bb0 */
