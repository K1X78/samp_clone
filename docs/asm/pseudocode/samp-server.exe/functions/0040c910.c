/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c910
 * Name: FUN_0040c910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c910(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int in_EAX;
  
  puVar1 = (undefined1 *)((uint)*(ushort *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x40) + param_1 * 2);
  FUN_0040c7d0(in_EAX,(uint)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(in_EAX + 0x12)) +
                      *(int *)(in_EAX + 0x40),param_2);
  return;
}


/* END FUNCTION 0x0040c910 */
