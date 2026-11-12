/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8120
 * Name: FUN_100a8120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100a8120(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_3 < 0x11) && ((iVar4 = 0, param_2 < 1 || (iVar2 = FUN_100b4170(param_2), iVar2 != 0))))
  {
    iVar2 = *(int *)(param_1 + 0x217 + param_3 * 4);
    if (iVar2 != 0) {
      FUN_100b3560(iVar2);
      *(undefined4 *)(param_1 + 0x217 + param_3 * 4) = 0;
      if (*(int *)(param_1 + 0x110b + param_3 * 4) != 0) {
        *(undefined4 *)(param_1 + 0x110b + param_3 * 4) = 0;
      }
    }
    if (param_2 < 1) {
      if (param_2 == 0) {
        if (DAT_101e0498 == 0) {
          FUN_100b2790("blanktex","blanktex",1);
          DAT_101e0498 = FUN_100b2860("blanktex","blanktex");
        }
        *(int *)(param_1 + 0x217 + param_3 * 4) = DAT_101e0498;
      }
    }
    else {
      iVar2 = FUN_100a07b0(param_2);
      if (iVar2 == 0) {
        FUN_100a0780(param_2,2);
        FUN_100a07a0();
        iVar2 = FUN_100a07b0(param_2);
        while (iVar2 == 0) {
          iVar4 = iVar4 + 1;
          if (0xfa < iVar4) {
            *(undefined4 *)(param_1 + 0x217 + param_3 * 4) = 0;
            goto LAB_100a81fa;
          }
          Sleep(2);
          iVar2 = FUN_100a07b0(param_2);
        }
      }
      uVar3 = FUN_100b2860(param_4,param_5);
      *(undefined4 *)(param_1 + 0x217 + param_3 * 4) = uVar3;
LAB_100a81fa:
      sVar1 = FUN_100b4300(param_2);
      if ((sVar1 == 0) && (iVar4 = FUN_100a07b0(param_2), iVar4 != 0)) {
        FUN_100a07e0(param_2,0);
      }
    }
    *(undefined4 *)(param_1 + 599 + param_3 * 4) = param_6;
    *(undefined4 *)(param_1 + 0x2db + param_3 * 4) = 1;
    *(undefined4 *)(param_1 + 0x118b) = 1;
  }
  return;
}


/* END FUNCTION 0x100a8120 */
