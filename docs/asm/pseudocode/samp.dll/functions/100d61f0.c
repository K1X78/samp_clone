/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d61f0
 * Name: FUN_100d61f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d61f0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  piVar2 = param_1;
  iVar1 = *(int *)(*param_1 + 100);
  if ((iVar1 != 0) && (param_1 = (int *)param_2, param_2 != -1)) {
    iVar4 = FUN_100e43c0(iVar1 + 0x60,&param_1,4);
    if (iVar4 != 0) {
      if (*(code **)(iVar1 + 0x34) != (code *)0x0) {
        (**(code **)(iVar1 + 0x34))
                  (*piVar2,iVar3,4,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar4 + 0xc));
      }
      param_1 = (int *)iVar3;
      FUN_100e4340(iVar1 + 0x60,&param_1,4);
    }
  }
  return;
}


/* END FUNCTION 0x100d61f0 */
