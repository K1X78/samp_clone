/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10031150
 * Name: FUN_10031150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10031150(int param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  iVar3 = param_4;
  iVar4 = -1;
  if ((param_4 == 0) || (iVar4 = FUN_10030c70(param_4), iVar4 != -1)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        cVar2 = FUN_100331a0(&param_2);
        if (cVar2 != '\0') {
          if (param_4 == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 6 + uVar5 * 10) = 0xffff;
            return iVar4;
          }
          puVar1 = (uint *)(*(int *)(param_1 + 0x10) + 6 + uVar5 * 10);
          *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
          return iVar4;
        }
        uVar5 = uVar5 + 1;
        iVar3 = param_4;
      } while (uVar5 < *(uint *)(param_1 + 0x14));
    }
    if (iVar3 == 0) {
      uStack_6 = 0xffff;
      uStack_4 = 0;
    }
    else {
      iVar3 = 1 << ((byte)iVar4 & 0x1f);
      uStack_6 = (undefined2)iVar3;
      uStack_4 = (undefined2)((uint)iVar3 >> 0x10);
    }
    FUN_10030d00(param_2,CONCAT22(uStack_6,param_3),uStack_4);
  }
  return iVar4;
}


/* END FUNCTION 0x10031150 */
