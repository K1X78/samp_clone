/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437690
 * Name: FUN_00437690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00437690(undefined4 param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(unaff_EBX + 0x60);
  while (((piVar2[4] < 1 || ((void *)*piVar2 != param_3)) || (piVar2[1] != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
    if (9 < iVar1) {
      FUN_00437630(param_3,param_4);
      FUN_0040e950((int)param_3,param_2,param_4);
      return param_4;
    }
  }
  piVar2[5] = *(int *)(unaff_EBX + 0x58);
  *(int *)(unaff_EBX + 0x58) = *(int *)(unaff_EBX + 0x58) + 1;
  FUN_0040eae0(param_3,piVar2[4]);
  return piVar2[4];
}


/* END FUNCTION 0x00437690 */
