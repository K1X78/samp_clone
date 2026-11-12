/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055e60
 * Name: FUN_10055e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_10055e60(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  u_short uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  SOCKET SVar8;
  SOCKET *pSVar9;
  SOCKET *pSVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  int local_21c8;
  uint local_21c4;
  timeval local_21c0;
  sockaddr local_21b8;
  fd_set local_21a8;
  fd_set local_20a4;
  char local_1fa0 [8092];
  undefined4 uStack_4;
  
  uStack_4 = 0x10055e6a;
  cVar3 = param_1[1];
  param_1[2] = 1;
  local_21c8 = 0x10;
  local_21c0.tv_sec = 0;
  local_21c0.tv_usec = 25000;
  do {
    if (cVar3 == '\0') {
      param_1[2] = 0;
      return 0;
    }
    iVar5 = FUN_100554e0();
    while (iVar5 != 0) {
      cVar3 = FUN_100331a0(&DAT_10140210);
      uVar15 = 0;
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 0xb) != 0) {
          do {
            cVar3 = FUN_100331a0(iVar5 + 2);
            if (cVar3 != '\0') {
              send(**(SOCKET **)(*(int *)(param_1 + 7) + uVar15 * 4),*(char **)(iVar5 + 0x10),
                   *(int *)(iVar5 + 8),0);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_1 + 0xb));
        }
      }
      else if (*(int *)(param_1 + 0xb) != 0) {
        uVar15 = 0;
        do {
          send(**(SOCKET **)(*(int *)(param_1 + 7) + uVar15 * 4),*(char **)(iVar5 + 0x10),
               *(int *)(iVar5 + 8),0);
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(param_1 + 0xb));
      }
      FUN_10055500();
      iVar5 = FUN_100554e0();
    }
    puVar6 = (undefined4 *)FUN_10055860();
    if (puVar6 != (undefined4 *)0x0) {
      FUN_10055310(*puVar6);
      FUN_10055880();
      *param_1 = 0;
    }
    iVar5 = FUN_100556a0();
    if (iVar5 != 0) {
      uVar15 = 0;
      if (*(int *)(param_1 + 0xb) != 0) {
        do {
          cVar3 = FUN_100331a0(iVar5);
          if (cVar3 != '\0') {
            puVar6 = (undefined4 *)FUN_10055640();
            iVar5 = *(int *)(*(int *)(param_1 + 7) + uVar15 * 4);
            *puVar6 = *(undefined4 *)(iVar5 + 4);
            *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar5 + 8);
            FUN_10055680();
            FUN_100552b0(*(undefined4 *)(*(int *)(param_1 + 7) + uVar15 * 4),&local_21a8);
            FUN_10055d80(uVar15);
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(param_1 + 0xb));
      }
      FUN_100556c0();
    }
    SVar8 = *(SOCKET *)(param_1 + 3);
    bVar17 = SVar8 != 0xffffffff;
    local_20a4.fd_count = 0;
    if (bVar17) {
      local_20a4.fd_array[0] = SVar8;
      local_20a4.fd_count = 1;
      local_21a8.fd_array[0] = SVar8;
    }
    local_20a4.fd_count = (u_int)bVar17;
    local_21a8.fd_count = (u_int)bVar17;
    uVar16 = (uint)bVar17;
    uVar13 = (uint)bVar17;
    uVar15 = *(uint *)(param_1 + 0xb);
    uVar12 = 0;
    if (uVar15 != 0) {
      do {
        uVar7 = 0;
        if (uVar16 != 0) {
          do {
            if (local_20a4.fd_array[uVar7] == **(SOCKET **)(*(int *)(param_1 + 7) + uVar12 * 4))
            break;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar16);
        }
        if ((uVar7 == uVar16) && (uVar16 < 0x40)) {
          local_20a4.fd_array[uVar7] = **(SOCKET **)(*(int *)(param_1 + 7) + uVar12 * 4);
          uVar16 = local_20a4.fd_count + 1;
          local_20a4.fd_count = uVar16;
        }
        uVar7 = 0;
        if (uVar13 != 0) {
          do {
            if (local_21a8.fd_array[uVar7] == **(SOCKET **)(*(int *)(param_1 + 7) + uVar12 * 4))
            break;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar13);
        }
        if ((uVar7 == uVar13) && (uVar13 < 0x40)) {
          local_21a8.fd_array[uVar7] = **(SOCKET **)(*(int *)(param_1 + 7) + uVar12 * 4);
          uVar13 = local_21a8.fd_count + 1;
          local_21a8.fd_count = uVar13;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar15);
    }
    iVar5 = select(0,&local_20a4,(fd_set *)0x0,&local_21a8,&local_21c0);
    if (iVar5 < 1) {
      if (iVar5 == 0) {
        FUN_10043560(0x32);
      }
    }
    else if (*(SOCKET *)(param_1 + 3) == 0xffffffff) {
LAB_100561e5:
      uVar15 = 0;
      if (*(int *)(param_1 + 0xb) != 0) {
        do {
          piVar1 = (int *)(param_1 + 7);
          iVar5 = __WSAFDIsSet(**(SOCKET **)(*(int *)(param_1 + 7) + uVar15 * 4),&local_21a8);
          if (iVar5 == 0) {
            iVar5 = __WSAFDIsSet(**(SOCKET **)(*piVar1 + uVar15 * 4),&local_20a4);
            if (iVar5 != 0) {
              uVar12 = recv(**(SOCKET **)(*piVar1 + uVar15 * 4),local_1fa0,0x1fa0,0);
              local_21c4 = uVar12;
              if ((int)uVar12 < 1) goto LAB_1005620c;
              iVar5 = FUN_10055480();
              pcVar11 = operator_new(uVar12 + 1);
              *(char **)(iVar5 + 0x10) = pcVar11;
              pcVar14 = local_1fa0;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar11 = *pcVar14;
                pcVar14 = pcVar14 + 1;
                pcVar11 = pcVar11 + 1;
              }
              *(undefined1 *)(local_21c4 + *(int *)(iVar5 + 0x10)) = 0;
              *(uint *)(iVar5 + 8) = local_21c4;
              iVar2 = *(int *)(*(int *)(param_1 + 7) + uVar15 * 4);
              *(undefined4 *)(iVar5 + 2) = *(undefined4 *)(iVar2 + 4);
              *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(iVar2 + 8);
              FUN_100554c0();
            }
            uVar15 = uVar15 + 1;
          }
          else {
LAB_1005620c:
            puVar6 = (undefined4 *)FUN_10055640();
            iVar5 = *(int *)(*piVar1 + uVar15 * 4);
            *puVar6 = *(undefined4 *)(iVar5 + 4);
            *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar5 + 8);
            FUN_10055680();
            FUN_100552b0(*(undefined4 *)(*piVar1 + uVar15 * 4),&local_21a8);
            FUN_10055d80(uVar15);
          }
        } while (uVar15 < *(uint *)(param_1 + 0xb));
      }
    }
    else {
      iVar5 = __WSAFDIsSet(*(SOCKET *)(param_1 + 3),&local_20a4);
      if (iVar5 == 0) {
        if ((*(SOCKET *)(param_1 + 3) == 0xffffffff) ||
           (iVar5 = __WSAFDIsSet(*(SOCKET *)(param_1 + 3),&local_21a8), iVar5 == 0))
        goto LAB_100561e5;
      }
      else {
        SVar8 = accept(*(SOCKET *)(param_1 + 3),&local_21b8,&local_21c8);
        if (SVar8 != 0xffffffff) {
          pSVar9 = operator_new(10);
          *pSVar9 = SVar8;
          pSVar9[1] = CONCAT22(local_21b8.sa_data._4_2_,local_21b8.sa_data._2_2_);
          uVar4 = ntohs(local_21b8.sa_data._0_2_);
          *(u_short *)(pSVar9 + 2) = uVar4;
          FUN_10055310(pSVar9);
          pSVar10 = (SOCKET *)FUN_10055640();
          *pSVar10 = pSVar9[1];
          *(short *)(pSVar10 + 1) = (short)pSVar9[2];
          FUN_10055680();
          uVar15 = 0;
          if (local_20a4.fd_count != 0) {
            do {
              if (local_20a4.fd_array[uVar15] == SVar8) break;
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_20a4.fd_count);
          }
          if ((uVar15 == local_20a4.fd_count) && (local_20a4.fd_count < 0x40)) {
            local_20a4.fd_array[uVar15] = SVar8;
            local_20a4.fd_count = local_20a4.fd_count + 1;
          }
          uVar15 = 0;
          if (local_21a8.fd_count != 0) {
            do {
              if (local_21a8.fd_array[uVar15] == SVar8) break;
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_21a8.fd_count);
          }
          if ((uVar15 == local_21a8.fd_count) && (local_21a8.fd_count < 0x40)) {
            local_21a8.fd_array[uVar15] = SVar8;
            local_21a8.fd_count = local_21a8.fd_count + 1;
          }
        }
      }
    }
    cVar3 = param_1[1];
  } while( true );
}


/* END FUNCTION 0x10055e60 */
