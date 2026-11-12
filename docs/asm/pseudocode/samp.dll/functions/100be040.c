/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be040
 * Name: FUN_100be040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100be040(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  int local_4;
  
  if (((char)unaff_ESI[7] == '\0') && (unaff_ESI[0x17] == 0)) {
    if (*(char *)((int)unaff_ESI + 0x1f) == '\0') {
      iVar2 = (*unaff_ESI - unaff_ESI[1]) + unaff_ESI[3];
      local_4 = (unaff_ESI[0xf] - iVar2) + unaff_ESI[0xd];
      if (local_4 != 0) {
        while( true ) {
          iVar2 = (**(code **)unaff_ESI[0xe])((undefined4 *)unaff_ESI[0xe],iVar2,&local_4);
          unaff_ESI[0x17] = iVar2;
          if (iVar2 != 0) break;
          if (local_4 == 0) goto LAB_100be078;
          iVar2 = unaff_ESI[3];
          unaff_ESI[3] = iVar2 + local_4;
          if ((uint)unaff_ESI[0x11] < (uint)((iVar2 + local_4) - unaff_ESI[1])) {
            return;
          }
          iVar2 = (*unaff_ESI - unaff_ESI[1]) + unaff_ESI[3];
          local_4 = (unaff_ESI[0xf] - iVar2) + unaff_ESI[0xd];
          if (local_4 == 0) {
            return;
          }
        }
      }
    }
    else {
      uVar1 = (unaff_ESI[1] - unaff_ESI[3]) - 1;
      if ((uint)unaff_ESI[0x13] < uVar1) {
        uVar1 = unaff_ESI[0x13];
      }
      iVar2 = unaff_ESI[0x13];
      unaff_ESI[0x13] = iVar2 - uVar1;
      unaff_ESI[3] = unaff_ESI[3] + uVar1;
      if (iVar2 - uVar1 == 0) {
LAB_100be078:
        *(undefined1 *)(unaff_ESI + 7) = 1;
      }
    }
  }
  return;
}


/* END FUNCTION 0x100be040 */
