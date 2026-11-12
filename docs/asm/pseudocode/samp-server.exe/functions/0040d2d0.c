/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d2d0
 * Name: FUN_0040d2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040d2d0(void)

{
  int iVar1;
  int iVar2;
  ulonglong *unaff_ESI;
  ulonglong uVar3;
  
  uVar3 = FUN_0040d280((double)unaff_ESI[1]);
  iVar2 = (int)uVar3;
  iVar1 = *(int *)((int)unaff_ESI + 4);
  *unaff_ESI = uVar3;
  if (((((double)unaff_ESI[1] == (double)CONCAT44(iVar1,iVar2)) && (-0x80000000 <= iVar1)) &&
      ((-0x80000000 < iVar1 || (iVar2 != 0)))) && ((iVar1 < 0x7fffffff || (iVar2 != -1)))) {
    *(byte *)((int)unaff_ESI + 0x1c) = *(byte *)((int)unaff_ESI + 0x1c) | 4;
  }
  return;
}


/* END FUNCTION 0x0040d2d0 */
