/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a860
 * Name: FUN_0042a860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0042a860(void *this,uint param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  uint local_10;
  byte local_c [4];
  int local_8;
  int local_4;
  
  puVar1 = (undefined4 *)FUN_0040c740((int)in_EAX);
  if ((puVar1 != in_EAX) &&
     (in_EAX != (undefined4 *)(DAT_004ca204 / (int)(uint)*(ushort *)((int)this + 0x16) + 1))) {
    iVar2 = FUN_00408f80();
    if (iVar2 == 0) {
      return 0x65;
    }
    uVar3 = FUN_00427530(local_c,&local_4);
    if (uVar3 != 0) {
      return uVar3;
    }
    if (local_c[0] == 1) {
      uVar3 = FUN_0041d790();
      return uVar3;
    }
    if (local_c[0] == 2) {
      if (param_1 != 0) {
        return 0;
      }
      uVar3 = FUN_00428700((int)this,(int *)local_c,&local_4,in_EAX,'\x01');
      if (uVar3 != 0) {
        return uVar3;
      }
      FUN_00427610();
      goto LAB_0042a9e1;
    }
    uVar3 = FUN_004238d0(in_EAX,&local_14);
    if (uVar3 != 0) {
      return uVar3;
    }
    do {
      uVar3 = FUN_00428700((int)this,&local_8,&local_10,(undefined4 *)0x0,'\0');
      if (uVar3 != 0) {
        FUN_00427610();
        return uVar3;
      }
      FUN_00427610();
    } while ((param_1 != 0) && (param_1 < local_10));
    uVar3 = FUN_00423650(*(int *)(local_14 + 0x44));
    if (uVar3 == 0) {
      uVar3 = FUN_00428060(local_4,(uint)(param_1 != 0),this,local_c[0],(void *)local_4,local_10);
    }
    FUN_00427610();
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  if (param_1 != 0) {
    return 0;
  }
LAB_0042a9e1:
  do {
    do {
      in_EAX = (undefined4 *)((int)in_EAX + -1);
      if ((in_EAX != (undefined4 *)(DAT_004ca204 / (int)(uint)*(ushort *)((int)this + 0x16) + 1)) &&
         (puVar1 = (undefined4 *)FUN_0040c740((int)in_EAX), puVar1 != in_EAX)) {
        FUN_0040b710(*(int *)this);
        *(undefined4 **)((int)this + 0x28) = in_EAX;
        return 0;
      }
      puVar1 = (undefined4 *)FUN_0040c740((int)in_EAX);
    } while (puVar1 != in_EAX);
    uVar3 = FUN_004238d0(in_EAX,&local_4);
    if (uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_00423650(*(int *)(local_4 + 0x44));
    FUN_00427610();
  } while (uVar3 == 0);
  return uVar3;
}


/* END FUNCTION 0x0042a860 */
