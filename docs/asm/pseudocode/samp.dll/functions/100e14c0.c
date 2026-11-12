/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e14c0
 * Name: FUN_100e14c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_100e14c0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  void *_Dst;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [9];
  
  iVar8 = param_2 + 0x1e;
  uVar2 = *param_1;
  local_68 = -1;
  local_5c = -1;
  if ((param_1[0x3c] == 2) && (param_1[(uint)(param_1[0x67] != -1) * 4 + 0x81] != 2)) {
    local_64 = param_1[0x39];
  }
  else {
    local_64 = param_1[0x28];
  }
  local_60 = (uint)(param_1[iVar8 * 4 + 2] != 3);
  FUN_100d8ae0(uVar2,"schannel: SSL/TLS connection with %s port %hu (step 2/3)\n",local_64,
               param_1[0x40]);
  piVar4 = (int *)param_1[iVar8 * 4 + 3];
  if ((*piVar4 == 0) || (piVar4[1] == 0)) {
    return '#';
  }
  if (piVar4[0xc] == 0) {
    piVar4[10] = 0;
    *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x20) = 0x1000;
    uVar3 = (*(code *)PTR__malloc_101554b8)(*(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x20));
    *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x30) = uVar3;
    piVar4 = (int *)param_1[iVar8 * 4 + 3];
    if (piVar4[0xc] == 0) goto LAB_100e1968;
  }
  iVar5 = piVar4[0xb];
  if (iVar5 == 0) {
    piVar4[0xd] = 0;
    *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x24) = 0;
    *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x1c) = 0x1000;
    uVar3 = (*(code *)PTR__malloc_101554b8)(*(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x1c));
    *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x2c) = uVar3;
    piVar4 = (int *)param_1[iVar8 * 4 + 3];
    iVar5 = piVar4[0xb];
    if (iVar5 == 0) {
LAB_100e1968:
      FUN_100d8ba0(uVar2,"schannel: unable to allocate memory");
      return '\x1b';
    }
  }
  if ((uint)(piVar4[7] - piVar4[9]) < 0x400) {
    iStack_58 = piVar4[9] + 0x400;
    iVar5 = (*(code *)PTR__realloc_101554c0)(iVar5,iStack_58);
    if (iVar5 == 0) {
      FUN_100d8ba0(uVar2,"schannel: unable to re-allocate memory");
      return '\x1b';
    }
    *(int *)(param_1[iVar8 * 4 + 3] + 0x2c) = iVar5;
    *(int *)(param_1[iVar8 * 4 + 3] + 0x1c) = iStack_58;
  }
  do {
    if (local_60 != 0) {
      iVar5 = param_1[iVar8 * 4 + 3];
      iVar5 = FUN_100d87c0(param_1[param_2 + 0x66],*(int *)(iVar5 + 0x2c) + *(int *)(iVar5 + 0x24),
                           *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x24),&local_68);
      if (iVar5 == 0x51) {
        if (param_1[iVar8 * 4 + 2] != 3) {
          param_1[iVar8 * 4 + 2] = 2;
        }
        FUN_100d8ae0(uVar2,"schannel: failed to receive handshake, need more data\n");
        return '\0';
      }
      if ((iVar5 != 0) || (local_68 == 0)) {
        FUN_100d8ba0(uVar2,"schannel: failed to receive handshake, SSL/TLS connection failed");
        return '#';
      }
      *(int *)(param_1[iVar8 * 4 + 3] + 0x24) = *(int *)(param_1[iVar8 * 4 + 3] + 0x24) + local_68;
      *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x34) = 0;
      FUN_100d8ae0(uVar2,"schannel: encrypted data got %zd\n",local_68);
    }
    FUN_100d8ae0(uVar2,"schannel: encrypted data buffer: offset %zu length %zu\n",
                 *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x24),
                 *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x1c));
    uVar3 = FUN_100d9a10(*(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x24));
    puStack_34 = (undefined4 *)
                 (*(code *)PTR__malloc_101554b8)(*(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x24));
    uStack_38 = 2;
    uStack_44 = 2;
    aiStack_24[1] = 2;
    puStack_40 = &uStack_3c;
    piStack_4c = aiStack_24;
    uStack_30 = 0;
    iStack_2c = 0;
    uStack_28 = 0;
    uStack_48 = 0;
    aiStack_24[0] = 0;
    aiStack_24[2] = 0;
    aiStack_24[3] = 0;
    aiStack_24[4] = 0x11;
    aiStack_24[5] = 0;
    aiStack_24[6] = 0;
    aiStack_24[7] = 0;
    aiStack_24[8] = 0;
    uStack_54 = 0;
    uStack_50 = 3;
    uStack_3c = uVar3;
    if (puStack_34 == (undefined4 *)0x0) goto LAB_100e1968;
    uVar7 = *(uint *)(param_1[iVar8 * 4 + 3] + 0x24);
    puVar9 = *(undefined4 **)(param_1[iVar8 * 4 + 3] + 0x2c);
    puVar10 = puStack_34;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    if (local_64 == 0) {
      return '\x1b';
    }
    puVar9 = (undefined4 *)param_1[iVar8 * 4 + 3];
    iVar5 = (**(code **)(DAT_102acadc + 0x18))
                      (*puVar9,puVar9[1],local_64,puVar9[0xe],0,0,&uStack_48,0,0,&uStack_54,
                       puVar9 + 0xf,puVar9[1] + 8);
    (*(code *)PTR__free_101554bc)(local_64);
    puStack_34 = (undefined4 *)0x0;
    if (iVar5 == -0x7ff6fce8) {
      *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x34) = 1;
      param_1[iVar8 * 4 + 2] = 2;
      FUN_100d8ae0(uVar2,"schannel: received incomplete message, need more data\n");
      return '\0';
    }
    if (iVar5 == 0x90320) {
      if ((*(byte *)(param_1[iVar8 * 4 + 3] + 0x38) & 0x80) == 0) {
        puVar1 = (uint *)(param_1[iVar8 * 4 + 3] + 0x38);
        *puVar1 = *puVar1 | 0x80;
        param_1[iVar8 * 4 + 2] = 3;
        FUN_100d8ae0(uVar2,"schannel: a client certificate has been requested\n");
        return '\0';
      }
LAB_100e18ed:
      uVar3 = FUN_100c8280(param_1,iVar5);
      pcVar11 = "schannel: next InitializeSecurityContext failed: %s";
LAB_100e1906:
      FUN_100d8ba0(uVar2,pcVar11,uVar3);
      return ((iVar5 != -0x7ff6fcdb) - 1U & 0x19) + 0x23;
    }
    if ((iVar5 != 0x90312) && (iVar5 != 0)) {
      if (iVar5 == -0x7ff6fcde) {
        uVar3 = FUN_100c8280(param_1,0x80090322);
        pcVar11 = "schannel: SNI or certificate check failed: %s";
        goto LAB_100e1906;
      }
      goto LAB_100e18ed;
    }
    local_60 = 0;
    piVar4 = aiStack_24;
    do {
      if ((piVar4[1] == 2) && (*piVar4 != 0)) {
        FUN_100d8ae0(uVar2,"schannel: sending next handshake data: sending %lu bytes...\n",*piVar4);
        iVar5 = FUN_100d9150(param_1,param_1[param_2 + 0x66],piVar4[2],*piVar4,&local_5c);
        if ((iVar5 != 0) || (iVar5 = iStack_58, *piVar4 != local_5c)) {
          FUN_100d8ba0(uVar2,"schannel: failed to send next handshake data: sent %zd of %lu bytes",
                       local_5c,aiStack_24[local_60 * 3]);
          return '#';
        }
      }
      if (piVar4[2] != 0) {
        (**(code **)(DAT_102acadc + 0x40))(piVar4[2]);
      }
      local_60 = local_60 + 1;
      piVar4 = piVar4 + 3;
    } while ((int)local_60 < 3);
    if ((iStack_2c != 5) || (uStack_30 == 0)) {
      *(undefined4 *)(param_1[iVar8 * 4 + 3] + 0x24) = 0;
LAB_100e1a2e:
      if (iVar5 == 0x90312) {
        param_1[iVar8 * 4 + 2] = 2;
        return '\0';
      }
LAB_100e1a47:
      if (iVar5 == 0) {
        param_1[iVar8 * 4 + 2] = 4;
        FUN_100d8ae0(uVar2,"schannel: SSL/TLS handshake complete\n");
      }
      return '\0';
    }
    FUN_100d8ae0(uVar2,"schannel: encrypted data length: %lu\n",uStack_30);
    uVar7 = *(uint *)(param_1[iVar8 * 4 + 3] + 0x24);
    if (uVar7 <= uStack_30) goto LAB_100e1a2e;
    _Dst = *(void **)(param_1[iVar8 * 4 + 3] + 0x2c);
    _memmove(_Dst,(void *)((int)_Dst + (uVar7 - uStack_30)),uStack_30);
    *(uint *)(param_1[iVar8 * 4 + 3] + 0x24) = uStack_30;
    if (iVar5 != 0x90312) goto LAB_100e1a47;
    local_60 = 0;
  } while( true );
}


/* END FUNCTION 0x100e14c0 */
