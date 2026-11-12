/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ec00
 * Name: FUN_0040ec00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040ec00(void)

{
  int in_EAX;
  byte bVar1;
  int iVar2;
  
  if (*(char *)(in_EAX + 0x15) == '\0') {
    iVar2 = *(int *)(in_EAX + 0x48) + 1;
    *(int *)(in_EAX + 0x48) = iVar2;
    return iVar2;
  }
  bVar1 = *(char *)(in_EAX + 0x15) - 1;
  *(byte *)(in_EAX + 0x15) = bVar1;
  return *(int *)(in_EAX + 0x18 + (uint)bVar1 * 4);
}


/* END FUNCTION 0x0040ec00 */
