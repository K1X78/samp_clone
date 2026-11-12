/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e8c0
 * Name: FUN_0040e8c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_0040e8c0(void)

{
  short *psVar1;
  int *in_EAX;
  
  if ((((((in_EAX != (int *)0x0) && (in_EAX[7] == 0)) && ((*(byte *)((int)in_EAX + 6) & 5) == 0)) &&
       ((in_EAX[10] == 0 && (in_EAX[3] == 0)))) &&
      ((psVar1 = (short *)in_EAX[2], *psVar1 == 1 &&
       ((*(int *)(psVar1 + 0xc) == 0 && (*(int *)(psVar1 + 10) != 0)))))) &&
     (((*(byte *)(*(int *)(psVar1 + 10) + 0x22) & 0x10) == 0 && (*(int *)*in_EAX == 1)))) {
    return **(char **)((int *)*in_EAX)[3] == -0x68;
  }
  return false;
}


/* END FUNCTION 0x0040e8c0 */
