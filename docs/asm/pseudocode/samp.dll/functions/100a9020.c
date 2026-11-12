/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9020
 * Name: FUN_100a9020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a9020(undefined4 *param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011ee6c;
  local_4 = 0;
  piVar3 = (int *)FUN_100b3830(param_1[0x11]);
  param_1[0x10] = piVar3;
  if (((piVar3 == (int *)0x0) || (*piVar3 == 0x863c40)) || (DAT_102ac9c0 != 0)) goto LAB_100a9135;
  iVar4 = FUN_1009f8a0();
  if (iVar4 != 0) {
    FUN_1009f9f0();
  }
  FUN_100b1f10(&DAT_1011ee4c,param_1[0x11]);
  if (*(int *)((int)param_1 + 0x4e) < 0) {
LAB_100a90ab:
    FUN_100a07e0(*(undefined4 *)((int)param_1 + 0x4e),0);
  }
  else {
    sVar2 = FUN_100b4300(*(int *)((int)param_1 + 0x4e));
    if (sVar2 == 0) goto LAB_100a90ab;
  }
  if (*(int *)((int)param_1 + 0x118b) != 0) {
    FUN_100a8ac0();
    piVar3 = (int *)((int)param_1 + 0x217);
    iVar4 = 0x10;
    do {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && (iVar1 != DAT_101e0498)) {
        FUN_100b3560(iVar1);
        *piVar3 = 0;
        if (piVar3[0x3bd] != 0) {
          piVar3[0x3bd] = 0;
        }
      }
      if ((void *)piVar3[0x3ad] != (void *)0x0) {
        _free((void *)piVar3[0x3ad]);
        piVar3[0x3ad] = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (DAT_101e0494 == param_1) {
      DAT_101e0494 = (undefined4 *)0x0;
      DAT_101e0490 = 0;
    }
  }
LAB_100a9135:
  *param_1 = &PTR_LAB_1011e30c;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100a9020 */
