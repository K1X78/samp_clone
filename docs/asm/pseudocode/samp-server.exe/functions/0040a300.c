/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a300
 * Name: FUN_0040a300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a300(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  
  *(short *)(in_EAX + 0x16) = *(short *)(in_EAX + 0x16) + -1;
  if (*(short *)(in_EAX + 0x16) != 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(in_EAX + 0x18) + 0xc);
  *piVar1 = *piVar1 + -1;
  if ((*(byte *)(in_EAX + 0x14) & 2) == 0) {
    FUN_0040a0d0(in_EAX);
    return;
  }
  iVar2 = FUN_0040a040();
  FUN_0040a0a0(iVar2);
  return;
}


/* END FUNCTION 0x0040a300 */
