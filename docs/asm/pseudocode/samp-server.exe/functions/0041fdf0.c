/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fdf0
 * Name: FUN_0041fdf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041fdf0(void)

{
  bool bVar1;
  uint *in_EAX;
  int iVar2;
  undefined3 extraout_var;
  float10 fVar3;
  
  iVar2 = FUN_0041fbf0(1);
  if (iVar2 == 0) {
    iVar2 = FUN_00414cb0();
    if (iVar2 == 0) {
      bVar1 = FUN_00408a20(in_EAX);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        *(ushort *)(in_EAX + 7) = (ushort)in_EAX[7] & 0xbf04 | 4;
        return 0;
      }
      fVar3 = FUN_0041fd20();
      *(double *)(in_EAX + 2) = (double)fVar3;
      *(ushort *)(in_EAX + 7) = (ushort)in_EAX[7] & 0xbf08 | 8;
      FUN_0040d2d0();
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* END FUNCTION 0x0041fdf0 */
