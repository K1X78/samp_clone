/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f320
 * Name: FUN_1002f320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1002f320(int param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  FUN_10026f90();
  iVar5 = FUN_10027060();
  if (iVar5 == 0) {
    return 0;
  }
  do {
    uVar1 = *(uint *)(iVar5 + 1);
    uVar6 = 0;
    if (uVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x8c);
      puVar7 = (undefined4 *)(iVar5 + 0x45);
      do {
        uVar3 = *puVar7;
        cVar4 = FUN_1002f020(uVar3,param_2,param_3,uVar2);
        if (cVar4 != '\0') {
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = *(undefined4 *)(iVar5 + 5 + uVar6 * 4);
          }
          return uVar3;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar1);
    }
    iVar5 = *(int *)(iVar5 + 0x85);
  } while (iVar5 != 0);
  return 0;
}


/* END FUNCTION 0x1002f320 */
