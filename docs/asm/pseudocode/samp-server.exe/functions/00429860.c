/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429860
 * Name: FUN_00429860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_00429860(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *this;
  int iVar4;
  int local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar1 = *(uint **)(param_1 + 4);
  if ((char)puVar1[5] == '\0') {
    puVar2 = (undefined4 *)FUN_00428700((int)puVar1,&local_c,&local_8,(undefined4 *)0x1,'\0');
    this = local_8;
    iVar4 = local_c;
    if (puVar2 != (undefined4 *)0x0) {
      return puVar2;
    }
  }
  else {
    FUN_0040c670();
    FUN_0040cff0(4,&local_8);
    iVar4 = DAT_004ca204;
    this = local_8;
    do {
      do {
        this = (undefined4 *)((int)this + 1);
        puVar2 = (undefined4 *)FUN_0040c740((int)this);
      } while (this == puVar2);
    } while (this == (undefined4 *)(iVar4 / (int)(uint)*(ushort *)((int)puVar1 + 0x16) + 1));
    puVar3 = (undefined4 *)FUN_00428700((int)puVar1,&local_c,&local_4,this,'\x01');
    puVar2 = local_4;
    if (puVar3 != (undefined4 *)0x0) {
      return puVar3;
    }
    if (local_4 == this) {
      local_8 = (undefined4 *)0x0;
      iVar4 = local_c;
    }
    else {
      local_8 = (undefined4 *)0x0;
      local_4 = puVar3;
      FUN_00427610();
      puVar3 = (undefined4 *)FUN_004238d0(this,&local_c);
      if (puVar3 != (undefined4 *)0x0) {
        return puVar3;
      }
      puVar3 = (undefined4 *)FUN_00427530((byte *)&local_8,&local_4);
      if (((char)local_8 == '\x01') || ((char)local_8 == '\x02')) {
        puVar3 = (undefined4 *)FUN_0041d790();
      }
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00427610();
        return puVar3;
      }
      puVar2 = (undefined4 *)FUN_00428060(local_4,0,puVar1,(char)local_8,local_4,(int)puVar2);
      FUN_00427610();
      if (puVar2 != (undefined4 *)0x0) {
        return puVar2;
      }
      puVar2 = (undefined4 *)FUN_004238d0(this,&local_c);
      if (puVar2 != (undefined4 *)0x0) {
        return puVar2;
      }
      puVar2 = (undefined4 *)FUN_00423650(*(int *)(local_c + 0x44));
      iVar4 = local_c;
      local_8 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00427610();
        return puVar2;
      }
    }
    FUN_00427460('\x01',0);
    puVar2 = local_8;
    if ((local_8 != (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)FUN_00423a20(4), puVar2 != (undefined4 *)0x0)) {
      FUN_00427610();
      return puVar2;
    }
  }
  FUN_0041f920(param_3 | 8);
  FUN_00427080(*(int *)(iVar4 + 0x44));
  *param_2 = (uint)this;
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x00429860 */
