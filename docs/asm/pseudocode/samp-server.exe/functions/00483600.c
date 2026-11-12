/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483600
 * Name: FUN_00483600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00483600(void *this,ushort param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),param_1);
  if ((param_1 < 0x400) && (uVar1 = (uint)param_1, *(int *)((int)this + uVar1 * 4) != 0)) {
    return CONCAT22((short)(uVar1 * 0x21 >> 0x10),*(undefined2 *)(uVar1 * 0x21 + 0x101f + (int)this)
                   );
  }
  return CONCAT22((short)(uVar1 >> 0x10),0xffff);
}


/* END FUNCTION 0x00483600 */
