/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100127d0
 * Name: FUN_100127d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_100127d0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0xffff;
  if (*(int *)(param_1 + 0x20d4 + uVar5 * 4) != 0) {
    FUN_10012750(param_2);
  }
  uVar2 = 0;
  uVar3 = 0;
  if ((param_3 < 0) && (DAT_102aca28 != 0)) {
    cVar1 = FUN_1000ccc0(param_3);
    if (cVar1 != '\0') {
      uVar2 = FUN_1000cf00(param_3);
      uVar3 = FUN_1000cf40(param_3);
      cVar1 = FUN_1000cd00(param_3);
      if (cVar1 == '\0') {
        iVar4 = FUN_1000ce90(param_3);
        if (iVar4 == 0) {
          param_3 = 0x48c7;
        }
      }
    }
  }
  iVar4 = FUN_100a0170(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,uVar2,uVar3)
  ;
  *(int *)(param_1 + 0x20d4 + uVar5 * 4) = iVar4;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 4 + uVar5 * 4) = 1;
    FUN_100126a0();
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100127d0 */
