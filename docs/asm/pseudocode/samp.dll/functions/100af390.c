/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af390
 * Name: FUN_100af390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100af390(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x2a4) != 0) &&
      (iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44)), iVar1 != 0)) &&
     (iVar1 = FUN_100b3a20(param_2), iVar1 != -1)) {
    iVar2 = FUN_100a07b0(iVar1);
    if (iVar2 == 0) {
      FUN_100a0780(iVar1,2);
      FUN_100a07a0();
      iVar2 = FUN_100a07b0(iVar1);
      while (iVar2 == 0) {
        Sleep(1);
        iVar2 = FUN_100a07b0(iVar1);
      }
    }
    *DAT_10151960 = *(undefined1 *)(param_1 + 0x2b0);
    FUN_1009c5b0();
    FUN_1009c7a0(*(undefined1 *)(param_1 + 0x2b0));
    (*(code *)0x5e6080)(param_2,param_3,1);
    FUN_1009c640();
    FUN_100abc80(param_2,0);
    *DAT_10151960 = 0;
  }
  return;
}


/* END FUNCTION 0x100af390 */
