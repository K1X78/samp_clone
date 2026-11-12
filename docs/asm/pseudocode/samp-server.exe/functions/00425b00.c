/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425b00
 * Name: FUN_00425b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00425b00(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar3 = FUN_0040b6c0();
  if (*(int *)unaff_ESI[0xe] == 0) {
    iVar3 = FUN_0040b630((int *)unaff_ESI[0xe],unaff_ESI);
  }
  if (iVar3 == 0) {
    if (unaff_ESI[7] + 1U < (uint)unaff_ESI[6]) {
      __allmul(unaff_ESI[0x21],unaff_ESI[0x21] >> 0x1f,unaff_ESI[6],0);
      FUN_00407b80();
    }
    iVar3 = 0;
    do {
      if (param_1 == (int *)0x0) {
        return iVar3;
      }
      uVar1 = param_1[3];
      if ((uVar1 <= (uint)unaff_ESI[6]) && ((*(byte *)(param_1 + 5) & 0x20) == 0)) {
        __allmul(uVar1 - 1,0,unaff_ESI[0x21],unaff_ESI[0x21] >> 0x1f);
        iVar2 = *param_1;
        iVar3 = FUN_00407af0();
        if (uVar1 == 1) {
          unaff_ESI[0x1a] = *(int *)(iVar2 + 0x18);
          unaff_ESI[0x1b] = *(int *)(iVar2 + 0x1c);
          unaff_ESI[0x1c] = *(int *)(iVar2 + 0x20);
          unaff_ESI[0x1d] = *(int *)(iVar2 + 0x24);
        }
        if ((uint)unaff_ESI[8] < uVar1) {
          unaff_ESI[8] = uVar1;
        }
        FUN_00423c30();
      }
      param_1 = (int *)param_1[2];
    } while (iVar3 == 0);
    return iVar3;
  }
  return iVar3;
}


/* END FUNCTION 0x00425b00 */
