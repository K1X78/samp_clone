/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e130
 * Name: FUN_0044e130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e130(void *this,byte param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((ushort)*(short *)this >> 8) ^ param_1;
  *(ushort *)this =
       ((ushort)bVar1 + *(short *)this) * *(short *)((int)this + 2) + *(short *)((int)this + 4);
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + (uint)bVar1;
  return;
}


/* END FUNCTION 0x0044e130 */
