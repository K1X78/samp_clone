/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426390
 * Name: FUN_00426390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00426390(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  undefined3 extraout_var_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  if (param_2 < *(int *)(unaff_ESI + 100)) {
    iVar3 = (uint)(param_3 != 1) + param_2;
    if (iVar3 < *(int *)(unaff_ESI + 100)) {
      iVar4 = iVar3 * 0x30;
      iVar5 = iVar3;
      do {
        FUN_0040a000(*(int *)(iVar4 + 0x10 + *(int *)(unaff_ESI + 0x60)));
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x30;
      } while (iVar5 < *(int *)(unaff_ESI + 100));
    }
    *(int *)(unaff_ESI + 100) = iVar3;
    if (param_3 == 1) {
      if ((iVar3 == 0) && (**(int **)(unaff_ESI + 0x40) != 0)) {
        bVar1 = FUN_0040e2a0(*(int **)(unaff_ESI + 0x40));
        if (CONCAT31(extraout_var,bVar1) == 0) {
          *(undefined4 *)(unaff_ESI + 0x30) = 0;
          return 0;
        }
        uVar2 = FUN_00407b10();
        *(undefined4 *)(unaff_ESI + 0x30) = 0;
        return uVar2;
      }
    }
    else {
      bVar1 = FUN_0040b4a0(unaff_ESI);
      if ((CONCAT31(extraout_var_00,bVar1) != 0) || (**(int **)(unaff_ESI + 0x3c) != 0)) {
        if (iVar3 != 0) {
          uVar2 = FUN_00425890((uint *)(*(int *)(unaff_ESI + 0x60) + -0x30 + iVar3 * 0x30));
          return uVar2;
        }
        uVar2 = FUN_00425890((uint *)0x0);
        return uVar2;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00426390 */
