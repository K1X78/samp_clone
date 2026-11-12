/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abeb0
 * Name: FUN_100abeb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100abeb0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0x2a4) != 0) && (iVar2 = FUN_100b37d0(param_2), iVar2 != 0)) &&
     (iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44)), iVar2 != 0)) {
    cVar1 = FUN_100ab870();
    if (cVar1 == '.') {
      FUN_100abc80(0,0);
    }
    piVar3 = (int *)FUN_100b37d0(param_2);
    if ((((float)piVar3[0x130] != 0.0) && (*piVar3 != 0x863c40)) &&
       (((iVar2 = FUN_100b5d20(piVar3), iVar2 != 1 && (iVar2 = FUN_100b5d20(piVar3), iVar2 != 2)) ||
        (param_3 <= (int)(uint)*(byte *)(piVar3 + 0x122))))) {
      if (param_3 == 0) {
        if ((piVar3[0x118] != 0) && ((*(uint *)(piVar3[0x118] + 0x46c) & 0x100) != 0)) {
          return;
        }
        FUN_100b1f10(&DAT_1011ef68,*(undefined4 *)(param_1 + 0x44),param_2);
      }
      else {
        FUN_100b1f10(&DAT_1011f06c,*(undefined4 *)(param_1 + 0x44),param_2,param_3 + -1);
      }
      iVar2 = *(int *)(param_1 + 0x2a4);
      iVar4 = FUN_100b3860();
      if ((iVar2 == iVar4) && ((*(uint *)(iVar2 + 0x46c) & 0x100) != 0)) {
        FUN_1009d580();
      }
      if (DAT_102aca24 != 0) {
        uVar5 = FUN_1001e650(piVar3);
        if (((((ushort)uVar5 != 0xffff) && ((ushort)uVar5 < 0x7d1)) &&
            (iVar2 = FUN_10001120(uVar5), iVar2 != 0)) &&
           ((iVar4 = FUN_100b6fa0(), iVar4 != 0 &&
            (iVar4 = FUN_100b3860(), *(int *)(param_1 + 0x2a4) == iVar4)))) {
          FUN_100b1f10(&DAT_1011eedc,*(undefined4 *)(iVar2 + 0x44),3,2);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x100abeb0 */
