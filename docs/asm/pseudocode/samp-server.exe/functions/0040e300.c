/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e300
 * Name: FUN_0040e300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040e300(void)

{
  short *psVar1;
  int in_EAX;
  uint uVar2;
  int unaff_EBX;
  int iVar3;
  int *piVar4;
  
  psVar1 = *(short **)(in_EAX + 8);
  if ((psVar1 != (short *)0x0) && (iVar3 = (int)*psVar1, 0 < iVar3)) {
    piVar4 = (int *)(psVar1 + 0xc);
    do {
      uVar2 = FUN_00415750(unaff_EBX,*piVar4);
      if (uVar2 != 0) {
        return 2;
      }
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + 0xe;
    } while (0 < iVar3);
  }
  return 0;
}


/* END FUNCTION 0x0040e300 */
