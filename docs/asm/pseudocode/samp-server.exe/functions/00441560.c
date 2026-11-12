/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00441560
 * Name: FUN_00441560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_00441560(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  int local_4;
  
  if (in_EAX[0x11] != -0x420df25d) {
    FUN_004343b0(in_EAX);
  }
  iVar1 = *in_EAX;
  if (*(char *)(iVar1 + 0x1e) != '\0') {
    in_EAX[0x16] = 7;
    return 7;
  }
  if ((in_EAX[0x15] < 1) && (*(char *)((int)in_EAX + 0x62) != '\0')) {
    in_EAX[0x16] = 0x11;
    uVar4 = 1;
  }
  else {
    if (in_EAX[0x15] < 0) {
      if (*(int *)(iVar1 + 0x8c) == 0) {
        *(undefined4 *)(iVar1 + 0xe0) = 0;
      }
      if ((*(int *)(iVar1 + 0x9c) != 0) && (*(char *)(iVar1 + 0x7c) == '\0')) {
        FUN_00407ce0();
      }
      *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + 1;
      if (*(char *)((int)in_EAX + 0x67) == '\0') {
        *(int *)(iVar1 + 0x90) = *(int *)(iVar1 + 0x90) + 1;
      }
      in_EAX[0x15] = 0;
    }
    if ((char)in_EAX[0x18] == '\0') {
      uVar4 = FUN_0043b030(in_EAX);
    }
    else {
      uVar4 = FUN_0042e600();
    }
    if ((((uVar4 != 100) && (*(int *)(iVar1 + 0x9c) != 0)) && (*(char *)(iVar1 + 0x7c) == '\0')) &&
       (in_EAX[0x2f] != 0)) {
      FUN_00407ce0();
      (**(code **)(iVar1 + 0x9c))
                (*(undefined4 *)(iVar1 + 0xa0),in_EAX[0x2f],local_8 - in_EAX[0x1e],
                 (local_4 - in_EAX[0x1f]) - (uint)(local_8 < (uint)in_EAX[0x1e]));
    }
    if (uVar4 == 0x65) {
      iVar2 = FUN_00415440();
      in_EAX[0x16] = iVar2;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
    *(uint *)(iVar1 + 0x14) = uVar4;
    uVar3 = FUN_004340c0(in_EAX[0x16]);
    if (uVar3 == 7) {
      in_EAX[0x16] = 7;
    }
  }
  if ((((char)in_EAX[0x1a] != '\0') && (uVar4 != 100)) && (uVar4 != 0x65)) {
    uVar4 = in_EAX[0x16];
    *(uint *)(iVar1 + 0x14) = uVar4;
  }
  return *(uint *)(iVar1 + 0x18) & uVar4;
}


/* END FUNCTION 0x00441560 */
