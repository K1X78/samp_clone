/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fb50
 * Name: FUN_0042fb50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042fb50(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = *in_EAX;
  FUN_0042dd20(in_EAX);
  if (in_EAX[0x15] < 0) {
    if ((in_EAX[0x16] != 0) && (*(char *)((int)in_EAX + 0x62) != '\0')) {
      FUN_0042f990(in_EAX[0x16],(undefined **)0x0);
      FUN_0042e5e0((void *)0xffffffff,*(int *)(iVar1 + 0xd0),(void *)in_EAX[0x17]);
      FUN_00408130(iVar1);
      in_EAX[0x17] = 0;
    }
  }
  else {
    if (in_EAX[0x17] == 0) {
      iVar2 = in_EAX[0x16];
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      FUN_0042f990(iVar2,(undefined **)0x0);
    }
    else {
      FUN_00407d90();
      FUN_0042e5e0((void *)0xffffffff,*(int *)(iVar1 + 0xd0),(void *)in_EAX[0x17]);
      FUN_00407da0();
      *(int *)(iVar1 + 0x14) = in_EAX[0x16];
      FUN_00408130(iVar1);
      in_EAX[0x17] = 0;
    }
    if (*(char *)((int)in_EAX + 99) != '\0') {
      *(undefined1 *)((int)in_EAX + 0x62) = 1;
    }
  }
  FUN_0040d840();
  in_EAX[0x11] = 0x26bceaa5;
  return *(uint *)(iVar1 + 0x18) & in_EAX[0x16];
}


/* END FUNCTION 0x0042fb50 */
