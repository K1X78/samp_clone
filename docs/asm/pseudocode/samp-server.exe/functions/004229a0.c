/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004229a0
 * Name: FUN_004229a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004229a0(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0041cc50(0x6b);
  if (iVar1 != 0) {
    piVar2 = FUN_00415950(in_EAX,param_1,1);
    *(int **)(iVar1 + 0x18) = piVar2;
    uVar3 = FUN_00420310(in_EAX,param_2,1);
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    *(undefined1 *)(iVar1 + 1) = param_3;
  }
  FUN_0040e580();
  FUN_004158d0(in_EAX,(int)param_2);
  return iVar1;
}


/* END FUNCTION 0x004229a0 */
