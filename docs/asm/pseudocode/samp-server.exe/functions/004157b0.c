/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004157b0
 * Name: FUN_004157b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_004157b0(void)

{
  char cVar1;
  char *in_EAX;
  
  cVar1 = *in_EAX;
  while (cVar1 == 't') {
    in_EAX = (char *)**(undefined4 **)(**(int **)(in_EAX + 0x10) + 0xc);
    cVar1 = *in_EAX;
  }
  if (cVar1 != '%') {
    if ((((cVar1 == -0x66) || (cVar1 == -0x68)) || (cVar1 == -0x7c)) &&
       (*(int *)(in_EAX + 0x28) != 0)) {
      if (-1 < *(short *)(in_EAX + 0x1c)) {
        return *(char *)(*(int *)(*(int *)(in_EAX + 0x28) + 0x10) + 0x16 +
                        *(short *)(in_EAX + 0x1c) * 0x18);
      }
      return 'd';
    }
    return in_EAX[1];
  }
  cVar1 = FUN_0040efb0();
  return cVar1;
}


/* END FUNCTION 0x004157b0 */
