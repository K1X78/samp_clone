/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db1d0
 * Name: FUN_100db1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100db1d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *_Base;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  size_t local_8;
  
  puVar5 = (undefined4 *)0x0;
  uVar2 = FID_conflict___time32(0);
  piVar7 = param_1;
  local_8 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return (undefined4 *)0x0;
  }
  FUN_100d9ef0(param_1);
  iVar3 = FUN_100e0e40(2,param_2,&param_1);
  piVar7 = (int *)*piVar7;
  puVar6 = puVar5;
  if (piVar7 != (int *)0x0) {
    do {
      iVar4 = piVar7[7];
      puVar5 = puVar6;
      if ((((piVar7[6] == 0 && iVar4 == 0) ||
           (((int)uVar2 >> 0x1f <= iVar4 &&
            (((int)uVar2 >> 0x1f < iVar4 || (uVar2 < (uint)piVar7[6])))))) &&
          ((piVar7[0xc] == 0 || (param_4 != 0)))) &&
         ((((piVar7[5] == 0 ||
            (((piVar7[9] != 0 && (iVar3 == 0)) && (iVar4 = FUN_100d9ce0(piVar7[5]), iVar4 != 0))))
           || (((piVar7[9] == 0 || (iVar3 != 0)) &&
               (iVar4 = FUN_100de830(param_2,piVar7[5]), iVar4 != 0)))) &&
          ((piVar7[4] == 0 || (iVar4 = FUN_100d9d50(piVar7[4],param_3), iVar4 != 0)))))) {
        puVar5 = (undefined4 *)FUN_100dabb0();
        if (puVar5 == (undefined4 *)0x0) goto LAB_100db2f8;
        *puVar5 = puVar6;
        local_8 = local_8 + 1;
      }
      piVar7 = (int *)*piVar7;
      puVar6 = puVar5;
    } while (piVar7 != (int *)0x0);
    if (local_8 != 0) {
      _Base = (undefined4 *)(*(code *)PTR__malloc_101554b8)(local_8 * 4);
      puVar1 = _Base;
      if (_Base == (undefined4 *)0x0) {
LAB_100db2f8:
        FUN_100dacd0(puVar6);
        return (undefined4 *)0x0;
      }
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        *puVar1 = puVar5;
        puVar1 = puVar1 + 1;
      }
      _qsort(_Base,local_8,4,(_PtFuncCompare *)&LAB_100daac0);
      puVar5 = (undefined4 *)*_Base;
      uVar2 = 0;
      if (local_8 != 1) {
        do {
          puVar6 = _Base + uVar2;
          iVar3 = uVar2 + 1;
          uVar2 = uVar2 + 1;
          *(undefined4 *)*puVar6 = _Base[iVar3];
        } while (uVar2 < local_8 - 1);
      }
      *(undefined4 *)_Base[local_8 - 1] = 0;
      (*(code *)PTR__free_101554bc)(_Base);
    }
  }
  return puVar5;
}


/* END FUNCTION 0x100db1d0 */
