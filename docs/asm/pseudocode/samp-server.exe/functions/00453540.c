/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453540
 * Name: FUN_00453540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_00453540(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined2 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  uVar1 = *param_1 + 7;
  if ((((uVar1 & 0xfffffff8) != 0) && (uVar1 = *(uint *)((int)this + 0x33c), uVar1 != 0)) &&
     (*(char *)((int)this + 4) != '\x01')) {
    cVar4 = (char)param_7;
    if (cVar4 == '\0') {
      uVar1 = FUN_0044eec0(&param_5,&DAT_004cac3c);
      if ((char)uVar1 != '\0') goto LAB_0045362f;
      if (*(int *)((int)this + 0xc28) != 0) {
        iVar2 = (**(code **)(*(int *)this + 0x5c))(param_5,param_6);
        if (iVar2 == -1) {
          uVar3 = (**(code **)**(undefined4 **)((int)this + 0xc28))
                            (param_1[3],*param_1,param_2,param_3,param_4,param_5,param_6);
          return uVar3;
        }
      }
    }
    uVar3 = FUN_00452170(this,(undefined4 *)param_1[3],*param_1,param_2,param_3,(char)param_4,
                         param_5,param_6,cVar4,0);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
LAB_0045362f:
  return uVar1 & 0xffffff00;
}


/* END FUNCTION 0x00453540 */
