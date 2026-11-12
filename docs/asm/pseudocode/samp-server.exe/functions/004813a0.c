/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004813a0
 * Name: FUN_004813a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_004813a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (DAT_004fc438 != 0) {
      uVar3 = thunk_FUN_0044e910();
      *(int *)((int)param_1 + 0x75) = (int)uVar3;
    }
    param_1[1] = 2;
    if ((uint)param_1[0x11] < 0x10) {
      piVar2 = param_1 + 0xc;
    }
    else {
      piVar2 = (int *)param_1[0xc];
    }
    if ((uint)param_1[10] < 0x10) {
      piVar1 = param_1 + 5;
    }
    else {
      piVar1 = (int *)param_1[5];
    }
    FUN_00468c30((void *)*param_1,param_1[3],(char *)piVar1,(char *)piVar2,"sa-mp.com");
    param_1[1] = 3;
    *(undefined4 *)((int)param_1 + 0x79) = 0;
  }
  return 0;
}


/* END FUNCTION 0x004813a0 */
