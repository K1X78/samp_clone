/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a340
 * Name: FUN_0040a340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a340(void)

{
  int iVar1;
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x14) & 2) != 0) {
    in_EAX = FUN_0040a040();
  }
  iVar1 = *(int *)(in_EAX + 0x18);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  if (*(int *)(in_EAX + 0xc) == 1) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  (*DAT_004ca1a0)(*(undefined4 *)(iVar1 + 0x28),in_EAX,1);
  return;
}


/* END FUNCTION 0x0040a340 */
