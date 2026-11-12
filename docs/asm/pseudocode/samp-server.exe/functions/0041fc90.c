/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fc90
 * Name: FUN_0041fc90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong FUN_0041fc90(void)

{
  ushort uVar1;
  ulonglong *in_EAX;
  int iVar2;
  ulonglong uVar3;
  ulonglong local_8;
  
  uVar1 = *(ushort *)((int)in_EAX + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *in_EAX;
  }
  if ((uVar1 & 8) != 0) {
    uVar3 = FUN_0040d280((double)in_EAX[1]);
    return uVar3;
  }
  if ((uVar1 & 0x12) != 0) {
    *(ushort *)((int)in_EAX + 0x1c) = uVar1 | 2;
    iVar2 = FUN_0041fbf0(1);
    if (iVar2 == 0) {
      iVar2 = FUN_00414cb0();
      if (iVar2 == 0) {
        FUN_00408a20((uint *)&local_8);
        return local_8;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x0041fc90 */
