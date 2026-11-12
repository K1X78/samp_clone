/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e2c0
 * Name: FUN_0040e2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040e2c0(void)

{
  int *in_EAX;
  uint uVar1;
  undefined4 *unaff_EBX;
  int iVar2;
  int *piVar3;
  
  if (in_EAX != (int *)0x0) {
    piVar3 = (int *)in_EAX[3];
    for (iVar2 = *in_EAX; 0 < iVar2; iVar2 = iVar2 + -1) {
      uVar1 = FUN_00415640(unaff_EBX,*piVar3);
      if (uVar1 != 0) {
        return 2;
      }
      piVar3 = piVar3 + 5;
    }
  }
  return 0;
}


/* END FUNCTION 0x0040e2c0 */
