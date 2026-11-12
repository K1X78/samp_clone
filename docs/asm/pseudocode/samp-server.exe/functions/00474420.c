/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474420
 * Name: FUN_00474420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00474420(int *param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int local_444 [256];
  undefined4 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint *local_30;
  byte *local_2c;
  uint local_28;
  undefined1 *local_24;
  uint *local_20;
  int local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int *local_8;
  
  if (*param_2 < 8) {
    FUN_00491fa0("SCRIPT: Bad parameter count (%d < 2): ");
    return 0;
  }
  if (0x408 < *param_2) {
    FUN_00491fa0("SCRIPT: Bad parameter count (%d > 258): ");
    return 0;
  }
  FUN_00403100(param_1,param_2[1],(int *)&local_c);
  FUN_004031d0(local_c,&local_14);
  if (local_14 < 1) {
LAB_004744ca:
    local_2c = (byte *)0x0;
  }
  else {
    iVar3 = -(local_14 + 4U & 0xfffffffc);
    local_2c = &stack0xfffffbb0;
    if (&stack0x00000000 == (undefined1 *)0x450) goto LAB_004744ca;
    *(int *)((int)local_444 + iVar3 + -0x10) = local_14 + 1;
    *(undefined4 *)((int)local_444 + iVar3 + -0x14) = 0;
    *(uint **)((int)local_444 + iVar3 + -0x18) = local_c;
    *(undefined1 **)((int)local_444 + iVar3 + -0x1c) = &stack0xfffffbb0;
    *(undefined4 *)((int)local_444 + iVar3 + -0x20) = 0x4744c5;
    FUN_00403350(*(int *)((int)local_444 + iVar3 + -0x1c),*(uint **)((int)local_444 + iVar3 + -0x18)
                 ,*(int *)((int)local_444 + iVar3 + -0x14),*(uint *)((int)local_444 + iVar3 + -0x10)
                );
  }
  FUN_00403100(param_1,param_2[2],(int *)&local_30);
  FUN_004031d0(local_30,&local_34);
  if (0 < local_34) {
    local_24 = &stack0xfffffbb0;
    pcVar2 = &stack0xfffffbb0;
    if (&stack0x00000000 != (undefined1 *)0x450) {
      FUN_00403350((int)&stack0xfffffbb0,local_30,0,local_34 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_1c = (int)pcVar2 - (int)&stack0xfffffbb1;
      goto LAB_0047452d;
    }
  }
  local_1c = 0;
  local_24 = (undefined1 *)0x0;
LAB_0047452d:
  local_28 = 0;
  local_c = (uint *)0xffffffff;
  do {
    puVar7 = local_c;
    if (local_c == (uint *)0xffffffff) {
      piVar4 = (int *)*DAT_004fc438;
      if ((piVar4 != (int *)0x0) && ((char)piVar4[0x1a] != '\0')) {
LAB_00474585:
        if ((piVar4 != (int *)0x0) &&
           (local_8 = piVar4, iVar3 = FUN_00401710(piVar4,local_2c,&local_40), iVar3 == 0)) {
          local_444[0] = 0;
          local_444[1] = 0;
          local_444[2] = 0;
          local_444[3] = 0;
          local_444[4] = 0;
          local_444[5] = 0;
          local_444[6] = 0;
          local_444[7] = 0;
          local_444[8] = 0;
          local_444[9] = 0;
          local_444[10] = 0;
          local_444[0xb] = 0;
          local_444[0xc] = 0;
          local_444[0xd] = 0;
          local_444[0xe] = 0;
          local_444[0xf] = 0;
          local_10 = 0;
          if (local_1c != 0) {
            piVar6 = local_444;
            local_14 = local_1c;
            puVar7 = param_2 + local_1c + 3;
            do {
              local_14 = local_14 + -1;
              puVar10 = puVar7 + -1;
              local_18 = puVar10;
              if (local_24[local_14] == 'a') {
                piVar4 = (int *)FUN_0046fca0(param_1,*puVar7);
                local_3c = *piVar4;
                iVar3 = FUN_00403150(local_8,local_3c,piVar6,(int *)&local_44);
                if (iVar3 == 0) {
                  puVar5 = (undefined4 *)FUN_0046fca0(param_1,*puVar10);
                  puVar9 = local_44;
                  for (iVar3 = local_3c; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar9 = *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  FUN_00401c50(local_8,*piVar6);
                  local_10 = local_10 + 1;
                  piVar6 = piVar6 + 1;
                  puVar10 = local_18;
                }
              }
              else if (local_24[local_14] == 's') {
                FUN_00403100(param_1,*puVar10,(int *)&local_20);
                FUN_004031d0(local_20,&local_38);
                if (local_38 < 1) {
LAB_00474731:
                  psVar8 = (short *)0x0;
                }
                else {
                  local_18 = (uint *)(local_38 + 1);
                  pcVar2 = &stack0xfffffbb0;
                  psVar8 = (short *)&stack0xfffffbb0;
                  if (&stack0x00000000 == (undefined1 *)0x450) goto LAB_00474731;
                  FUN_00403350((int)&stack0xfffffbb0,local_20,0,(uint)local_18);
                  do {
                    cVar1 = *pcVar2;
                    pcVar2 = pcVar2 + 1;
                  } while (cVar1 != '\0');
                  local_18 = (uint *)(pcVar2 + -(int)&stack0xfffffbb1);
                  if (local_18 != (uint *)0x0) {
                    FUN_00403610(local_8,piVar6,(undefined4 *)0x0,(short *)&stack0xfffffbb0,
                                 (undefined4 *)0x0,0);
                    local_10 = local_10 + 1;
                    piVar6 = piVar6 + 1;
                    goto LAB_0047476b;
                  }
                }
                piVar4 = local_8;
                *(undefined1 *)psVar8 = 1;
                *(undefined1 *)((int)psVar8 + 1) = 0;
                FUN_00403610(piVar4,piVar6,(undefined4 *)0x0,psVar8,(undefined4 *)0x0,0);
              }
              else {
                puVar5 = (undefined4 *)FUN_0046fca0(param_1,*puVar10);
                FUN_00401c50(local_8,*puVar5);
              }
LAB_0047476b:
              piVar4 = local_8;
              puVar7 = puVar10;
            } while (local_14 != 0);
          }
          FUN_00401c90(piVar4,&local_28,local_40);
          puVar7 = local_c;
          for (iVar3 = local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
            local_c = puVar7;
            FUN_004031b0((int)piVar4,local_444[iVar3 + -1]);
            puVar7 = local_c;
          }
        }
      }
    }
    else if (DAT_004fc438[1] != 0) {
      piVar4 = *(int **)(DAT_004fc438[1] + (int)local_c * 4);
      goto LAB_00474585;
    }
    local_c = (uint *)((int)puVar7 + 1);
    if (0xf < (int)local_c) {
      return local_28;
    }
  } while( true );
}


/* END FUNCTION 0x00474420 */
