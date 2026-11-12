/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e1fa0
 * Name: FUN_100e1fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100e1fa0(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4,int *param_5)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int local_4c;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  uVar1 = *param_1;
  iVar6 = param_2 + 0x1e;
  local_44 = -1;
  local_40 = 0;
  local_4c = 0;
  uVar7 = param_4 + 0x400;
  FUN_100d8ae0(uVar1,"schannel: client wants to read %zu bytes\n",param_4);
  *param_5 = 0;
  if ((param_4 != 0) && (param_4 <= *(uint *)(param_1[iVar6 * 4 + 3] + 0x28))) {
    FUN_100d8ae0(uVar1,"schannel: enough decrypted data is already available\n");
    goto LAB_100e248f;
  }
  iVar3 = param_1[iVar6 * 4 + 3];
  if (*(int *)(iVar3 + 0x40) != 0) {
    *param_5 = *(int *)(iVar3 + 0x40);
    FUN_100d8ae0(uVar1,"schannel: an unrecoverable error occurred in a prior call\n");
    goto LAB_100e248f;
  }
  if (*(int *)(iVar3 + 0x44) != 0) {
    FUN_100d8ae0(uVar1,"schannel: server indicated shutdown in a prior call\n");
    goto LAB_100e248f;
  }
  if ((param_4 != 0) && (*(int *)(iVar3 + 0x48) == 0)) {
    uVar5 = *(uint *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x24);
    if ((uVar5 < 0x400) || (*(uint *)(iVar3 + 0x1c) < uVar7)) {
      uVar5 = *(int *)(iVar3 + 0x24) + 0x400;
      if (uVar5 < uVar7) {
        uVar5 = uVar7;
      }
      iVar3 = (*(code *)PTR__realloc_101554c0)(*(undefined4 *)(iVar3 + 0x2c),uVar5);
      if (iVar3 == 0) {
        *param_5 = 0x1b;
        FUN_100d8ba0(uVar1,"schannel: unable to re-allocate memory");
        goto LAB_100e248f;
      }
      *(int *)(param_1[iVar6 * 4 + 3] + 0x2c) = iVar3;
      *(uint *)(param_1[iVar6 * 4 + 3] + 0x1c) = uVar5;
      iVar3 = *(int *)(param_1[iVar6 * 4 + 3] + 0x1c);
      uVar5 = iVar3 - *(int *)(param_1[iVar6 * 4 + 3] + 0x24);
      FUN_100d8ae0(uVar1,"schannel: encdata_buffer resized %zu\n",iVar3);
    }
    FUN_100d8ae0(uVar1,"schannel: encrypted data buffer: offset %zu length %zu\n",
                 *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x24),
                 *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x1c));
    iVar3 = FUN_100d87c0(param_1[param_2 + 0x66],
                         *(int *)(param_1[iVar6 * 4 + 3] + 0x2c) +
                         *(int *)(param_1[iVar6 * 4 + 3] + 0x24),uVar5,&local_44);
    *param_5 = iVar3;
    if (iVar3 == 0) {
      if (local_44 == 0) {
        *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x48) = 1;
        FUN_100d8ae0(uVar1,"schannel: server closed the connection\n");
      }
      else if (0 < local_44) {
        *(int *)(param_1[iVar6 * 4 + 3] + 0x24) = *(int *)(param_1[iVar6 * 4 + 3] + 0x24) + local_44
        ;
        *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x34) = 0;
        pcVar10 = "schannel: encrypted data got %zd\n";
        iVar3 = local_44;
        goto LAB_100e2197;
      }
    }
    else {
      local_44 = -1;
      if (iVar3 == 0x51) {
        FUN_100d8ae0(uVar1,"schannel: Curl_read_plain returned CURLE_AGAIN\n");
      }
      else if (iVar3 == 0x38) {
        FUN_100d8ae0(uVar1,"schannel: Curl_read_plain returned CURLE_RECV_ERROR\n");
      }
      else {
        pcVar10 = "schannel: Curl_read_plain returned error %d\n";
LAB_100e2197:
        FUN_100d8ae0(uVar1,pcVar10,iVar3);
      }
    }
  }
  FUN_100d8ae0(uVar1,"schannel: encrypted data buffer: offset %zu length %zu\n",
               *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x24),
               *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x1c));
  iVar3 = *(int *)(param_1[iVar6 * 4 + 3] + 0x24);
  while (((iVar3 != 0 && (local_4c == 0)) &&
         ((param_4 == 0 ||
          ((*(uint *)(param_1[iVar6 * 4 + 3] + 0x28) < param_4 ||
           (*(int *)(param_1[iVar6 * 4 + 3] + 0x48) != 0))))))) {
    uStack_30 = FUN_100d9a10(*(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x24));
    uStack_28 = *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x2c);
    puStack_34 = &uStack_30;
    uStack_2c = 1;
    uStack_24 = 0;
    iStack_20 = 0;
    puStack_1c = (undefined4 *)0x0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    iStack_8 = 0;
    uStack_4 = 0;
    uStack_3c = 0;
    uStack_38 = 4;
    local_4c = (**(code **)(DAT_102acadc + 0x68))
                         (*(undefined4 *)(param_1[iVar6 * 4 + 3] + 4),&uStack_3c,0,0);
    if ((local_4c != 0) && ((local_4c != 0x90321 && (local_4c != 0x90317)))) {
      if (local_4c == -0x7ff6fce8) {
        *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x34) = 1;
        if (*param_5 == 0) {
          *param_5 = 0x51;
        }
        FUN_100d8ae0(uVar1,"schannel: failed to decrypt data, need more data\n");
      }
      else {
        *param_5 = 0x38;
        uVar4 = FUN_100c8280(param_1,local_4c);
        FUN_100d8ae0(uVar1,"schannel: failed to read data from server: %s\n",uVar4);
      }
      goto LAB_100e248f;
    }
    if (iStack_20 == 1) {
      FUN_100d8ae0(uVar1,"schannel: decrypted data length: %lu\n",uStack_24);
      uVar7 = uStack_24;
      if (uStack_24 < 0x401) {
        uVar7 = 0x400;
      }
      iVar3 = param_1[iVar6 * 4 + 3];
      if (((uint)(*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x28)) < uVar7) ||
         (*(uint *)(iVar3 + 0x20) < param_4)) {
        uVar7 = uVar7 + *(int *)(iVar3 + 0x28);
        if (uVar7 < param_4) {
          uVar7 = param_4;
        }
        iVar3 = (*(code *)PTR__realloc_101554c0)(*(undefined4 *)(iVar3 + 0x30),uVar7);
        if (iVar3 == 0) {
          *param_5 = 0x1b;
          FUN_100d8ba0(uVar1,"schannel: unable to re-allocate memory");
          goto LAB_100e248f;
        }
        *(int *)(param_1[iVar6 * 4 + 3] + 0x30) = iVar3;
        *(uint *)(param_1[iVar6 * 4 + 3] + 0x20) = uVar7;
      }
      if (uStack_24 != 0) {
        puVar8 = puStack_1c;
        puVar9 = (undefined4 *)
                 (*(int *)(param_1[iVar6 * 4 + 3] + 0x30) + *(int *)(param_1[iVar6 * 4 + 3] + 0x28))
        ;
        for (uVar7 = uStack_24 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uStack_24 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(int *)(param_1[iVar6 * 4 + 3] + 0x28) =
             *(int *)(param_1[iVar6 * 4 + 3] + 0x28) + uStack_24;
      }
      FUN_100d8ae0(uVar1,"schannel: decrypted data added: %zu\n",uStack_24);
      FUN_100d8ae0(uVar1,"schannel: decrypted data cached: offset %zu length %zu\n",
                   *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x28),
                   *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x20));
    }
    if ((iStack_8 == 5) && (uStack_c != 0)) {
      FUN_100d8ae0(uVar1,"schannel: encrypted data length: %lu\n",uStack_c);
      uVar7 = *(uint *)(param_1[iVar6 * 4 + 3] + 0x24);
      if (uStack_c < uVar7) {
        pvVar2 = *(void **)(param_1[iVar6 * 4 + 3] + 0x2c);
        _memmove(pvVar2,(void *)((int)pvVar2 + (uVar7 - uStack_c)),uStack_c);
        *(uint *)(param_1[iVar6 * 4 + 3] + 0x24) = uStack_c;
      }
      FUN_100d8ae0(uVar1,"schannel: encrypted data cached: offset %zu length %zu\n",
                   *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x24),
                   *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x1c));
    }
    else {
      *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x24) = 0;
    }
    if (local_4c == 0x90321) {
      FUN_100d8ae0(uVar1,"schannel: remote party requests renegotiation\n");
      if ((*param_5 != 0) && (*param_5 != 0x51)) {
        FUN_100d8ae0(uVar1,"schannel: can\'t renogotiate, an error is pending\n");
        goto LAB_100e248f;
      }
      if (*(int *)(param_1[iVar6 * 4 + 3] + 0x24) != 0) {
        *param_5 = 0x38;
        FUN_100d8ae0(uVar1,"schannel: can\'t renogotiate, encrypted data available\n");
        goto LAB_100e248f;
      }
      FUN_100d8ae0(uVar1,"schannel: renegotiating SSL/TLS connection\n");
      param_1[iVar6 * 4 + 1] = 1;
      param_1[iVar6 * 4 + 2] = 3;
      iVar3 = FUN_100e2a90(param_1,param_2,0,&local_40);
      *param_5 = iVar3;
      if (iVar3 != 0) {
        FUN_100d8ae0(uVar1,"schannel: renegotiation failed\n");
        goto LAB_100e248f;
      }
      local_4c = 0;
      FUN_100d8ae0(uVar1,"schannel: SSL/TLS connection renegotiated\n");
    }
    else if (local_4c == 0x90317) {
      *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x44) = 1;
      if (*(int *)(param_1[iVar6 * 4 + 3] + 0x48) == 0) {
        *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x48) = 1;
        FUN_100d8ae0(uVar1,"schannel: server closed the connection\n");
      }
      goto LAB_100e248f;
    }
    iVar3 = *(int *)(param_1[iVar6 * 4 + 3] + 0x24);
  }
  FUN_100d8ae0(uVar1,"schannel: encrypted data buffer: offset %zu length %zu\n",
               *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x24),
               *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x1c));
  FUN_100d8ae0(uVar1,"schannel: decrypted data buffer: offset %zu length %zu\n",
               *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x28),
               *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x20));
LAB_100e248f:
  FUN_100d8ae0(uVar1,"schannel: schannel_recv cleanup\n");
  if ((((param_4 != 0) && (iVar3 = param_1[iVar6 * 4 + 3], *(int *)(iVar3 + 0x28) == 0)) &&
      (*(int *)(iVar3 + 0x48) != 0)) && (*(int *)(iVar3 + 0x44) == 0)) {
    iVar3 = FUN_100df9f0(5,0,2,2);
    if ((iVar3 == 0) || (local_4c != 0)) {
      *param_5 = 0x38;
      FUN_100d8ae0(uVar1,"schannel: server closed abruptly (missing close_notify)\n");
    }
    else {
      *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x44) = 1;
    }
  }
  iVar3 = *param_5;
  if ((iVar3 != 0) && (iVar3 != 0x51)) {
    *(int *)(param_1[iVar6 * 4 + 3] + 0x40) = iVar3;
  }
  iVar3 = param_1[iVar6 * 4 + 3];
  uVar7 = *(uint *)(iVar3 + 0x28);
  if (param_4 < *(uint *)(iVar3 + 0x28)) {
    uVar7 = param_4;
  }
  if (uVar7 != 0) {
    puVar8 = *(undefined4 **)(iVar3 + 0x30);
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_3 = *puVar8;
      puVar8 = puVar8 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    pvVar2 = *(void **)(param_1[iVar6 * 4 + 3] + 0x30);
    _memmove(pvVar2,(void *)(uVar7 + (int)pvVar2),*(int *)(param_1[iVar6 * 4 + 3] + 0x28) - uVar7);
    *(uint *)(param_1[iVar6 * 4 + 3] + 0x28) = *(int *)(param_1[iVar6 * 4 + 3] + 0x28) - uVar7;
    FUN_100d8ae0(uVar1,"schannel: decrypted data returned %zu\n",uVar7);
    FUN_100d8ae0(uVar1,"schannel: decrypted data buffer: offset %zu length %zu\n",
                 *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x28),
                 *(undefined4 *)(param_1[iVar6 * 4 + 3] + 0x20));
    *param_5 = 0;
    return uVar7;
  }
  if ((*param_5 == 0) && (*(int *)(iVar3 + 0x48) == 0)) {
    *param_5 = 0x51;
  }
  if (param_4 == 0) {
    *param_5 = 0;
  }
  return -(uint)(*param_5 != 0);
}


/* END FUNCTION 0x100e1fa0 */
