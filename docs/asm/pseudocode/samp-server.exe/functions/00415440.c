/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415440
 * Name: FUN_00415440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00415440(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 4)) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(unaff_ESI + 8) + 4 + iVar3) != 0) {
        FUN_0040d020();
        uVar4 = FUN_00414490();
        iVar1 = (int)((ulonglong)uVar4 >> 0x20);
        if (((*(code **)(unaff_ESI + 0xbc) != (code *)0x0) && (0 < (int)uVar4)) && (iVar1 == 0)) {
          iVar1 = (**(code **)(unaff_ESI + 0xbc))(*(undefined4 *)(unaff_ESI + 0xc0));
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(unaff_ESI + 4));
  }
  return iVar1;
}


/* END FUNCTION 0x00415440 */
