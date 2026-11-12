/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409110
 * Name: FUN_00409110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00409110(int param_1,int param_2)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  
  if ((int *)in_EAX[1] == (int *)0x0) {
    *(int *)(param_1 + 8) = *in_EAX;
  }
  else {
    *(int *)in_EAX[1] = *in_EAX;
  }
  if (*in_EAX != 0) {
    *(int *)(*in_EAX + 4) = in_EAX[1];
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 4 + param_2 * 8) == in_EAX) {
      *(int *)(iVar2 + 4 + param_2 * 8) = *in_EAX;
    }
    piVar1 = (int *)(iVar2 + param_2 * 8);
    *piVar1 = *piVar1 + -1;
  }
  FUN_004080d0((int)in_EAX);
  iVar2 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    FUN_00408ff0();
  }
  return;
}


/* END FUNCTION 0x00409110 */
