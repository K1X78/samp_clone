/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004196b0
 * Name: FUN_004196b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_004196b0(void)

{
  byte bVar1;
  int in_EAX;
  undefined3 extraout_var;
  
  if ((*(byte *)(in_EAX + 0x1d) & 0x40) != 0) {
    FUN_00414c50();
  }
  if (((*(byte *)(in_EAX + 0x1c) & 0x12) != 0) &&
     (*(int *)(in_EAX + 0x14) != *(int *)(in_EAX + 0x24))) {
    bVar1 = FUN_00414b80((void *)(*(int *)(in_EAX + 0x18) + 2),in_EAX);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 7;
    }
    *(undefined1 *)(*(int *)(in_EAX + 0x18) + *(int *)(in_EAX + 0x14)) = 0;
    *(undefined1 *)(*(int *)(in_EAX + 0x18) + 1 + *(int *)(in_EAX + 0x14)) = 0;
    *(byte *)(in_EAX + 0x1d) = *(byte *)(in_EAX + 0x1d) | 2;
  }
  return 0;
}


/* END FUNCTION 0x004196b0 */
