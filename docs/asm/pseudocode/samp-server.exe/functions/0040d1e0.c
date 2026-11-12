/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d1e0
 * Name: FUN_0040d1e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040d1e0(void)

{
  ushort uVar1;
  int *in_EAX;
  
  uVar1 = *(ushort *)(in_EAX + 7);
  if ((uVar1 & 0x2460) != 0) {
    if ((uVar1 & 0x2000) != 0) {
      FUN_0040d170((uint)uVar1,*in_EAX);
      FUN_0040d250((int)in_EAX);
      return;
    }
    if (((uVar1 & 0x400) != 0) && ((code *)in_EAX[8] != (code *)0x0)) {
      (*(code *)in_EAX[8])(in_EAX[5]);
      in_EAX[8] = 0;
      return;
    }
    if ((uVar1 & 0x20) != 0) {
      FUN_0040ac90();
      return;
    }
    if ((uVar1 & 0x40) != 0) {
      FUN_0042e3e0((int)in_EAX);
    }
  }
  return;
}


/* END FUNCTION 0x0040d1e0 */
