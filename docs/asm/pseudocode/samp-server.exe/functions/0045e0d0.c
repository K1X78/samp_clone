/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045e0d0
 * Name: FUN_0045e0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045e0d0(void *this,ushort param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  short *psVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  ushort uStack00000006;
  undefined1 local_5;
  ushort local_4;
  ushort local_2;
  
  iVar2 = FUN_0045b300((int)this);
  if (iVar2 == 0) {
    local_4 = param_1;
    local_2 = param_1;
    FUN_0045d7a0(this,&param_1,(undefined4 *)&local_4);
    return;
  }
  uVar3 = FUN_0045c790(this,&param_1,&local_5);
  uVar4 = FUN_0045b300((int)this);
  uVar1 = param_1;
  if (uVar3 == uVar4) {
    iVar9 = uVar3 - 1;
    uVar3 = (uint)param_1;
    iVar2 = FUN_0045b2f0(this,iVar9);
    if (uVar3 == *(ushort *)(iVar2 + 2) + 1) {
      iVar2 = FUN_0045b2f0(this,iVar9);
      *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + 1;
      return;
    }
    iVar2 = FUN_0045b2f0(this,iVar9);
    if (*(ushort *)(iVar2 + 2) + 1 < uVar3) {
      local_4 = uVar1;
      local_2 = uVar1;
      FUN_0045d7a0(this,&param_1,(undefined4 *)&local_4);
      return;
    }
  }
  else {
    puVar5 = (ushort *)FUN_0045b2f0(this,uVar3);
    uVar1 = param_1;
    uVar4 = (uint)param_1;
    if ((int)uVar4 < (int)(*puVar5 - 1)) {
      uStack00000006 = param_1;
      FUN_0045d810(this,(undefined4 *)&param_1,uVar3);
      return;
    }
    puVar5 = (ushort *)FUN_0045b2f0(this,uVar3);
    if (uVar4 == *puVar5 - 1) {
      psVar6 = (short *)FUN_0045b2f0(this,uVar3);
      *psVar6 = *psVar6 + -1;
      if (uVar3 != 0) {
        puVar5 = (ushort *)FUN_0045b2f0(this,uVar3);
        iVar2 = FUN_0045b2f0(this,uVar3 - 1);
        if (*(ushort *)(iVar2 + 2) + 1 == (uint)*puVar5) {
          iVar2 = FUN_0045b2f0(this,uVar3);
          iVar9 = FUN_0045b2f0(this,uVar3 - 1);
          *(undefined2 *)(iVar9 + 2) = *(undefined2 *)(iVar2 + 2);
          thunk_FUN_0045c920(this,uVar3);
          return;
        }
      }
    }
    else {
      puVar5 = (ushort *)FUN_0045b2f0(this,uVar3);
      if ((*puVar5 <= uVar1) && (iVar2 = FUN_0045b2f0(this,uVar3), uVar1 <= *(ushort *)(iVar2 + 2)))
      {
        return;
      }
      iVar2 = FUN_0045b2f0(this,uVar3);
      if (uVar4 == *(ushort *)(iVar2 + 2) + 1) {
        iVar2 = FUN_0045b2f0(this,uVar3);
        *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + 1;
        iVar2 = FUN_0045b300((int)this);
        if (uVar3 < iVar2 - 1U) {
          puVar5 = (ushort *)FUN_0045b2f0(this,uVar3 + 1);
          iVar2 = FUN_0045b2f0(this,uVar3);
          if ((uint)*puVar5 == *(ushort *)(iVar2 + 2) + 1) {
            puVar7 = (undefined2 *)FUN_0045b2f0(this,uVar3);
            puVar8 = (undefined2 *)FUN_0045b2f0(this,uVar3 + 1);
            *puVar8 = *puVar7;
            thunk_FUN_0045c920(this,uVar3);
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x0045e0d0 */
