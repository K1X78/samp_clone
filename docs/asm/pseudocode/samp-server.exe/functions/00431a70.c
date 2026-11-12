/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431a70
 * Name: FUN_00431a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00431a70(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(byte *)(param_2 + 0x22) & 0x10) == 0) {
    iVar2 = FUN_0040fc30(*param_1);
    FUN_0041c720();
    FUN_004215c0(param_3,iVar2,param_4);
    iVar2 = 1;
    for (piVar1 = *(int **)(param_2 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
      piVar3 = FUN_00430960(param_1,piVar1);
      FUN_004197c0(piVar1[5],iVar2 + param_3,(char)param_4,(char *)piVar3,-0x10);
      iVar2 = iVar2 + 1;
    }
    if (param_1[0x11] < iVar2 + param_3) {
      param_1[0x11] = iVar2 + param_3;
    }
    return iVar2 + -1;
  }
  return 0;
}


/* END FUNCTION 0x00431a70 */
