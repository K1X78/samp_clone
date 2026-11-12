/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004747d0
 * Name: FUN_004747d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_004747d0(int *param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint *puVar8;
  short *psVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  uint *local_24;
  int local_20;
  undefined1 *local_1c;
  uint *local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  byte *local_8;
  
  if (*param_2 < 8) {
    FUN_00491fa0("SCRIPT: Bad parameter count (%d < 2): ");
    return 0;
  }
  if (0x408 < *param_2) {
    FUN_00491fa0("SCRIPT: Bad parameter count (%d > 258): ");
    return 0;
  }
  FUN_00403100(param_1,param_2[1],(int *)&local_c);
  FUN_004031d0(local_c,&local_10);
  puVar8 = local_c;
  if (local_10 < 1) {
LAB_0047487a:
    local_8 = (byte *)0x0;
  }
  else {
    iVar3 = -(local_10 + 4U & 0xfffffffc);
    local_8 = &stack0xfffffbc0;
    if (&stack0x00000000 == (undefined1 *)0x440) goto LAB_0047487a;
    *(int *)(&stack0xfffffbbc + iVar3) = local_10 + 1;
    *(undefined4 *)(&stack0xfffffbb8 + iVar3) = 0;
    *(uint **)(&stack0xfffffbb4 + iVar3) = puVar8;
    *(undefined1 **)(&stack0xfffffbb0 + iVar3) = &stack0xfffffbc0;
    *(undefined4 *)(&stack0xfffffbac + iVar3) = 0x474875;
    FUN_00403350(*(int *)(&stack0xfffffbb0 + iVar3),*(uint **)(&stack0xfffffbb4 + iVar3),
                 *(int *)(&stack0xfffffbb8 + iVar3),*(uint *)(&stack0xfffffbbc + iVar3));
  }
  FUN_00403100(param_1,param_2[2],(int *)&local_18);
  FUN_004031d0(local_18,&local_34);
  if (0 < local_34) {
    local_1c = &stack0xfffffbc0;
    pcVar2 = &stack0xfffffbc0;
    if (&stack0x00000000 != (undefined1 *)0x440) {
      FUN_00403350((int)&stack0xfffffbc0,local_18,0,local_34 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar2 - (int)&stack0xfffffbc1;
      goto LAB_004748eb;
    }
  }
  iVar3 = 0;
  local_1c = (undefined1 *)0x0;
LAB_004748eb:
  pbVar7 = (byte *)0x0;
  local_14 = 0;
  iVar4 = FUN_00401710(param_1,local_8,&local_30);
  if (iVar4 == 0) {
    local_434 = 0;
    local_430 = 0;
    local_42c = 0;
    local_428 = 0;
    local_424 = 0;
    local_420 = 0;
    local_41c = 0;
    local_418 = 0;
    local_414 = 0;
    local_410 = 0;
    local_40c = 0;
    local_408 = 0;
    local_404 = 0;
    local_400 = 0;
    local_3fc = 0;
    local_3f8 = 0;
    local_8 = (byte *)0x0;
    if (iVar3 != 0) {
      local_c = &local_434;
      local_10 = iVar3;
      puVar8 = param_2 + iVar3 + 3;
      do {
        local_10 = local_10 + -1;
        puVar10 = puVar8 + -1;
        if (local_1c[local_10] == 'a') {
          piVar5 = (int *)FUN_0046fca0(param_1,*puVar8);
          local_20 = *piVar5;
          iVar3 = FUN_00403150(param_1,local_20,(int *)local_c,(int *)&local_28);
          if (iVar3 == 0) {
            puVar6 = (undefined4 *)FUN_0046fca0(param_1,*puVar10);
            puVar8 = local_c;
            puVar11 = local_28;
            for (iVar3 = local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar11 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
            }
            FUN_00401c50(param_1,*local_c);
LAB_00474a72:
            local_8 = (byte *)((int)local_8 + 1);
            local_c = puVar8 + 1;
            pbVar7 = local_8;
          }
        }
        else if (local_1c[local_10] == 's') {
          FUN_00403100(param_1,*puVar10,(int *)&local_24);
          FUN_004031d0(local_24,&local_2c);
          if (local_2c < 1) {
LAB_00474a89:
            psVar9 = (short *)0x0;
          }
          else {
            pcVar2 = &stack0xfffffbc0;
            psVar9 = (short *)&stack0xfffffbc0;
            if (&stack0x00000000 == (undefined1 *)0x440) goto LAB_00474a89;
            FUN_00403350((int)&stack0xfffffbc0,local_24,0,local_2c + 1);
            puVar8 = local_c;
            do {
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            local_20 = (int)pcVar2 - (int)&stack0xfffffbc1;
            if (local_20 != 0) {
              FUN_00403610(param_1,(int *)local_c,(undefined4 *)0x0,(short *)&stack0xfffffbc0,
                           (undefined4 *)0x0,0);
              goto LAB_00474a72;
            }
          }
          puVar8 = local_c;
          *(undefined1 *)psVar9 = 1;
          *(undefined1 *)((int)psVar9 + 1) = 0;
          FUN_00403610(param_1,(int *)puVar8,(undefined4 *)0x0,psVar9,(undefined4 *)0x0,0);
          pbVar7 = local_8;
        }
        else {
          puVar6 = (undefined4 *)FUN_0046fca0(param_1,*puVar10);
          FUN_00401c50(param_1,*puVar6);
        }
        puVar8 = puVar10;
      } while (local_10 != 0);
    }
    FUN_00401c90(param_1,&local_14,local_30);
    for (; pbVar7 != (byte *)0x0; pbVar7 = (byte *)((int)pbVar7 + -1)) {
      FUN_004031b0((int)param_1,*(int *)(&stack0xfffffbc8 + (int)pbVar7 * 4));
    }
  }
  return local_14;
}


/* END FUNCTION 0x004747d0 */
