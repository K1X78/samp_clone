/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fd20
 * Name: FUN_0041fd20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_0041fd20(void)

{
  ushort uVar1;
  longlong *in_EAX;
  int iVar2;
  double local_8;
  
  uVar1 = *(ushort *)((int)in_EAX + 0x1c);
  if ((uVar1 & 8) != 0) {
    return (float10)(double)in_EAX[1];
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 0x12) != 0) {
      local_8 = 0.0;
      *(ushort *)((int)in_EAX + 0x1c) = uVar1 | 2;
      iVar2 = FUN_0041fbf0(1);
      if ((iVar2 == 0) && (iVar2 = FUN_00414cb0(), iVar2 == 0)) {
        FUN_004085d0(&local_8);
        return (float10)local_8;
      }
    }
    return (float10)0.0;
  }
  return (float10)*in_EAX;
}


/* END FUNCTION 0x0041fd20 */
