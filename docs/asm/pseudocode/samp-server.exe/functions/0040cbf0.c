/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cbf0
 * Name: FUN_0040cbf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040cbf0(void)

{
  ushort uVar1;
  ushort uVar2;
  int in_EAX;
  
  FUN_0040c2c0();
  uVar1 = *(ushort *)(*(int *)(in_EAX + 4) + 0x18);
  uVar2 = *(ushort *)(*(int *)(in_EAX + 4) + 0x16);
  FUN_0040c340();
  return (uint)uVar2 - (uint)uVar1;
}


/* END FUNCTION 0x0040cbf0 */
