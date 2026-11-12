/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482fd0
 * Name: FUN_00482fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall
FUN_00482fd0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int *param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  short *psVar13;
  undefined4 *puVar14;
  int local_42c [256];
  int local_2c;
  uint local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  uint *local_18;
  uint *local_14;
  void *local_10;
  char *local_c;
  char *local_8;
  
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  local_10 = this;
  pcVar2 = operator_new(0x11b);
  local_c = pcVar2;
  _strncpy(pcVar2,param_1,0xff);
  piVar12 = param_5;
  *(undefined4 *)(pcVar2 + 0xff) = param_2;
  *(undefined4 *)(pcVar2 + 0x103) = param_2;
  *(undefined4 *)(pcVar2 + 0x107) = param_3;
  pcVar2[0x10b] = '\0';
  pcVar2[0x10c] = '\0';
  pcVar2[0x10d] = '\0';
  pcVar2[0x10e] = '\0';
  *(int **)(pcVar2 + 0x10f) = param_5;
  FUN_00403100(param_5,param_4[4],(int *)&local_14);
  FUN_004031d0(local_14,&local_2c);
  if (local_2c < 1) {
LAB_004830ba:
    iVar4 = 0;
    local_8 = (char *)0x0;
  }
  else {
    iVar4 = -(local_2c + 4U & 0xfffffffc);
    local_8 = &stack0xfffffbc8;
    if (&stack0x00000000 == (undefined1 *)0x438) goto LAB_004830ba;
    *(int *)((int)local_42c + iVar4 + -0x10) = local_2c + 1;
    *(undefined4 *)((int)local_42c + iVar4 + -0x14) = 0;
    *(uint **)((int)local_42c + iVar4 + -0x18) = local_14;
    *(undefined1 **)((int)local_42c + iVar4 + -0x1c) = &stack0xfffffbc8;
    *(undefined4 *)((int)local_42c + iVar4 + -0x20) = 0x483081;
    FUN_00403350(*(int *)((int)local_42c + iVar4 + -0x1c),*(uint **)((int)local_42c + iVar4 + -0x18)
                 ,*(int *)((int)local_42c + iVar4 + -0x14),*(uint *)((int)local_42c + iVar4 + -0x10)
                );
    pcVar3 = local_8;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)(local_8 + 1);
  }
  param_1 = (char *)0x0;
  if (iVar4 != 0) {
    piVar9 = local_42c;
    piVar7 = param_4 + iVar4 + 5;
    do {
      iVar4 = iVar4 + -1;
      piVar11 = piVar7 + -1;
      param_4 = (undefined4 *)0x0;
      if (local_8[iVar4] == 'a') {
        puVar5 = (undefined4 *)FUN_0046fca0(piVar12,*piVar7);
        local_1c = (char *)*puVar5;
        iVar6 = FUN_00403150(piVar12,(int)local_1c,piVar9,(int *)&param_4);
        if (iVar6 == 0) {
          puVar5 = (undefined4 *)FUN_0046fca0(piVar12,*piVar11);
          puVar14 = param_4;
          for (pcVar2 = local_1c; pcVar2 != (char *)0x0; pcVar2 = pcVar2 + -1) {
            *puVar14 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar14 = puVar14 + 1;
          }
          param_1 = param_1 + 1;
          piVar9 = piVar9 + 1;
          piVar12 = param_5;
        }
      }
      else if (local_8[iVar4] == 's') {
        FUN_00403100(piVar12,*piVar11,(int *)&local_18);
        FUN_004031d0(local_18,(int *)&local_24);
        if ((int)local_24 < 1) {
LAB_00483212:
          psVar13 = (short *)0x0;
LAB_00483214:
          *(undefined1 *)psVar13 = 1;
          *(undefined1 *)((int)psVar13 + 1) = 0;
          iVar6 = FUN_00403150(piVar12,1,piVar9,(int *)&param_4);
          psVar10 = psVar13;
        }
        else {
          local_1c = local_24 + 1;
          pcVar2 = &stack0xfffffbc8;
          pcVar3 = &stack0xfffffbc8;
          psVar10 = (short *)&stack0xfffffbc8;
          psVar13 = (short *)&stack0xfffffbc8;
          if (&stack0x00000000 == (undefined1 *)0x438) goto LAB_00483212;
          FUN_00403350((int)&stack0xfffffbc8,local_18,0,(uint)local_1c);
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          local_1c = pcVar2 + -(int)&stack0xfffffbc9;
          if (pcVar2 + -(int)&stack0xfffffbc9 == (char *)0x0) goto LAB_00483214;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar6 = FUN_00403150(piVar12,(int)(pcVar3 + (1 - (int)&stack0xfffffbc9)),piVar9,
                               (int *)&param_4);
        }
        if (iVar6 == 0) {
          FUN_00403250(param_4,psVar10,0,0,0x7fffffff);
          param_1 = param_1 + 1;
          piVar9 = piVar9 + 1;
        }
      }
      else {
        piVar7 = (int *)FUN_0046fca0(piVar12,*piVar11);
        param_1 = param_1 + 1;
        *piVar9 = *piVar7;
        piVar9 = piVar9 + 1;
      }
      piVar7 = piVar11;
    } while (iVar4 != 0);
    pcVar2 = local_c;
    this = local_10;
    if (param_1 != (char *)0x0) {
      piVar7 = _malloc((int)param_1 << 2);
      piVar12 = local_42c;
      piVar9 = piVar7;
      for (uVar8 = (uint)param_1 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(char *)piVar9 = (char)*piVar12;
        piVar12 = (int *)((int)piVar12 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      *(int **)(local_c + 0x117) = piVar7;
      pcVar2 = local_c;
      this = local_10;
      goto LAB_00483285;
    }
  }
  pcVar2[0x117] = '\0';
  pcVar2[0x118] = '\0';
  pcVar2[0x119] = '\0';
  pcVar2[0x11a] = '\0';
LAB_00483285:
  *(char **)(pcVar2 + 0x113) = param_1;
  local_28 = *(uint *)((int)this + 0xc);
  local_24 = pcVar2;
  FUN_00482a60(this,&local_20,&local_28);
  return *(undefined4 *)((int)this + 0xc);
}


/* END FUNCTION 0x00482fd0 */
