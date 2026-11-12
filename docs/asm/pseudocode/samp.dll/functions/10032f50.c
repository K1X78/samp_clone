/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032f50
 * Name: FUN_10032f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10032f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  cVar3 = FUN_10033320(&DAT_1013c720);
  if (cVar3 == '\0') {
    puVar1 = (undefined4 *)(param_1 + 4);
    cVar3 = FUN_10033320(&param_2);
    if (cVar3 == '\0') {
      uVar4 = FUN_100324a0(param_2,param_3,0);
      piVar5 = (int *)FUN_10032860(uVar4);
      puVar2 = (undefined4 *)*piVar5;
      if (puVar2 != (undefined4 *)0x0) {
        uVar4 = FUN_100324a0(*puVar2,puVar2[1],puVar2[2]);
        FUN_10032ec0(uVar4);
      }
      cVar3 = FUN_10033320(&DAT_1013c720);
      if (cVar3 == '\0') {
        uVar4 = FUN_100324a0(*puVar1,*(undefined4 *)(param_1 + 8),param_1);
        FUN_10032ec0(uVar4);
        FUN_10033300(&param_2);
        uVar4 = *(undefined4 *)(param_1 + 8);
        uVar6 = *puVar1;
      }
      else {
        FUN_10033300(&param_2);
        uVar4 = *(undefined4 *)(param_1 + 8);
        uVar6 = *puVar1;
      }
      uVar4 = FUN_100324a0(uVar6,uVar4,param_1);
      FUN_10032ea0(uVar4);
    }
  }
  return;
}


/* END FUNCTION 0x10032f50 */
