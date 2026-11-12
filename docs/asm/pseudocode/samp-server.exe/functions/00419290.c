/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419290
 * Name: FUN_00419290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00419290(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  uint local_4;
  
  iVar2 = *in_EAX;
  if (in_EAX[9] != 0) {
    return in_EAX[9];
  }
  iVar1 = FUN_00414010(&local_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00413460(local_4);
  in_EAX[0xd] = iVar1;
  if (iVar1 == 0) {
    return 7;
  }
  if (*(int *)in_EAX[0xf] == 0) {
    if (*(char *)((int)in_EAX + 5) == '\x04') {
      FUN_00415610();
    }
    else {
      iVar2 = FUN_00407c20(iVar2,0,in_EAX[0x24],(int *)in_EAX[0xf]);
      if (iVar2 != 0) goto LAB_00419343;
    }
  }
  in_EAX[7] = in_EAX[6];
  *(undefined1 *)((int)in_EAX + 0x11) = 0;
  *(undefined1 *)(in_EAX + 4) = 0;
  in_EAX[10] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  *(undefined1 *)((int)in_EAX + 0x13) = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x15] = 0;
  iVar2 = FUN_004138e0();
  if (iVar2 == 0) {
    return 0;
  }
LAB_00419343:
  FUN_0040a000(in_EAX[0xd]);
  in_EAX[0xd] = 0;
  return iVar2;
}


/* END FUNCTION 0x00419290 */
