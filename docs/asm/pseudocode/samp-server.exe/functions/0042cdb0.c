/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042cdb0
 * Name: FUN_0042cdb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0042cdb0(byte param_1,byte param_2)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x1a8);
  if (*(int *)(in_EAX + 0x1a8) == 0) {
    iVar1 = in_EAX;
  }
  FUN_0042cd30();
  *(uint *)(iVar1 + 0x150) = *(uint *)(iVar1 + 0x150) | 1 << (param_1 & 0x1f);
  *(byte *)(iVar1 + 0x158) = *(byte *)(iVar1 + 0x158) | param_2;
  return;
}


/* END FUNCTION 0x0042cdb0 */
