/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cd00
 * Name: FUN_0041cd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * FUN_0041cd00(void)

{
  int *in_EAX;
  short *psVar1;
  int iVar2;
  char *pcVar3;
  
  psVar1 = FUN_0041b4e0();
  if (psVar1 != (short *)0x0) {
    iVar2 = FUN_0040fc30(*in_EAX);
    if ((iVar2 == 0) || (1 < iVar2)) {
      pcVar3 = FUN_00412a70();
      *(char **)(psVar1 + *psVar1 * 0x1c + -0x18) = pcVar3;
    }
  }
  return psVar1;
}


/* END FUNCTION 0x0041cd00 */
