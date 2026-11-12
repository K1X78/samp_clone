/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022d90
 * Name: FUN_10022d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10022d90(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined1 auStack_e [14];
  
  uVar2 = FUN_10022770(param_1,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_10022280((int)param_1 + 6);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_10022280((int)param_2 + 6);
      if ((char)uVar2 != '\0') {
        uVar6 = 0x1002;
        iVar3 = (**(code **)(*param_3 + 0x5c))(*param_1,*(undefined2 *)(param_1 + 1));
        if (iVar3 != -1) {
          uVar5 = CONCAT22(uVar6,*(undefined2 *)(param_2 + 1));
          uVar2 = (**(code **)(*param_3 + 0x5c))(*param_2,uVar5);
          uVar6 = (undefined2)((uint)uVar5 >> 0x10);
          if (uVar2 != 0xffffffff) goto LAB_10022ed7;
        }
        uVar4 = 0x1002;
        (**(code **)(*param_3 + 0xa0))
                  (auStack_e,*param_1,CONCAT22(uVar6,*(undefined2 *)(param_1 + 1)));
        (**(code **)(*param_3 + 0xa0))
                  (&stack0xffffffe6,*param_2,CONCAT22(uVar4,*(undefined2 *)(param_2 + 1)));
        cVar1 = FUN_100331d0(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_100331d0(param_2);
          if (cVar1 != '\0') {
            cVar1 = FUN_100331d0(param_1);
            if (cVar1 != '\0') {
              cVar1 = FUN_100331d0(param_2);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
        return 0;
      }
    }
  }
LAB_10022ed7:
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x10022d90 */
