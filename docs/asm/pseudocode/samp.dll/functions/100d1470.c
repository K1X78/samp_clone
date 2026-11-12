/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1470
 * Name: FUN_100d1470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d1470(int param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EBX;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = &PTR_DAT_10126f20;
  ppuVar3 = &PTR_PTR_10124298;
  do {
    iVar1 = FUN_100de830(*ppuVar2,param_2);
    if (iVar1 != 0) {
      if (((*(uint *)(unaff_EBX + 0x68c) & (uint)ppuVar2[0x10]) != 0) &&
         ((*(int *)(unaff_EBX + 0x4868) == 0 ||
          ((*(uint *)(unaff_EBX + 0x690) & (uint)ppuVar2[0x10]) != 0)))) {
        *(undefined ***)(param_1 + 0x324) = ppuVar2;
        *(undefined ***)(param_1 + 800) = ppuVar2;
        return 0;
      }
      break;
    }
    ppuVar2 = (undefined **)ppuVar3[1];
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar2 != (undefined **)0x0);
  FUN_100d8ba0();
  return 1;
}


/* END FUNCTION 0x100d1470 */
