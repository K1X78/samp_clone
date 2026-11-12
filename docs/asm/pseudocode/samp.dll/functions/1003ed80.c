/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ed80
 * Name: FUN_1003ed80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_1003ed80(int param_1,undefined4 param_2,undefined2 param_3,char param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined3 uVar3;
  int iVar2;
  uint uVar4;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  iVar1 = FUN_100331a0(&DAT_1013c7cc);
  if (((char)iVar1 == '\0') && (iVar1 = 0, *(int *)(param_1 + 0x334) != 0)) {
    uVar3 = (undefined3)((uint)*(int *)(param_1 + 0x334) >> 8);
    iVar1 = CONCAT31(uVar3,*(char *)(param_1 + 4));
    if (*(char *)(param_1 + 4) != '\x01') {
      if (param_4 != '\0') {
        iVar1 = FUN_1003e3b0(param_2,CONCAT22(uVar5,param_3),param_5,param_6);
        return iVar1;
      }
      iVar1 = CONCAT31(uVar3,(char)param_5);
      if ((char)param_5 == '\0') {
        iVar1 = FUN_10038f00();
        *(undefined4 *)(iVar1 + 0x25) = 1;
        *(undefined4 *)(iVar1 + 0xd) = param_2;
        *(undefined2 *)(iVar1 + 0x11) = param_3;
        *(undefined1 *)(iVar1 + 0xc) = (undefined1)param_6;
        *(undefined4 *)(iVar1 + 0x21) = 0;
        iVar1 = FUN_10038f40();
      }
      else {
        uVar4 = 0;
        if (*(short *)(param_1 + 7) != 0) {
          iVar1 = 0;
          do {
            iVar2 = iVar1 + *(int *)(param_1 + 0x334);
            if (*(char *)(iVar1 + *(int *)(param_1 + 0x334)) != '\0') {
              iVar2 = FUN_100331a0(&param_2);
              if ((char)iVar2 != '\0') {
                *(undefined1 *)(uVar4 * 0xc69 + *(int *)(param_1 + 0x334)) = 0;
                uVar4 = 0;
                if (*(int *)(param_1 + 0x3b1) != 0) {
                  do {
                    (**(code **)(**(int **)(*(int *)(param_1 + 0x3ad) + uVar4 * 4) + 0x18))
                              (param_1,param_2,param_3);
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < *(uint *)(param_1 + 0x3b1));
                }
                FUN_10049db0(0);
                iVar1 = FUN_1003c820(&param_2);
                return iVar1;
              }
            }
            uVar4 = uVar4 + 1;
            iVar1 = iVar1 + 0xc69;
          } while (uVar4 < *(ushort *)(param_1 + 7));
          return iVar2;
        }
      }
    }
  }
  return iVar1;
}


/* END FUNCTION 0x1003ed80 */
