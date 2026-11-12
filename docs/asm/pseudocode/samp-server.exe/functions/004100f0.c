/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004100f0
 * Name: FUN_004100f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004100f0(int param_1)

{
  short *psVar1;
  char *pcVar2;
  int *in_EAX;
  
  if ((((in_EAX[3] == 0) && (*(int *)*in_EAX == 1)) && (psVar1 = (short *)in_EAX[2], *psVar1 == 1))
     && (*(int *)(psVar1 + 0xc) == 0)) {
    pcVar2 = *(char **)((int *)*in_EAX)[3];
    if ((((*(byte *)(*(uint *)(psVar1 + 10) + 0x22) & 0x10) == 0) && (*pcVar2 == -0x67)) &&
       ((*(byte *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 3) & 0x20) != 0)) {
      return *(uint *)(psVar1 + 10) & ~-(uint)((pcVar2[2] & 0x10U) != 0);
    }
  }
  return 0;
}


/* END FUNCTION 0x004100f0 */
