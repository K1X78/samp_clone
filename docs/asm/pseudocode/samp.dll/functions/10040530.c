/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040530
 * Name: FUN_10040530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10040530(int param_1,int param_2,undefined4 param_3,undefined2 param_4,char *param_5,int param_6
            )

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  undefined2 uVar6;
  
  uVar6 = 0x1004;
  cVar1 = FUN_10038990();
  if (cVar1 == '\0') {
    param_6 = CONCAT31(param_6._1_3_,0x1f);
    uVar2 = FUN_1002e2b0();
    FUN_1003c410(&param_6,8,0,8,0,param_3,param_4,0,0,uVar2,0);
    *(undefined4 *)(param_2 + 0xc62) = 2;
    return;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x333);
  if (uVar3 == param_6 - 1U) {
    bVar5 = true;
    pcVar4 = (char *)(param_1 + 0x233);
    do {
      param_5 = param_5 + 1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar5 = *param_5 == *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_2 + 0xc62) = 5;
      if (*(char *)(param_1 + 0xd80) == '\0') {
        FUN_1003e230(param_2,0,0);
        return;
      }
      FUN_1003e9a0(param_3,CONCAT22(uVar6,param_4));
      return;
    }
  }
  param_6 = CONCAT31(param_6._1_3_,0x25);
  uVar2 = FUN_1002e2b0();
  FUN_1003c410(&param_6,8,0,8,0,param_3,param_4,0,0,uVar2,0);
  *(undefined4 *)(param_2 + 0xc62) = 2;
  return;
}


/* END FUNCTION 0x10040530 */
