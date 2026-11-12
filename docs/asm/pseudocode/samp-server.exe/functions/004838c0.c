/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004838c0
 * Name: FUN_004838c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004838c0(void *this,ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  float local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_004fc438[3] != 0) {
    cVar1 = *(char *)((int)this + 0x2f95);
    puVar6 = param_1;
    puVar7 = (ushort *)((int)this + 0x117);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    }
    *puVar7 = *puVar6;
    if ((((cVar1 == '\x02') && (uVar2 = *param_1, *(ushort *)((int)this + 0x60) == uVar2)) &&
        (uVar2 < 2000)) &&
       (pvVar3 = *(void **)(DAT_004fc438[3] + 0x3f54 + (uint)uVar2 * 4), pvVar3 != (void *)0x0)) {
      FUN_0048f120((float *)((int)this + 0x2f),local_40);
      local_10 = *(undefined4 *)((int)this + 0x119);
      local_c = *(undefined4 *)((int)this + 0x11d);
      local_8 = *(undefined4 *)((int)this + 0x121);
      FUN_00489560(pvVar3,*(ushort *)((int)this + 0x2d53),local_40,0x447a0000,0xffff,'\x01');
      *(undefined4 *)((int)pvVar3 + 0x4c) = *(undefined4 *)((int)this + 0x135);
      *(undefined4 *)((int)pvVar3 + 0x50) = *(undefined4 *)((int)this + 0x139);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)((int)this + 0x13d);
      pvVar3 = (void *)*DAT_004fc438;
      if ((((void *)DAT_004fc438[1] != (void *)0x0) && (pvVar3 != (void *)0x0)) &&
         ((uVar4 = FUN_0046cf80((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53),
                                (uint)*param_1), uVar4 != 0 &&
          (uVar4 = FUN_0046f760(pvVar3,(uint)*(ushort *)((int)this + 0x2d53),(uint)*param_1),
          uVar4 != 0)))) {
        *(undefined4 *)((int)this + 0x2f8d) = 1;
      }
    }
  }
  return;
}


/* END FUNCTION 0x004838c0 */
