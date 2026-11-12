/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042cd30
 * Name: FUN_0042cd30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042cd30(void)

{
  int *in_EAX;
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  if ((int *)in_EAX[0x6a] != (int *)0x0) {
    in_EAX = (int *)in_EAX[0x6a];
  }
  if (in_EAX[0x57] == 0) {
    iVar1 = FUN_0041c720();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00414e70(0,1);
    in_EAX[0x57] = iVar1 + 1;
  }
  if (-1 < unaff_ESI) {
    uVar2 = 1 << ((byte)unaff_ESI & 0x1f);
    if ((uVar2 & in_EAX[0x55]) == 0) {
      in_EAX[0x55] = in_EAX[0x55] | uVar2;
      in_EAX[unaff_ESI + 0x58] = **(int **)(*(int *)(*in_EAX + 8) + 0xc + unaff_ESI * 0x10);
      if (unaff_ESI == 1) {
        FUN_0042cca0();
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x0042cd30 */
