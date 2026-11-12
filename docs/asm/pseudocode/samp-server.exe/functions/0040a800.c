/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a800
 * Name: FUN_0040a800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a800(void)

{
  int *piVar1;
  int in_EAX;
  
  if ((in_EAX != 0) && ((*(int *)(in_EAX + 0xc) != 0 || (in_EAX == DAT_004ed300)))) {
    if (*(int *)(in_EAX + 0x10) != 0) {
      *(int *)(*(int *)(in_EAX + 0x10) + 0xc) = *(int *)(in_EAX + 0xc);
    }
    if (*(int *)(in_EAX + 0xc) != 0) {
      *(undefined4 *)(*(int *)(in_EAX + 0xc) + 0x10) = *(undefined4 *)(in_EAX + 0x10);
    }
    if (DAT_004ed2fc == in_EAX) {
      DAT_004ed2fc = *(int *)(in_EAX + 0xc);
    }
    if (DAT_004ed300 == in_EAX) {
      DAT_004ed300 = *(int *)(in_EAX + 0x10);
    }
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
    piVar1 = (int *)(*(int *)(in_EAX + 8) + 0x10);
    *piVar1 = *piVar1 + -1;
  }
  return;
}


/* END FUNCTION 0x0040a800 */
