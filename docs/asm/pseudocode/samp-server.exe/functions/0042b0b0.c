/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042b0b0
 * Name: FUN_0042b0b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_0042b0b0(void *param_1,int *param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  byte *pbVar7;
  uint local_18;
  int local_10;
  uint local_8;
  int local_4;
  
  if (((*(char *)((int)param_1 + 0x43) == '\x01') && (*(char *)((int)param_1 + 0x42) != '\0')) &&
     (*(char *)(*(int *)((int)param_1 + 0x60) + 2) != '\0')) {
    iVar5 = *(int *)((int)param_1 + 0x2c);
    if ((*(uint *)((int)param_1 + 0x28) == param_3) && (iVar5 == param_4)) {
      *param_6 = 0;
      return 0;
    }
    if (((*(char *)((int)param_1 + 0x41) != '\0') && (iVar5 <= param_4)) &&
       ((iVar5 < param_4 || (*(uint *)((int)param_1 + 0x28) < param_3)))) {
      *param_6 = -1;
      return 0;
    }
  }
  uVar2 = FUN_0042ae50();
  if (uVar2 != 0) {
    return uVar2;
  }
  if (*(char *)((int)param_1 + 0x43) == '\0') {
    *param_6 = -1;
    return 0;
  }
  do {
    iVar6 = (int)*(short *)((int)param_1 + 0x5c);
    iVar5 = *(int *)((int)param_1 + iVar6 * 4 + 0x60);
    iVar3 = *(ushort *)(iVar5 + 0x10) - 1;
    local_18 = 0;
    local_10 = iVar3;
    if (param_5 != 0) goto LAB_0042b17a;
    while( true ) {
      iVar3 = iVar3 / 2;
LAB_0042b17a:
      *(short *)((int)param_1 + iVar6 * 2 + 0xb0) = (short)iVar3;
      uVar2 = (uint)*(ushort *)((int)param_1 + *(short *)((int)param_1 + 0x5c) * 2 + 0xb0);
      *(undefined2 *)((int)param_1 + 0x3e) = 0;
      iVar3 = (uint)*(ushort *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x40);
      pbVar7 = (byte *)((uint)(CONCAT11(*(undefined1 *)(iVar3 + uVar2 * 2),
                                        *(undefined1 *)(iVar3 + 1 + uVar2 * 2)) &
                              *(ushort *)(iVar5 + 0x12)) + (uint)*(byte *)(iVar5 + 6) +
                       *(int *)(iVar5 + 0x40));
      if (*(char *)(iVar5 + 2) == '\0') {
        uVar4 = (uint)*pbVar7;
        if (((char)*pbVar7 < '\0') || (*(ushort *)(iVar5 + 8) < uVar4)) {
          if (((char)pbVar7[1] < '\0') ||
             (uVar4 = (uVar4 & 0x7f) * 0x80 + (uint)pbVar7[1], *(ushort *)(iVar5 + 8) < uVar4)) {
            FUN_0040c7d0(iVar5,(int)pbVar7 - (uint)*(byte *)(iVar5 + 6),(int *)((int)param_1 + 0x20)
                        );
            pvVar1 = *(void **)((int)param_1 + 0x28);
            pbVar7 = (byte *)FUN_004125b0((int)pvVar1);
            if (pbVar7 == (byte *)0x0) {
              return 7;
            }
            uVar4 = FUN_00428400(param_1,pvVar1,(undefined4 *)pbVar7);
            if (uVar4 != 0) {
              FUN_004080d0((int)pbVar7);
              return uVar4;
            }
            iVar3 = FUN_00423e90((int)pvVar1,pbVar7,param_2);
            FUN_004080d0((int)pbVar7);
          }
          else {
            iVar3 = FUN_00423e90(uVar4,pbVar7 + 2,param_2);
          }
        }
        else {
          iVar3 = FUN_00423e90(uVar4,pbVar7 + 1,param_2);
        }
      }
      else {
        if ((*(char *)(iVar5 + 4) != '\0') && (0x7f < *pbVar7)) {
          FUN_00408ed0(pbVar7);
        }
        FUN_00408d50();
        if ((local_8 == param_3) && (local_4 == param_4)) {
          iVar3 = 0;
          *(undefined1 *)((int)param_1 + 0x42) = 1;
          *(uint *)((int)param_1 + 0x28) = local_8;
          *(int *)((int)param_1 + 0x2c) = local_4;
        }
        else if ((param_4 < local_4) || ((param_4 <= local_4 && (param_3 <= local_8)))) {
          iVar3 = 1;
          *(undefined1 *)((int)param_1 + 0x42) = 1;
          *(uint *)((int)param_1 + 0x28) = local_8;
          *(int *)((int)param_1 + 0x2c) = local_4;
        }
        else {
          iVar3 = -1;
          *(undefined1 *)((int)param_1 + 0x42) = 1;
          *(uint *)((int)param_1 + 0x28) = local_8;
          *(int *)((int)param_1 + 0x2c) = local_4;
        }
      }
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        local_18 = uVar2 + 1;
      }
      else {
        local_10 = uVar2 - 1;
      }
      uVar2 = local_18;
      if (local_10 < (int)local_18) goto LAB_0042b350;
      iVar6 = (int)*(short *)((int)param_1 + 0x5c);
      iVar3 = local_10 + local_18;
    }
    if ((*(char *)(iVar5 + 2) == '\0') || (*(char *)(iVar5 + 3) != '\0')) {
      *param_6 = 0;
      return 0;
    }
LAB_0042b350:
    if ((*(char *)(iVar5 + 3) != '\0') || (iVar5 = FUN_00408f80(), iVar5 == 0)) {
      *param_6 = iVar3;
      return 0;
    }
    *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5c) * 2 + 0xb0) = (short)uVar2;
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    *(undefined1 *)((int)param_1 + 0x42) = 0;
    uVar2 = FUN_0042add0(extraout_ECX);
    if (uVar2 != 0) {
      return uVar2;
    }
  } while( true );
}


/* END FUNCTION 0x0042b0b0 */
