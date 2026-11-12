/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404c60
 * Name: FUN_00404c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_00404c60(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 uStackY_3c;
  int local_18;
  long local_14;
  undefined4 local_10;
  int local_c;
  uint *local_8;
  
  pcVar6 = param_2;
  local_14 = 0x26ca;
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_8);
  uStackY_3c = 0x404c93;
  FUN_00403550(local_8,&local_c);
  puVar8 = (undefined1 *)(local_c + 7U & 0xfffffffc);
  iVar11 = -(int)puVar8;
  pcVar10 = &stack0xffffffdc + iVar11;
  puVar12 = &stack0xffffffdc + iVar11;
  if (&stack0xffffffdc != puVar8) {
    (&stack0xffffffdc)[iVar11] = 0xef;
    (&stack0xffffffdd)[iVar11] = 0xbb;
    (&stack0xffffffde)[iVar11] = 0xbf;
    puVar5 = local_8;
    if (*local_8 < 0x1000000) {
      uVar2 = *local_8;
      param_2 = &stack0xffffffdf + iVar11;
      iVar4 = local_c;
      while (uVar2 != 0) {
        local_c = iVar4;
        *(uint *)(&stack0xffffffd8 + iVar11) = uVar2;
        local_8 = puVar5 + 1;
        *(undefined1 **)(&stack0xffffffd4 + iVar11) =
             &stack0xffffffdc + iVar4 + (iVar11 - (int)param_2);
        *(char ***)(&stack0xffffffd0 + iVar11) = &param_2;
        *(char **)(&stack0xffffffcc + iVar11) = param_2;
        *(undefined4 *)(&stack0xffffffc8 + iVar11) = 0x404ceb;
        FUN_00403420(*(byte **)(&stack0xffffffcc + iVar11),*(int **)(&stack0xffffffd0 + iVar11),
                     *(int *)(&stack0xffffffd4 + iVar11),*(uint *)(&stack0xffffffd8 + iVar11));
        iVar4 = local_c;
        puVar5 = local_8;
        uVar2 = *local_8;
      }
      local_8 = puVar5;
      *param_2 = '\0';
    }
    else {
      *(undefined4 *)(&stack0xffffffd8 + iVar11) = 0x7fffffff;
      *(undefined4 *)(&stack0xffffffd4 + iVar11) = 0;
      *(uint **)(&stack0xffffffd0 + iVar11) = puVar5;
      *(undefined1 **)(&stack0xffffffcc + iVar11) = &stack0xffffffdf + iVar11;
      *(undefined4 *)(&stack0xffffffc8 + iVar11) = 0x404d0d;
      FUN_00403350(*(int *)(&stack0xffffffcc + iVar11),*(uint **)(&stack0xffffffd0 + iVar11),
                   *(int *)(&stack0xffffffd4 + iVar11),*(uint *)(&stack0xffffffd8 + iVar11));
    }
    uVar3 = *(undefined4 *)(pcVar6 + 8);
    *(undefined4 **)(&stack0xffffffd8 + iVar11) = &local_10;
    *(undefined4 *)(&stack0xffffffd4 + iVar11) = uVar3;
    *(int **)(&stack0xffffffd0 + iVar11) = param_1;
    *(undefined4 *)(&stack0xffffffcc + iVar11) = 0x404d21;
    FUN_00403100(*(int **)(&stack0xffffffd0 + iVar11),*(int *)(&stack0xffffffd4 + iVar11),
                 *(int **)(&stack0xffffffd8 + iVar11));
    uVar3 = local_10;
    *(int **)(&stack0xffffffcc + iVar11) = &local_18;
    *(undefined4 *)(&stack0xffffffc8 + iVar11) = uVar3;
    *(undefined4 *)((int)&uStackY_3c + iVar11) = 0x404d2e;
    FUN_004031d0(*(uint **)(&stack0xffffffc8 + iVar11),*(int **)(&stack0xffffffcc + iVar11));
    if (0 < local_18) {
      puVar8 = (undefined1 *)(local_18 + 4U & 0xfffffffc);
      *(undefined4 *)(&stack0xffffffd8 + iVar11) = 0x404d4c;
      iVar4 = -(int)puVar8;
      puVar12 = &stack0xffffffdc + iVar4 + iVar11;
      if (&stack0xffffffdc + iVar11 != puVar8) {
        *(int *)(&stack0xffffffd8 + iVar4 + iVar11) = local_18 + 1;
        *(undefined4 *)(&stack0xffffffd4 + iVar4 + iVar11) = 0;
        *(undefined4 *)(&stack0xffffffd0 + iVar4 + iVar11) = local_10;
        *(undefined1 **)(&stack0xffffffcc + iVar4 + iVar11) = &stack0xffffffdc + iVar4 + iVar11;
        *(undefined4 *)(&stack0xffffffc8 + iVar4 + iVar11) = 0x404d63;
        FUN_00403350(*(int *)(&stack0xffffffcc + iVar4 + iVar11),
                     *(uint **)(&stack0xffffffd0 + iVar4 + iVar11),
                     *(int *)(&stack0xffffffd4 + iVar4 + iVar11),
                     *(uint *)(&stack0xffffffd8 + iVar4 + iVar11));
        *(undefined4 *)(&stack0xffffffd8 + iVar4 + iVar11) = 0x3a;
        *(undefined1 **)(&stack0xffffffd4 + iVar4 + iVar11) = &stack0xffffffdc + iVar4 + iVar11;
        *(undefined4 *)(&stack0xffffffd0 + iVar4 + iVar11) = 0x404d6e;
        param_2 = _strchr(*(char **)(&stack0xffffffd4 + iVar4 + iVar11),
                          *(int *)(&stack0xffffffd8 + iVar4 + iVar11));
        puVar12 = &stack0xffffffdc + iVar4 + iVar11;
        if (param_2 != (char *)0x0) {
          *(int *)(&stack0xffffffd8 + iVar4 + iVar11) = (int)param_2[1];
          *(undefined4 *)(&stack0xffffffd4 + iVar4 + iVar11) = 0x404d82;
          iVar9 = _isdigit(*(int *)(&stack0xffffffd8 + iVar4 + iVar11));
          puVar12 = &stack0xffffffdc + iVar4 + iVar11;
          if (iVar9 != 0) {
            *param_2 = '\0';
            param_2 = param_2 + 1;
            *(char **)(&stack0xffffffd8 + iVar4 + iVar11) = param_2;
            *(undefined4 *)(&stack0xffffffd4 + iVar4 + iVar11) = 0x404d9c;
            local_14 = _atol(*(char **)(&stack0xffffffd8 + iVar4 + iVar11));
            puVar12 = &stack0xffffffdc + iVar4 + iVar11;
          }
        }
      }
    }
    lVar7 = local_14;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    *(char **)(puVar12 + -4) = pcVar10 + (1 - (int)(&stack0xffffffdd + iVar11));
    *(undefined1 **)(puVar12 + -8) = &stack0xffffffdc + iVar11;
    *(long *)(puVar12 + -0xc) = lVar7;
    *(undefined4 *)(puVar12 + -0x10) = 0x404dbc;
    iVar11 = FUN_00404be0(*(u_short *)(puVar12 + -0xc),*(char **)(puVar12 + -8),
                          *(int *)(puVar12 + -4));
    return 0 < iVar11;
  }
  return false;
}


/* END FUNCTION 0x00404c60 */
