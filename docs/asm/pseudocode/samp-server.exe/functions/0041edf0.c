/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041edf0
 * Name: FUN_0041edf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x0041f013) */

int __cdecl FUN_0041edf0(uint param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint local_54;
  int local_50;
  int local_48;
  uint local_40;
  int local_3c;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  local_48 = 0;
  iVar2 = FUN_0041ed20();
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar6 = *(uint *)(in_EAX + 0x30);
  if (uVar6 == 0) {
    FUN_00408fa0(local_20);
    FUN_00408fa0(local_1c);
    FUN_00408fa0(local_18);
    FUN_00408fa0(local_14);
    FUN_00412de0(8,(undefined1 *)(in_EAX + 0x40));
    local_10 = *(undefined4 *)(in_EAX + 0x40);
    local_c = *(undefined4 *)(in_EAX + 0x44);
    FUN_0040baa0((int *)0x0,0x18,1,(int *)&local_40);
    uVar5 = local_40;
    FUN_00408fa0(local_8);
    uVar3 = FUN_00408fa0(local_4);
    *(undefined4 *)(in_EAX + 0x3c) = uVar3;
    *(short *)(in_EAX + 0x18) = (short)param_1;
    *(undefined1 *)(in_EAX + 0x2d) = 0;
    *(uint *)(in_EAX + 0x38) = uVar5;
    iVar2 = FUN_00407af0();
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_2 != 0) {
    local_40 = param_1 + 0x18;
    local_3c = (int)local_40 >> 0x1f;
    uVar5 = uVar6;
    iVar2 = param_2;
    do {
      uVar6 = uVar5 + 1;
      __allmul(uVar5,0,local_40,local_3c);
      FUN_0040bbb0();
      iVar4 = FUN_00407af0();
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_00407af0();
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar2 = *(int *)(iVar2 + 8);
      uVar5 = uVar6;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (param_5 != 0) {
    uVar5 = FUN_00407b90(*(int **)(in_EAX + 8));
    lVar7 = __allmul(param_1 + 0x18,(int)(param_1 + 0x18) >> 0x1f,uVar6,0);
    lVar7 = lVar7 + 0x20;
    iVar2 = (int)(lVar7 + (int)uVar5);
    uVar8 = __alldiv(iVar2 - 1,(int)((ulonglong)(lVar7 + (int)uVar5) >> 0x20) - (uint)(iVar2 == 0),
                     uVar5,(int)uVar5 >> 0x1f);
    lVar9 = __allmul((uint)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar5,(int)uVar5 >> 0x1f);
    if (lVar7 < lVar9) {
      do {
        FUN_0040bbb0();
        iVar2 = FUN_00407af0();
        if (iVar2 != 0) {
          return iVar2;
        }
        lVar1 = lVar7 + 0x18;
        iVar2 = FUN_00407af0();
        if (iVar2 != 0) {
          return iVar2;
        }
        local_48 = local_48 + 1;
        uVar6 = (uint)lVar1 + param_1;
        local_50 = (int)((ulonglong)lVar9 >> 0x20);
        iVar2 = (int)((ulonglong)lVar1 >> 0x20) + ((int)param_1 >> 0x1f) +
                (uint)CARRY4((uint)lVar1,param_1);
        lVar7 = CONCAT44(iVar2,uVar6);
      } while ((iVar2 < local_50) ||
              ((iVar2 <= local_50 &&
               (local_54 = (uint)lVar9, lVar7 = lVar1 + (int)param_1, uVar6 < local_54))));
    }
    iVar2 = FUN_00407b30();
  }
  iVar4 = *(int *)(in_EAX + 0x30);
  while ((param_2 != 0 && (iVar2 == 0))) {
    iVar4 = iVar4 + 1;
    iVar2 = FUN_0041e270();
    param_2 = *(int *)(param_2 + 8);
  }
  while( true ) {
    if (local_48 < 1) {
      if (iVar2 == 0) {
        *(short *)(in_EAX + 0x2e) = (short)param_1;
        *(int *)(in_EAX + 0x30) = iVar4;
        if (param_4 != 0) {
          *(int *)(in_EAX + 0x28) = *(int *)(in_EAX + 0x28) + 1;
          *(undefined4 *)(in_EAX + 0x34) = param_3;
          FUN_0040bb50();
          *(int *)(in_EAX + 0xc) = iVar4;
        }
      }
      return iVar2;
    }
    if (iVar2 != 0) break;
    iVar4 = iVar4 + 1;
    local_48 = local_48 + -1;
    iVar2 = FUN_0041e270();
  }
  return iVar2;
}


/* END FUNCTION 0x0041edf0 */
