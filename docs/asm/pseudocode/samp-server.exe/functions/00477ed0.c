/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477ed0
 * Name: FUN_00477ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00477ed0(int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char local_314 [4];
  undefined1 local_310 [508];
  char local_114 [256];
  int local_14;
  int local_10;
  char *local_c;
  uint *local_8;
  
  puVar3 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_10);
  if (local_10 < 1) {
LAB_00477f32:
    local_c = (char *)0x0;
  }
  else {
    iVar2 = -(local_10 + 4U & 0xfffffffc);
    local_c = &stack0xfffffce0;
    if (&stack0x00000000 == (undefined1 *)0x320) goto LAB_00477f32;
    *(int *)(local_310 + iVar2 + -0x14) = local_10 + 1;
    *(undefined4 *)(local_310 + iVar2 + -0x18) = 0;
    *(uint **)(local_310 + iVar2 + -0x1c) = param_2;
    *(undefined1 **)(local_310 + iVar2 + -0x20) = &stack0xfffffce0;
    builtin_strncpy(local_314 + iVar2 + -0x20,"-\x7fG",4);
    FUN_00403350(*(int *)(local_310 + iVar2 + -0x20),*(uint **)(local_310 + iVar2 + -0x1c),
                 *(int *)(local_310 + iVar2 + -0x18),*(uint *)(local_310 + iVar2 + -0x14));
  }
  FUN_00403100(param_1,puVar3[2],(int *)&local_8);
  FUN_004031d0(local_8,&local_14);
  if (0 < local_14) {
    pcVar6 = &stack0xfffffce0;
    if (&stack0x00000000 != (undefined1 *)0x320) {
      FUN_00403350((int)&stack0xfffffce0,local_8,0,local_14 + 1);
      goto LAB_00477f88;
    }
  }
  pcVar6 = (char *)0x0;
LAB_00477f88:
  pcVar5 = local_c;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  param_2 = (uint *)(pcVar5 + -(int)(local_c + 1));
  if (param_2 != (uint *)0x0) {
    pcVar5 = pcVar6 + 1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    param_2 = (uint *)(pcVar6 + -(int)pcVar5);
    if (param_2 != (uint *)0x0) {
      pcVar5 = (char *)FUN_00490ba0(DAT_004fc43c,"bind");
      pcVar6 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      param_2 = (uint *)(pcVar5 + -(int)pcVar6);
      if (param_2 == (uint *)0x0) {
        builtin_strncpy(local_114,"127.0.0.1",10);
      }
      else {
        pcVar5 = (char *)FUN_00490ba0(DAT_004fc43c,"bind");
        pcVar6 = local_114;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
      }
      FUN_00490c80(DAT_004fc43c,"port");
      _sprintf(local_314,"-h %s -p %d -n %s -m %s");
      pcVar6 = (char *)FUN_00490ba0(DAT_004fc43c,"password");
      if (pcVar6 != (char *)0x0) {
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        param_2 = (uint *)(pcVar5 + -(int)(pcVar6 + 1));
        if (param_2 != (uint *)0x0) {
          puVar4 = (undefined4 *)&stack0xfffffceb;
          do {
            puVar9 = puVar4;
            puVar4 = (undefined4 *)((int)puVar9 + 1);
          } while (*(char *)((int)puVar9 + 1) != '\0');
          *(undefined4 *)((int)puVar9 + 1) = 0x207a2d20;
          *(undefined1 *)((int)puVar9 + 5) = 0;
          pcVar5 = pcVar6;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          pcVar10 = &stack0xfffffceb;
          do {
            pcVar8 = pcVar10 + 1;
            pcVar10 = pcVar10 + 1;
          } while (*pcVar8 != '\0');
          pcVar8 = pcVar6;
          for (uVar7 = (uint)((int)pcVar5 - (int)pcVar6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar7 = (int)pcVar5 - (int)pcVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar10 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
          }
        }
      }
      ShellExecuteA((HWND)0x0,"open","samp-npc.exe",local_314,(LPCSTR)0x0,0);
      return 1;
    }
  }
  FUN_00491fa0("ConnectNPC: Bad parameters");
  return 0;
}


/* END FUNCTION 0x00477ed0 */
