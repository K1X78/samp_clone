/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004076b0
 * Name: FUN_004076b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004076b0(void)

{
  uint uVar1;
  ulonglong *unaff_ESI;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)((int)unaff_ESI + 0x2a) == '\0') {
    uVar3 = FUN_004a0540();
    *unaff_ESI = uVar3;
    *(undefined1 *)((int)unaff_ESI + 0x2a) = 1;
    if (*(char *)((int)unaff_ESI + 0x29) != '\0') {
      uVar1 = (*(uint *)((int)unaff_ESI + 0x14) * 0x3c + (uint)unaff_ESI[3]) * 60000;
      uVar4 = FUN_004a0540();
      uVar2 = uVar1 - (uint)uVar4;
      uVar3 = *unaff_ESI;
      *(uint *)unaff_ESI = (uint)uVar3 + uVar2;
      *(uint *)((int)unaff_ESI + 4) =
           *(uint *)((int)unaff_ESI + 4) +
           ((((int)uVar1 >> 0x1f) - (int)(uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4)) +
           (uint)CARRY4((uint)uVar3,uVar2);
      if (*(char *)((int)unaff_ESI + 0x2b) != '\0') {
        uVar3 = *unaff_ESI;
        uVar1 = *(uint *)((int)unaff_ESI + 0x1c) * 60000;
        *(uint *)unaff_ESI = (uint)uVar3 + *(uint *)((int)unaff_ESI + 0x1c) * -60000;
        *(uint *)((int)unaff_ESI + 4) =
             (*(uint *)((int)unaff_ESI + 4) - ((int)uVar1 >> 0x1f)) - (uint)((uint)uVar3 < uVar1);
        *(undefined1 *)(unaff_ESI + 5) = 0;
        *(undefined1 *)((int)unaff_ESI + 0x29) = 0;
        *(undefined1 *)((int)unaff_ESI + 0x2b) = 0;
      }
    }
  }
  return;
}


/* END FUNCTION 0x004076b0 */
