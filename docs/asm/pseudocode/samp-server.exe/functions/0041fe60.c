/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fe60
 * Name: FUN_0041fe60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041fe60(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  byte unaff_BL;
  uint uVar3;
  
  if ((in_EAX != 0) && (uVar1 = *(ushort *)(in_EAX + 0x1c), (uVar1 & 1) == 0)) {
    *(ushort *)(in_EAX + 0x1c) = uVar1 >> 3 & 2 | uVar1;
    if ((uVar1 & 0x4000) != 0) {
      FUN_00414c50();
    }
    uVar3 = (uint)unaff_BL;
    if ((*(byte *)(in_EAX + 0x1c) & 2) == 0) {
      FUN_0041fc10(uVar3);
    }
    else {
      FUN_0041fbf0(uVar3 & 0xfffffff7);
      if ((((unaff_BL & 8) != 0) && (((byte)*(undefined4 *)(in_EAX + 0x14) & 1) == 1)) &&
         (iVar2 = FUN_004196b0(), iVar2 != 0)) {
        return 0;
      }
      FUN_00414cb0();
    }
    if ((uint)*(byte *)(in_EAX + 0x1f) == (uVar3 & 0xfffffff7)) {
      return *(undefined4 *)(in_EAX + 0x14);
    }
  }
  return 0;
}


/* END FUNCTION 0x0041fe60 */
