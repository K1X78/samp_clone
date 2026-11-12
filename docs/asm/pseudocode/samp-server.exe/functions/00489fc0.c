/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489fc0
 * Name: FUN_00489fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00489fc0(void *this,void *param_1,void *param_2)

{
  ushort uVar1;
  uint3 uVar5;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  byte bVar6;
  ushort uVar7;
  void *local_23c;
  byte local_238 [4];
  undefined4 local_234 [69];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18e6;
  local_c = ExceptionList;
  uVar5 = (uint3)((uint)ExceptionList >> 8);
  if (((ushort)param_2 < 1000) || (0x4a9 < (ushort)param_2)) {
    return (uint)uVar5 << 8;
  }
  bVar6 = (char)param_2 + 0x18;
  if (((&DAT_004bf068)[bVar6] != -1) &&
     ((&DAT_004bf068)[bVar6] != (char)(*(char *)((int)this + 0x82) + 'p'))) {
    return (uint)uVar5 << 8;
  }
  uVar7 = (ushort)param_1;
  ExceptionList = &local_c;
  if (uVar7 != 0xffff) {
    pvVar3 = (void *)DAT_004fc438[1];
    if (((void *)*DAT_004fc438 == (void *)0x0) || (pvVar3 == (void *)0x0)) goto LAB_0048a10a;
    ExceptionList = &local_c;
    local_23c = pvVar3;
    iVar2 = FUN_0046e8b0((void *)*DAT_004fc438,(uint)param_1 & 0xffff,
                         (uint)*(ushort *)((int)this + 100),(uint)param_2 & 0xffff);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_0046bc00(local_23c,(uint)param_1 & 0xffff,(uint)*(ushort *)((int)this + 100),
                             (uint)param_2 & 0xffff), iVar2 == 0)) {
      FUN_0044d8a0(local_120);
      local_23c = (void *)(uint)*(ushort *)((int)this + 100);
      local_4 = 0;
      FUN_0044df40(local_120,(byte *)&local_23c,0x10,'\x01');
      local_23c = param_2;
      FUN_0044df40(local_120,(byte *)&local_23c,0x10,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004bf138,local_120,uVar7,2);
      local_4 = 0xffffffff;
      pvVar3 = (void *)FUN_0044d9b0((int)local_120);
      goto LAB_0048a10a;
    }
  }
  pvVar3 = (void *)0x0;
  if ((&DAT_004befa0)[bVar6] != 8) {
    *(char *)((byte)(&DAT_004befa0)[bVar6] + 0xb7 + (int)this) = (char)param_2 + '\x19';
    FUN_0044d8a0(local_234);
    uVar1 = *(ushort *)((int)this + 100);
    local_4 = 1;
    local_23c = param_1;
    FUN_0044df40(local_234,(byte *)&local_23c,0x10,'\x01');
    local_23c = (void *)0x2;
    FUN_0044df40(local_234,(byte *)&local_23c,0x20,'\x01');
    local_23c = (void *)(uint)uVar1;
    FUN_0044df40(local_234,(byte *)&local_23c,0x20,'\x01');
    local_23c = (void *)((uint)param_2 & 0xffff);
    FUN_0044df40(local_234,(byte *)&local_23c,0x20,'\x01');
    local_238[0] = 0;
    local_238[1] = 0;
    local_238[2] = 0;
    local_238[3] = 0;
    FUN_0044df40(local_234,local_238,0x20,'\x01');
    FUN_00493b20(DAT_004fc438,&DAT_004bef6c,local_234,(uint)*(ushort *)((int)this + 100),uVar7);
    local_4 = 0xffffffff;
    uVar4 = FUN_0044d9b0((int)local_234);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
LAB_0048a10a:
  ExceptionList = local_c;
  return (uint)pvVar3 & 0xffffff00;
}


/* END FUNCTION 0x00489fc0 */
