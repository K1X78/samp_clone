/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00430960
 * Name: FUN_00430960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00430960(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar3 = param_2;
  iVar1 = param_2[1];
  iVar2 = *param_1;
  piVar4 = FUN_00417b70();
  if (piVar4 != (int *)0x0) {
    iVar6 = 0;
    *piVar4 = *param_1;
    piVar4[2] = (int)(piVar4 + iVar1 + 3);
    if (0 < iVar1) {
      param_2 = piVar4 + 3;
      do {
        piVar5 = FUN_004308f0(param_1);
        *param_2 = (int)piVar5;
        *(undefined1 *)(iVar6 + piVar4[2]) = *(undefined1 *)(iVar6 + piVar3[10]);
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 1;
      } while (iVar6 < iVar1);
    }
    *(short *)((int)piVar4 + 6) = (short)iVar1;
  }
  if (param_1[0x10] != 0) {
    FUN_00408130(iVar2);
    return (int *)0x0;
  }
  return piVar4;
}


/* END FUNCTION 0x00430960 */
