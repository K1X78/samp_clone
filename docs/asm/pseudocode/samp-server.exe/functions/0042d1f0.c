/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d1f0
 * Name: FUN_0042d1f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042d1f0(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  FUN_00407d90();
  iVar3 = 0;
  if (0 < *(int *)(in_EAX + 4)) {
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)(in_EAX + 8) + 4 + iVar4) != 0) {
        iVar2 = FUN_0040d050();
        if (iVar2 != 0) {
          bVar1 = true;
        }
        FUN_0042ad10(extraout_ECX);
        *(undefined1 *)(*(int *)(in_EAX + 8) + 8 + iVar4) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(in_EAX + 4));
  }
  FUN_00410660();
  FUN_00407da0();
  if ((*(uint *)(in_EAX + 0xc) & 0x200) != 0) {
    FUN_0040dcd0();
    FUN_00420a50(0);
  }
  *(undefined4 *)(in_EAX + 0x1e0) = 0;
  *(undefined4 *)(in_EAX + 0x1e4) = 0;
  if ((*(code **)(in_EAX + 0xb0) != (code *)0x0) && ((bVar1 || (*(char *)(in_EAX + 0x1c) == '\0'))))
  {
    (**(code **)(in_EAX + 0xb0))(*(undefined4 *)(in_EAX + 0xac));
  }
  return;
}


/* END FUNCTION 0x0042d1f0 */
