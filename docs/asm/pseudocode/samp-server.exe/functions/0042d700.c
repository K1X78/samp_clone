/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d700
 * Name: FUN_0042d700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_0042d700(int *param_1,undefined4 *param_2,uint param_3,uint param_4,undefined4 *param_5,
            uint param_6,uint param_7,void *param_8)

{
  short *psVar1;
  uint uVar2;
  int *piVar3;
  byte *in_EAX;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *extraout_ECX;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *local_c;
  undefined4 *local_8;
  uint local_4;
  
  piVar3 = param_1;
  iVar8 = *(int *)(*param_1 + 4);
  local_4 = 0;
  if (*(char *)((int)param_1 + 0x43) == '\x03') {
    return param_1[0x14];
  }
  local_c = in_EAX;
  if (param_1[4] == 0) {
    FUN_0040c690(param_3,param_4);
  }
  piVar4 = (int *)FUN_0042a7d0((int)piVar3);
  if ((piVar4 == (int *)0x0) &&
     ((in_EAX != (byte *)0x0 ||
      (piVar4 = (int *)FUN_0042d2a0(param_8,param_3,param_4,(int)param_8,(int *)&local_c),
      piVar4 == (int *)0x0)))) {
    uVar2 = piVar3[(short)piVar3[0x17] + 0x18];
    FUN_00414a00();
    puVar6 = *(undefined4 **)(iVar8 + 0x50);
    if (puVar6 == (undefined4 *)0x0) {
      return 7;
    }
    local_8 = puVar6;
    param_1 = (int *)FUN_004290b0(uVar2,(int)puVar6,param_2,param_3,param_4,param_5,param_6,param_7,
                                  &local_4);
    piVar4 = param_1;
    if (param_1 == (int *)0x0) {
      uVar9 = (uint)*(ushort *)((int)piVar3 + (short)piVar3[0x17] * 2 + 0xb0);
      psVar1 = (short *)((int)piVar3 + (short)piVar3[0x17] * 2 + 0xb0);
      if (local_c == (byte *)0x0) {
        uVar5 = FUN_00423650(*(int *)(uVar2 + 0x44));
        if (uVar5 != 0) {
          return uVar5;
        }
        iVar8 = (uint)*(ushort *)(uVar2 + 0xc) + *(int *)(uVar2 + 0x40);
        puVar6 = (undefined4 *)
                 ((uint)(CONCAT11(*(undefined1 *)(iVar8 + uVar9 * 2),
                                  *(undefined1 *)(iVar8 + 1 + uVar9 * 2)) &
                        *(ushort *)(uVar2 + 0x12)) + *(int *)(uVar2 + 0x40));
        if (*(char *)(uVar2 + 3) == '\0') {
          *local_8 = *puVar6;
        }
        local_c = FUN_0040c950((uint)puVar6);
        param_1 = (int *)FUN_00428f70((int)puVar6);
        FUN_0041fb30(uVar9,(uint)local_c & 0xffff,(int *)&param_1);
        pbVar7 = extraout_ECX;
        puVar6 = local_8;
        if (param_1 != (int *)0x0) {
          return (uint)param_1;
        }
      }
      else {
        pbVar7 = local_c;
        if (((int)local_c < 0) && (*(short *)(uVar2 + 0x10) != 0)) {
          *psVar1 = *psVar1 + 1;
          pbVar7 = (byte *)(int)(short)piVar3[0x17];
          uVar9 = (uint)*(ushort *)((int)piVar3 + (int)pbVar7 * 2 + 0xb0);
        }
      }
      FUN_00429380(pbVar7,(undefined1 *)0x0,uVar2,uVar9,(undefined1 *)puVar6,0,(uint *)&param_1);
      *(undefined2 *)((int)piVar3 + 0x3e) = 0;
      *(undefined1 *)((int)piVar3 + 0x42) = 0;
      piVar4 = param_1;
      if ((param_1 == (int *)0x0) && (*(char *)(uVar2 + 1) != '\0')) {
        piVar4 = (int *)FUN_0042be90(piVar3);
        *(undefined1 *)(piVar3[(short)piVar3[0x17] + 0x18] + 1) = 0;
        *(undefined1 *)((int)piVar3 + 0x43) = 0;
      }
    }
  }
  return (uint)piVar4;
}


/* END FUNCTION 0x0042d700 */
