/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2780
 * Name: FUN_100c2780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100c2780(int param_1,int param_2)

{
  int in_EAX;
  
  return *(int *)(param_1 + 0x30d29 +
                 (uint)(*(ushort *)(param_1 + 0x325dd + (in_EAX * 0x10 + param_2) * 2) >> 4) * 4) +
         *(int *)(param_1 + 0x30d29 + (uint)(*(ushort *)(param_1 + 0x32595 + in_EAX * 2) >> 4) * 4);
}


/* END FUNCTION 0x100c2780 */
