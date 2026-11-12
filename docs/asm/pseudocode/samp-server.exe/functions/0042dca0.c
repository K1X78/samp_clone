/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042dca0
 * Name: FUN_0042dca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042dca0(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0xdc) != 0) {
    for (iVar1 = *(int *)(*(int *)(in_EAX + 0xdc) + 0x3c); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x3c)) {
    }
    FUN_0040d7f0();
  }
  *(undefined4 *)(in_EAX + 0xdc) = 0;
  *(undefined4 *)(in_EAX + 0xe0) = 0;
  if ((*(int *)(in_EAX + 0x34) != 0) && (iVar1 = 0, *(short *)(in_EAX + 0x32) != 0)) {
    do {
      if (*(int *)(*(int *)(in_EAX + 0x34) + iVar1 * 4) != 0) {
        FUN_0042dc50();
        *(undefined4 *)(*(int *)(in_EAX + 0x34) + iVar1 * 4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(in_EAX + 0x32));
  }
  if (*(int *)(in_EAX + 0x4c) != 0) {
    FUN_0040d750(*(int *)(in_EAX + 0x4c) + 0x28);
    return;
  }
  return;
}


/* END FUNCTION 0x0042dca0 */
