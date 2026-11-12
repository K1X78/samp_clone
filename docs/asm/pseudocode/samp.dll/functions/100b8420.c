/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b8420
 * Name: FUN_100b8420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b8420(undefined4 *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10116778;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_1011f82c;
  local_8 = 0;
  iVar3 = FUN_100b37d0(param_1[0x11]);
  param_1[0x13] = iVar3;
  if (iVar3 != 0) {
    if (param_1[0x2d] != 0) {
      FUN_100b1f10(&DAT_1011f63c,param_1[0x2d]);
      param_1[0x2d] = 0;
    }
    FUN_100b7a20();
    if (param_1[0x12] != 0) {
      FUN_100b7770();
      param_1[0x12] = 0;
    }
    piVar1 = *(int **)((int)param_1 + 0x8f);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)param_1 + 0x8f) = 0;
    }
    sVar2 = *(short *)(param_1[0x13] + 0x22);
    if ((sVar2 == 0x21a) || (sVar2 == 0x219)) {
      FUN_100b1f10(&DAT_1011f6dc,param_1[0x11]);
    }
    else {
      iVar3 = (int)sVar2;
      FUN_100b1f10(&DAT_1011f600,param_1[0x11]);
      sVar2 = FUN_100b4300(iVar3);
      if ((sVar2 == 0) && (*(int *)((int)param_1 + 0x87) == 0)) {
        iVar4 = FUN_100a1410();
        if (0x50 < iVar4) {
          iVar4 = FUN_100a07b0(iVar3);
          if (iVar4 != 0) {
            (*(code *)0x4089a0)(iVar3);
          }
        }
      }
    }
  }
  *param_1 = &PTR_LAB_1011e30c;
  ExceptionList = local_10;
  return;
}


/* END FUNCTION 0x100b8420 */
