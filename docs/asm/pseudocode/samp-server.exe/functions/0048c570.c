/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c570
 * Name: FUN_0048c570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0048c570(void *this,int param_1)

{
  int in_EAX;
  
  return *(int *)((int)this +
                 (uint)(*(ushort *)((int)this + (in_EAX * 0x10 + param_1) * 2 + 0x325e8) >> 4) * 4 +
                 0x30d34) +
         *(int *)((int)this +
                 (uint)(*(ushort *)((int)this + in_EAX * 2 + 0x325a0) >> 4) * 4 + 0x30d34);
}


/* END FUNCTION 0x0048c570 */
