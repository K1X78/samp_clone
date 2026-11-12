/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453430
 * Name: FUN_00453430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_00453430(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined2 param_7,undefined4 param_8)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if ((((param_1 != (undefined4 *)0x0) && (-1 < param_2)) &&
      (in_EAX = *(uint *)((int)this + 0x33c), in_EAX != 0)) && (*(char *)((int)this + 4) != '\x01'))
  {
    cVar3 = (char)param_8;
    if (cVar3 == '\0') {
      in_EAX = FUN_0044eec0(&param_6,&DAT_004cac3c);
      if ((char)in_EAX != '\0') goto LAB_0045352a;
      if (*(int *)((int)this + 0xc28) != 0) {
        iVar1 = (**(code **)(*(int *)this + 0x5c))(param_6,param_7);
        if (iVar1 == -1) {
          uVar2 = (**(code **)**(undefined4 **)((int)this + 0xc28))
                            (param_1,param_2 * 8,param_3,param_4,param_5,param_6,param_7);
          return uVar2;
        }
      }
    }
    uVar2 = FUN_00452170(this,param_1,param_2 * 8,param_3,param_4,(char)param_5,param_6,param_7,
                         cVar3,0);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
LAB_0045352a:
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x00453430 */
