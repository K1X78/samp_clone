/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401070
 * Name: FUN_00401070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00401070(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  pcVar3 = *(code **)(*(short *)(iVar2 + 10) * param_2 + *(int *)(iVar2 + 0x24) + iVar2);
  if (param_1[0x19] != 0) {
    piVar1 = (int *)(*(int *)(iVar2 + 0xc) + param_1[4] + -4 + iVar2);
    if (*piVar1 != 0x7a) {
      piVar1[-1] = param_1[0x19];
      *piVar1 = (int)pcVar3;
    }
  }
  param_1[0x13] = 0;
  uVar4 = (*pcVar3)(param_1,param_4);
  *param_3 = uVar4;
  return param_1[0x13];
}


/* END FUNCTION 0x00401070 */
