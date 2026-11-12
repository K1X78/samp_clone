/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00458060
 * Name: FUN_00458060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00458060(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined1 *)((int)this + 0x80) = 1;
  uVar3 = FUN_00450ff0((int)param_1,(int)param_2);
  puVar1 = (uint *)((int)this + 0xf4);
  if ((char)uVar3 == '\0') {
    *(uint *)((int)this + 0xc4) = *param_1;
    *(uint *)((int)this + 200) = param_1[1];
    *(uint *)((int)this + 0xcc) = param_1[2];
    *(uint *)((int)this + 0xd0) = param_1[3];
    *puVar1 = *param_2;
    *(uint *)((int)this + 0xf8) = param_2[1];
    *(uint *)((int)this + 0xfc) = param_2[2];
    *(uint *)((int)this + 0x100) = param_2[3];
  }
  else {
    *puVar1 = *param_1;
    *(uint *)((int)this + 0xf8) = param_1[1];
    *(uint *)((int)this + 0xfc) = param_1[2];
    *(uint *)((int)this + 0x100) = param_1[3];
    *(uint *)((int)this + 0xc4) = *param_2;
    *(uint *)((int)this + 200) = param_2[1];
    *(uint *)((int)this + 0xcc) = param_2[2];
    *(uint *)((int)this + 0xd0) = param_2[3];
  }
  puVar4 = (uint *)((int)this + 0xc4);
  local_10 = *puVar4;
  local_c = *(undefined4 *)((int)this + 200);
  local_8 = *(undefined4 *)((int)this + 0xcc);
  local_4 = *(undefined4 *)((int)this + 0xd0);
  FUN_00451030((int)&local_10);
  local_20 = *puVar1;
  local_1c = *(undefined4 *)((int)this + 0xf8);
  local_18 = *(undefined4 *)((int)this + 0xfc);
  local_14 = *(undefined4 *)((int)this + 0x100);
  FUN_00451030((int)&local_20);
  puVar2 = (uint *)((int)this + 0xa4);
  FUN_00452530(&local_10,(int)&local_20,puVar2);
  FUN_00454160(puVar2,this);
  thunk_FUN_00454a20(this,puVar2,(uint *)((int)this + 0x84));
  FUN_00454240(puVar4,puVar1,(uint *)((int)this + 0x124));
  puVar2 = (uint *)((int)this + 0x20);
  FUN_00452530(puVar4,(int)puVar1,puVar2);
  FUN_00457200(puVar2,(uint *)((int)this + 0x40));
  FUN_00453ef0(puVar2,(uint *)((int)this + 0x60));
  FUN_00457610(puVar4,(uint *)((int)this + 0xd4));
  FUN_004544e0(puVar4,(undefined4 *)((int)this + 0xe4));
  FUN_00457610(puVar1,(uint *)((int)this + 0x104));
  FUN_004544e0(puVar1,(undefined4 *)((int)this + 0x114));
  return;
}


/* END FUNCTION 0x00458060 */
