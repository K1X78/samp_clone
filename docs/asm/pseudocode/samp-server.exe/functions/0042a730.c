/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a730
 * Name: FUN_0042a730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0042a730(void)

{
  void *in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0040ce30();
  if (*(char *)(*(int *)((int)in_EAX + 0x60) + 2) == '\0') {
    iVar2 = FUN_004125b0(*(int *)((int)in_EAX + 0x48));
    if (iVar2 == 0) {
      FUN_0040c650();
      return 7;
    }
    iVar1 = FUN_004286c0(*(void **)((int)in_EAX + 0x48),in_EAX);
    if (iVar1 != 0) {
      FUN_004080d0(iVar2);
      goto LAB_0042a77c;
    }
    *(int *)((int)in_EAX + 0x44) = iVar2;
  }
  else {
LAB_0042a77c:
    if (iVar1 != 0) goto LAB_0042a7b3;
  }
  iVar2 = 0;
  if (-1 < *(short *)((int)in_EAX + 0x5c)) {
    puVar3 = (undefined4 *)((int)in_EAX + 0x60);
    do {
      FUN_00427610();
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 <= *(short *)((int)in_EAX + 0x5c));
  }
  *(undefined2 *)((int)in_EAX + 0x5c) = 0xffff;
  *(undefined1 *)((int)in_EAX + 0x43) = 2;
LAB_0042a7b3:
  FUN_0040c650();
  return iVar1;
}


/* END FUNCTION 0x0042a730 */
