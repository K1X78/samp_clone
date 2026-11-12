/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466da0
 * Name: FUN_00466da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00466da0(void *this,ushort param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + (uint)param_1 * 4 + 0x2000);
  *(byte *)*puVar1 = *(byte *)*puVar1 & 0xfd;
  *(byte *)*puVar1 = *(byte *)*puVar1 & 0xf7;
  *(byte *)*puVar1 = *(byte *)*puVar1 & 0xfb;
  if (param_2 == '\x01') {
    *(byte *)*puVar1 = *(byte *)*puVar1 | 2;
    return;
  }
  if (param_2 == '\x02') {
    *(byte *)*puVar1 = *(byte *)*puVar1 | 8;
    return;
  }
  if (param_2 == '\x03') {
    *(byte *)*puVar1 = *(byte *)*puVar1 | 4;
  }
  return;
}


/* END FUNCTION 0x00466da0 */
