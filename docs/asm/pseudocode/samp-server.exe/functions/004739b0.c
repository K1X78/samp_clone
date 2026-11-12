/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004739b0
 * Name: FUN_004739b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_004739b0(undefined4 param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined2 uStack_c;
  undefined1 local_8 [8];
  
  piVar2 = *(int **)(DAT_004fc438 + 0x40);
  (**(code **)(*piVar2 + 0xec))(local_8,*(undefined4 *)(param_2 + 4));
  iVar3 = (**(code **)(*piVar2 + 0x90))(0);
  fVar1 = (float)CONCAT22(0x47,uStack_c);
  if ((iVar3 != 0) && (fVar1 = (float)CONCAT22(0x47,uStack_c), iVar3 != -0x2f8)) {
    fVar1 = (float)(((-(float10)(longlong)
                                (((ulonglong)*(uint *)(iVar3 + 0x394) & 0x80000000) << 0x20) +
                     (float10)(*(ulonglong *)(iVar3 + 0x390) & 0x7fffffffffffffff)) * (float10)100.0
                    ) / (-(float10)(longlong)
                                   (((ulonglong)*(uint *)(iVar3 + 0x3bc) & 0x80000000) << 0x20) +
                        (float10)(*(ulonglong *)(iVar3 + 0x3b8) & 0x7fffffffffffffff)));
  }
  return fVar1;
}


/* END FUNCTION 0x004739b0 */
