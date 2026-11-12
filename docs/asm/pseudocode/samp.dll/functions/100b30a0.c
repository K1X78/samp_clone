/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b30a0
 * Name: FUN_100b30a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b30a0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(int *)(param_1 + 0x987) == 5) && (*(int *)(param_1 + 0x9a3) == -1)) {
    if (DAT_102aca28 != 0) {
      cVar2 = FUN_1000cc80((int)*(short *)(param_1 + 0x9a8));
      if (cVar2 == '\0') {
        cVar2 = FUN_1000ccc0((int)*(short *)(param_1 + 0x9a8));
        if (((cVar2 != '\0') &&
            (cVar2 = FUN_1000cd00((int)*(short *)(param_1 + 0x9a8)), cVar2 == '\0')) &&
           (iVar3 = FUN_1000ce90((int)*(short *)(param_1 + 0x9a8)), iVar3 == 0)) {
          *(undefined2 *)(param_1 + 0x9a8) = 0x48c7;
        }
      }
      else {
        iVar3 = FUN_100b39d0((int)*(short *)(param_1 + 0x9a8));
        if ((iVar3 == 0) && (iVar3 = FUN_1000ce30((int)*(short *)(param_1 + 0x9a8)), iVar3 == 0)) {
          *(undefined2 *)(param_1 + 0x9a8) = 0;
        }
      }
    }
    iVar3 = FUN_100b39d0((int)*(short *)(param_1 + 0x9a8));
    if (iVar3 == 0) {
      sVar1 = *(short *)(param_1 + 0x9a8);
      if ((sVar1 < 400) || (0x263 < sVar1)) {
        if (((sVar1 < 0x141) || (0x175 < sVar1)) && (sVar1 < 0x267)) {
          if (-1 < sVar1) {
            return;
          }
          iVar3 = FUN_100b4170((int)sVar1);
          if (iVar3 == 0) {
            *(undefined2 *)(param_1 + 0x9a8) = 0x48c7;
          }
          uVar6 = *(undefined4 *)(param_1 + 0x9b6);
          uVar5 = *(undefined4 *)(param_1 + 0x97f);
          sVar1 = *(short *)(param_1 + 0x9a8);
        }
        else {
          iVar3 = FUN_100b39b0((int)sVar1);
          if (iVar3 == 0) {
            *(undefined2 *)(param_1 + 0x9a8) = 0x48c7;
          }
          uVar6 = *(undefined4 *)(param_1 + 0x9b6);
          uVar5 = *(undefined4 *)(param_1 + 0x97f);
          sVar1 = *(short *)(param_1 + 0x9a8);
        }
        iVar3 = FUN_1006c3f0((int)sVar1,uVar5,param_1 + 0x9aa,uVar6);
      }
      else {
        iVar3 = FUN_1006be00((int)sVar1,*(undefined4 *)(param_1 + 0x97f),param_1 + 0x9aa,
                             *(undefined4 *)(param_1 + 0x9b6),(int)*(short *)(param_1 + 0x9ba),
                             (int)*(short *)(param_1 + 0x9bc));
      }
    }
    else {
      iVar3 = FUN_100b39b0((int)*(short *)(param_1 + 0x9a8));
      if (iVar3 == 0) {
        *(undefined2 *)(param_1 + 0x9a8) = 0;
      }
      iVar3 = FUN_1006bb80((int)*(short *)(param_1 + 0x9a8),*(undefined4 *)(param_1 + 0x97f),
                           param_1 + 0x9aa,*(undefined4 *)(param_1 + 0x9b6));
    }
    if (iVar3 != 0) {
      uVar4 = FUN_100b2720();
      *(int *)(param_1 + 0x9a3) = (int)uVar4;
      (&DAT_102a9400)[(int)uVar4] = (int)((ulonglong)uVar4 >> 0x20);
    }
  }
  return;
}


/* END FUNCTION 0x100b30a0 */
