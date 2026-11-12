/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042dfb0
 * Name: FUN_0042dfb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042dfb0(void)

{
  uint uVar1;
  int *unaff_EDI;
  int local_4;
  
  if (*(char *)((int)unaff_EDI + 0x15) == '\0') {
    if (*unaff_EDI != 0) {
      uVar1 = FUN_0042d370();
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_4 != 0) {
        *(undefined1 *)(unaff_EDI + 5) = 1;
        unaff_EDI[0x11] = 0;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0042b0b0((void *)*unaff_EDI,(int *)0x0,unaff_EDI[6],unaff_EDI[7],0,&local_4);
    if (uVar1 == 0) {
      unaff_EDI[2] = unaff_EDI[6];
      unaff_EDI[3] = unaff_EDI[7];
      *(bool *)((int)unaff_EDI + 0x11) = local_4 == 0;
      if ((local_4 < 0) && (uVar1 = FUN_0042d4b0(*unaff_EDI,&local_4), uVar1 != 0)) {
        return uVar1;
      }
      *(undefined1 *)((int)unaff_EDI + 0x15) = 0;
      unaff_EDI[0x11] = 0;
      return 0;
    }
  }
  return uVar1;
}


/* END FUNCTION 0x0042dfb0 */
