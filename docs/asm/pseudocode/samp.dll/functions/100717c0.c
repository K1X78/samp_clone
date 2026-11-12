/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100717c0
 * Name: FUN_100717c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100717c0(int param_1)

{
  undefined1 *puVar1;
  float10 fVar2;
  float unaff_retaddr;
  undefined4 *puStack_60;
  int **ppiStack_5c;
  int **ppiStack_58;
  undefined4 **ppuStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_28;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  int aiStack_18 [2];
  int aiStack_10 [3];
  undefined1 *puStack_4;
  
  if (*(int *)(param_1 + 0x107) == 0) {
    return 0;
  }
  piStack_38 = *(int **)(param_1 + 0x107);
  uStack_34 = 1;
  piStack_3c = (int *)0x100717e8;
  (**(code **)(*piStack_38 + 0x34))();
  puVar1 = puStack_4;
  piStack_3c = (int *)&stack0xffffffd0;
  puStack_44 = auStack_24;
  puStack_40 = puStack_4;
  puStack_28 = (undefined4 *)0x0;
  puStack_48 = (undefined4 *)0x10071814;
  FUN_100b4850();
  piStack_3c = aiStack_18;
  puStack_40 = auStack_24;
  puStack_44 = (undefined1 *)0x10071828;
  fVar2 = (float10)FUN_100716c0();
  if (fVar2 <= (float10)1.0) {
    piStack_3c = (int *)&stack0xffffffd0;
    puStack_44 = auStack_24;
    puStack_40 = puStack_4;
    puStack_48 = (undefined4 *)0x1007185d;
    puStack_4 = (undefined1 *)-unaff_retaddr;
    FUN_100b4850();
    piStack_3c = aiStack_10;
    puStack_40 = auStack_24;
    puStack_44 = (undefined1 *)0x10071871;
    fVar2 = (float10)FUN_100716c0();
    if (fVar2 <= (float10)1.0) {
      piStack_3c = *(int **)(param_1 + 0x107);
      puStack_40 = (undefined1 *)0x1007188a;
      (**(code **)(*piStack_3c + 0x10))();
      piStack_4c = *(int **)(param_1 + 0x107);
      puStack_40 = (undefined1 *)0xffcc9999;
      puStack_44 = (undefined1 *)0x2;
      puStack_48 = &uStack_1c;
      piStack_50 = (int *)0x100718a2;
      (**(code **)(*piStack_4c + 0x14))();
      piStack_50 = *(int **)(param_1 + 0x107);
      ppuStack_54 = (undefined4 **)0x100718ae;
      (**(code **)(*piStack_50 + 0x44))();
      ppuStack_54 = &puStack_48;
      ppiStack_5c = &piStack_3c;
      ppiStack_58 = (int **)puVar1;
      puStack_48 = (undefined4 *)0x0;
      puStack_44 = (undefined1 *)aiStack_18[0];
      puStack_40 = (undefined1 *)0x0;
      puStack_60 = (undefined4 *)0x100718d6;
      FUN_100b4850();
      ppuStack_54 = (undefined4 **)&stack0xffffffd0;
      ppiStack_58 = &piStack_3c;
      ppiStack_5c = (int **)0x100718ea;
      fVar2 = (float10)FUN_100716c0();
      if (fVar2 <= (float10)1.0) {
        ppuStack_54 = &puStack_48;
        ppiStack_5c = &piStack_3c;
        ppiStack_58 = (int **)puVar1;
        puStack_44 = (undefined1 *)uStack_1c;
        puStack_60 = (undefined4 *)0x10071913;
        FUN_100b4850();
        ppuStack_54 = &puStack_28;
        ppiStack_58 = &piStack_3c;
        ppiStack_5c = (int **)0x10071927;
        fVar2 = (float10)FUN_100716c0();
        if (fVar2 <= (float10)1.0) {
          ppuStack_54 = *(undefined4 ***)(param_1 + 0x107);
          ppiStack_58 = (int **)0x10071944;
          (*(code *)(*ppuStack_54)[4])();
          ppiStack_58 = (int **)0xffcc9999;
          ppiStack_5c = (int **)0x2;
          puStack_60 = &uStack_34;
          (**(code **)(**(int **)(param_1 + 0x107) + 0x14))(*(int **)(param_1 + 0x107));
          (**(code **)(**(int **)(param_1 + 0x107) + 0x44))(*(int **)(param_1 + 0x107));
          puStack_60 = (undefined4 *)0x0;
          ppiStack_5c = (int **)0x0;
          ppiStack_58 = (int **)-unaff_retaddr;
          FUN_100b4850(&ppuStack_54,puVar1,&puStack_60);
          fVar2 = (float10)FUN_100716c0(&ppuStack_54,&puStack_48);
          if (fVar2 <= (float10)1.0) {
            ppiStack_58 = (int **)uStack_34;
            FUN_100b4850(&ppuStack_54,puVar1,&puStack_60);
            fVar2 = (float10)FUN_100716c0(&ppuStack_54,&puStack_40);
            if (fVar2 <= (float10)1.0) {
              (**(code **)(**(int **)(param_1 + 0x107) + 0x10))(*(int **)(param_1 + 0x107));
              (**(code **)(**(int **)(param_1 + 0x107) + 0x14))
                        (*(int **)(param_1 + 0x107),&piStack_4c,2,0xffcc9999);
              (**(code **)(**(int **)(param_1 + 0x107) + 0x44))(*(int **)(param_1 + 0x107));
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100717c0 */
