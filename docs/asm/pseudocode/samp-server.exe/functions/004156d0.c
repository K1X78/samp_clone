/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004156d0
 * Name: FUN_004156d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_004156d0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  iVar1 = FUN_0040e2c0();
  if (iVar1 == 0) {
    uVar2 = FUN_00415640(in_EAX,*(int *)(unaff_ESI + 0xc));
    if (uVar2 == 0) {
      iVar1 = FUN_0040e2c0();
      if (iVar1 == 0) {
        uVar2 = FUN_00415640(in_EAX,*(int *)(unaff_ESI + 0x14));
        if (uVar2 == 0) {
          iVar1 = FUN_0040e2c0();
          if (iVar1 == 0) {
            uVar2 = FUN_00415640(in_EAX,*(int *)(unaff_ESI + 0x28));
            if (uVar2 == 0) {
              uVar2 = FUN_00415640(in_EAX,*(int *)(unaff_ESI + 0x2c));
              return -(uVar2 != 0) & 2;
            }
          }
        }
      }
    }
  }
  return 2;
}


/* END FUNCTION 0x004156d0 */
