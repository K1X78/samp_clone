/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b4e0
 * Name: FUN_0041b4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


short * FUN_0041b4e0(void)

{
  short sVar1;
  short *in_EAX;
  short *psVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  
  if (in_EAX == (short *)0x0) {
    in_EAX = (short *)FUN_00417b70();
    if (in_EAX == (short *)0x0) {
      return (short *)0x0;
    }
    in_EAX[1] = 1;
  }
  psVar2 = FUN_004166b0(unaff_ESI,1,(int)*in_EAX);
  if (*(char *)((int)unaff_ESI + 0x1e) == '\0') {
    sVar1 = *psVar2;
    uVar3 = FUN_00416430();
    *(undefined4 *)(psVar2 + sVar1 * 0x1c + -0x18 + 2) = uVar3;
    uVar3 = FUN_00416430();
    *(undefined4 *)(psVar2 + sVar1 * 0x1c + -0x18) = uVar3;
    return psVar2;
  }
  FUN_0040f240(psVar2);
  return (short *)0x0;
}


/* END FUNCTION 0x0041b4e0 */
