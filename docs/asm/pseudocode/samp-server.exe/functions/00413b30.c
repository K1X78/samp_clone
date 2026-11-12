/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413b30
 * Name: FUN_00413b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00413b30(void)

{
  bool bVar1;
  int in_EAX;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  
  if (*(char *)(in_EAX + 4) == '\0') {
    iVar3 = 0;
    if (**(int **)(in_EAX + 0x38) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00407bb0();
    }
    if (((uVar2 & 0x800) == 0) || ((*(byte *)(in_EAX + 5) & 5) != 1)) {
      FUN_00407ab0();
    }
    FUN_0040a000(*(int *)(in_EAX + 0x34));
    *(undefined4 *)(in_EAX + 0x34) = 0;
    FUN_00413a60();
    *(undefined1 *)(in_EAX + 0x16) = 0;
    bVar1 = FUN_0040b4a0(in_EAX);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar3 = FUN_0040b0d0();
      if (iVar3 != 0) {
        *(int *)(in_EAX + 0x24) = iVar3;
      }
    }
    else {
      FUN_0040c120();
    }
    if (*(int *)(in_EAX + 0x24) != 0) {
      if (iVar3 == 0) {
        *(undefined4 *)(in_EAX + 0x24) = 0;
      }
      FUN_00413a30();
    }
    *(undefined1 *)(in_EAX + 0x12) = 0;
    *(undefined1 *)(in_EAX + 0xe) = 0;
    *(undefined1 *)(in_EAX + 0xf) = 0;
  }
  return;
}


/* END FUNCTION 0x00413b30 */
