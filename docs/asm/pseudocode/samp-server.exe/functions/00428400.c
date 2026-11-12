/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428400
 * Name: FUN_00428400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00428400(void *this,void *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_18;
  void *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_c = *(int *)((int)this + 4);
  local_18 = 0;
  local_8 = 0;
  iVar2 = *(int *)((int)this + *(short *)((int)this + 0x5c) * 4 + 0x60);
  local_10 = iVar2;
  FUN_0040ce00();
  if (*(char *)(iVar2 + 2) == '\0') {
    iVar3 = *(int *)((int)this + 0x28);
  }
  else {
    iVar3 = 0;
  }
  if (((uint)(*(int *)((int)this + 0x30) + iVar3) < in_EAX + (int)param_1) ||
     (uVar4 = (uint)*(ushort *)((int)this + 0x3a),
     (uint)*(ushort *)(local_c + 0x18) + *(int *)(iVar2 + 0x40) <
     uVar4 + (uint)*(ushort *)((int)this + 0x38) + *(int *)((int)this + 0x20))) {
    uVar4 = FUN_0041d790();
    return uVar4;
  }
  if (in_EAX < uVar4) {
    pvVar5 = param_1;
    if (uVar4 < in_EAX + (int)param_1) {
      pvVar5 = (void *)(uVar4 - in_EAX);
    }
    local_18 = FUN_004239d0(pvVar5,param_2,*(int *)(local_10 + 0x44));
    param_2 = (undefined4 *)((int)param_2 + (int)pvVar5);
    param_1 = (void *)((int)param_1 - (int)pvVar5);
    uVar4 = 0;
    if (local_18 != 0) {
      return local_18;
    }
  }
  else {
    uVar4 = in_EAX - uVar4;
  }
  if (param_1 != (void *)0x0) {
    uVar1 = *(ushort *)((int)this + 0x3a);
    local_10 = *(ushort *)(local_c + 0x18) - 4;
    local_14 = (void *)FUN_00408f80();
    if ((*(char *)((int)this + 0x54) != '\0') && (*(int *)((int)this + 0x58) == 0)) {
      uVar6 = ((*(int *)((int)this + 0x34) - (uint)uVar1) + -1 + local_10) / local_10;
      puVar7 = FUN_00412900();
      *(undefined4 **)((int)this + 0x58) = puVar7;
      if ((uVar6 != 0) && (puVar7 == (undefined4 *)0x0)) {
        local_18 = 7;
      }
    }
    iVar2 = *(int *)((int)this + 0x58);
    if (iVar2 != 0) {
      uVar6 = uVar4 / local_10;
      if (*(int *)(iVar2 + uVar6 * 4) != 0) {
        local_14 = *(void **)(iVar2 + uVar6 * 4);
        uVar4 = uVar4 % local_10;
        local_8 = uVar6;
      }
    }
    if (local_18 == 0) {
      uVar6 = local_8 << 2;
      do {
        local_8 = uVar6;
        if ((param_1 == (void *)0x0) || (local_14 == (void *)0x0)) {
          if (local_18 != 0) {
            return local_18;
          }
          if (param_1 == (void *)0x0) {
            return 0;
          }
          uVar4 = FUN_0041d790();
          return uVar4;
        }
        if (*(int *)((int)this + 0x58) != 0) {
          *(void **)(*(int *)((int)this + 0x58) + uVar6) = local_14;
        }
        if (uVar4 < local_10) {
          local_18 = FUN_004234f0((uint)local_14,&local_4,0);
          iVar2 = local_4;
          if (local_18 == 0) {
            FUN_0040b9a0();
            local_14 = (void *)FUN_00408f80();
            pvVar5 = param_1;
            if (local_10 < uVar4 + (int)param_1) {
              pvVar5 = (void *)(local_10 - uVar4);
            }
            local_18 = FUN_004239d0(pvVar5,param_2,iVar2);
            FUN_00427080(iVar2);
            param_1 = (void *)((int)param_1 - (int)pvVar5);
            uVar4 = 0;
            param_2 = (undefined4 *)((int)param_2 + (int)pvVar5);
            uVar6 = local_8;
          }
        }
        else if ((*(int *)((int)this + 0x58) == 0) ||
                (pvVar5 = *(void **)(*(int *)((int)this + 0x58) + 4 + uVar6), pvVar5 == (void *)0x0)
                ) {
          local_18 = FUN_00428310(local_14,(int *)0x0,(uint *)&local_14);
          uVar4 = uVar4 - local_10;
        }
        else {
          uVar4 = uVar4 - local_10;
          local_14 = pvVar5;
        }
        uVar6 = uVar6 + 4;
      } while (local_18 == 0);
    }
  }
  return local_18;
}


/* END FUNCTION 0x00428400 */
