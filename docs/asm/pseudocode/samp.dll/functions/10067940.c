/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067940
 * Name: FUN_10067940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10067940(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (((((*(int *)(param_1 + 0x63b2) != 0) && (*(int *)(param_1 + 0x63ae) != 0)) &&
       (*(int *)(param_1 + 0x63b6) != 0)) &&
      ((*(int *)(param_1 + 0x63ba) != 0 && (*(int *)(param_1 + 0x63be) != 0)))) &&
     (**(int **)(param_1 + 0x63a2) != 0)) {
    iVar1 = FUN_100a0760();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x63d6) = 0;
      *(undefined4 *)(param_1 + 0x63da) = 1;
      return;
    }
    if ((*(int *)(param_1 + 8) != 0) &&
       ((*(int *)(param_1 + 0x63da) != 0 ||
        (*(int *)(param_1 + 0x63de) != *(int *)(*(int *)(param_1 + 0x11e) + 0x8e))))) {
      (**(code **)(**(int **)(param_1 + 0x63b6) + 0x14))
                (*(int **)(param_1 + 0x63b6),*(undefined4 *)(param_1 + 0x63be),0);
      (**(code **)(**(int **)(param_1 + 0x63ae) + 0xac))(*(int **)(param_1 + 0x63ae),0,0,3,0,0,0);
      (**(code **)(**(int **)(param_1 + 0x63a6) + 0x20))(*(int **)(param_1 + 0x63a6),0x10);
      (**(code **)(**(int **)(param_1 + 0x63ae) + 0xe4))(*(int **)(param_1 + 0x63ae),0x14,0xe);
      FUN_100673b0();
      (**(code **)(**(int **)(param_1 + 0x63a6) + 0x2c))(*(int **)(param_1 + 0x63a6));
      (**(code **)(**(int **)(param_1 + 0x63b6) + 0x18))(*(int **)(param_1 + 0x63b6),0);
      *(undefined4 *)(param_1 + 0x63da) = 0;
      *(undefined4 *)(param_1 + 0x63d6) = 1;
      DVar2 = GetTickCount();
      *(DWORD *)(param_1 + 0x63d2) = DVar2;
      *(undefined4 *)(param_1 + 0x63de) = *(undefined4 *)(*(int *)(param_1 + 0x11e) + 0x8e);
    }
  }
  return;
}


/* END FUNCTION 0x10067940 */
