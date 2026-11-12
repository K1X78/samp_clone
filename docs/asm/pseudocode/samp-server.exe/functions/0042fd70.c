/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fd70
 * Name: FUN_0042fd70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0042fd70(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int iVar3;
  
  iVar1 = FUN_00419e00();
  if (iVar1 != 0) {
    uVar2 = FUN_0041d7c0();
    return uVar2;
  }
  FUN_00407e50(*(int *)(*unaff_ESI + 0x44));
  if ((unaff_ESI[0x11] == -0x420df25d) && (unaff_ESI[0x15] < 0)) {
    if ((0 < in_EAX) && (in_EAX <= *(short *)((int)unaff_ESI + 0x3a))) {
      iVar3 = in_EAX + -1;
      iVar1 = unaff_ESI[0xf] + iVar3 * 0x28;
      FUN_0040d250(iVar1);
      *(undefined2 *)(iVar1 + 0x1c) = 1;
      FUN_0042f990(0,(undefined **)0x0);
      if (((char)unaff_ESI[0x1a] != '\0') &&
         (((iVar3 < 0x20 && ((1 << ((byte)iVar3 & 0x1f) & unaff_ESI[0x39]) != 0)) ||
          (unaff_ESI[0x39] == -1)))) {
        *(undefined1 *)((int)unaff_ESI + 0x62) = 1;
      }
      return 0;
    }
    FUN_0042f990(0x19,(undefined **)0x0);
    FUN_00407e90(*(int *)(*unaff_ESI + 0x44));
    return 0x19;
  }
  FUN_0042f990(0x15,(undefined **)0x0);
  FUN_00407e90(*(int *)(*unaff_ESI + 0x44));
  FUN_00418ab0(0x15,(undefined **)"bind on a busy prepared statement: [%s]");
  uVar2 = FUN_0041d7c0();
  return uVar2;
}


/* END FUNCTION 0x0042fd70 */
