/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5d40
 * Name: FUN_100d5d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d5d40(void)

{
  int iVar1;
  uint uVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = 0;
  *unaff_EDI = 0;
  if (((*(code **)(unaff_ESI[200] + 0x10) != (code *)0x0) &&
      (iVar1 = (**(code **)(unaff_ESI[200] + 0x10))(), iVar1 == 0)) && (*unaff_EDI == 1)) {
    *(undefined4 *)(*unaff_ESI + 0x130) = 0;
    uVar2 = unaff_ESI[0xcb];
    if ((uint)unaff_ESI[0xcb] <= (uint)unaff_ESI[0xcc]) {
      uVar2 = unaff_ESI[0xcc];
    }
    *(uint *)(*unaff_ESI + 0x10c) = uVar2 + 1;
    FUN_100e2ff0(*unaff_ESI,6);
  }
  return iVar1;
}


/* END FUNCTION 0x100d5d40 */
