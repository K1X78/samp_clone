/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec990
 * Name: FUN_100ec990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100ed1bd) */
/* WARNING: Removing unreachable block (ram,0x100ecb6f) */
/* WARNING: Removing unreachable block (ram,0x100ecb77) */
/* WARNING: Removing unreachable block (ram,0x100ed060) */
/* WARNING: Removing unreachable block (ram,0x100ecb9a) */

int FUN_100ec990(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *unaff_ESI;
  int *unaff_EDI;
  bool bVar7;
  undefined8 uVar8;
  uint local_1c;
  int local_18;
  int local_c;
  int local_4;
  
  *param_3 = 0;
  local_18 = 0;
  local_4 = 0;
  local_c = 100;
  *param_4 = 0;
  do {
    uVar5 = *unaff_ESI;
    uVar6 = *(uint *)(param_1 + 0x4d0);
    if (((uVar5 & unaff_ESI[1]) != 0xffffffff) && (unaff_ESI[0x12] == 0)) {
      uVar1 = uVar5 - unaff_ESI[8];
      iVar4 = (unaff_ESI[1] - unaff_ESI[9]) - (uint)(uVar5 < unaff_ESI[8]);
      if ((iVar4 < 1) && ((iVar4 < 0 || (uVar1 < uVar6)))) {
        uVar6 = uVar1;
      }
    }
    if (uVar6 == 0) {
      local_1c = 0;
    }
    else {
      local_18 = FUN_100d8800();
      if (local_18 == 0x51) goto LAB_100ed1cc;
      if (0 < local_18) {
        return local_18;
      }
    }
    if (((unaff_ESI[8] == 0 && unaff_ESI[9] == 0) && (unaff_ESI[10] == 0 && unaff_ESI[0xb] == 0)) &&
       (FUN_100e2ff0(param_1,7), 0 < (int)unaff_ESI[0x21])) {
      uVar8 = FUN_100d8500();
      *(undefined8 *)(unaff_ESI + 0x1f) = uVar8;
    }
    *param_2 = *param_2 | 1;
    if ((local_1c == 0) && (unaff_ESI[0x25] == 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
      if ((int)local_1c < 1) {
        unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffe;
LAB_100ed1cc:
        if (local_c < 1) {
          unaff_EDI[0x184] = 1;
          *param_4 = 1;
        }
        if ((((byte)unaff_ESI[0x28] & 3) == 2) && (unaff_EDI[0xa1] != 0)) {
          FUN_100d8ae0(param_1,"we are done reading and this is set to close, stop send\n");
          unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffd;
        }
        return 0;
      }
    }
    *(undefined1 *)(local_1c + unaff_ESI[0x26]) = 0;
    unaff_ESI[0x17] = unaff_ESI[0x26];
    if (*(code **)(unaff_EDI[200] + 0x34) != (code *)0x0) {
      iVar4 = (**(code **)(unaff_EDI[200] + 0x34))(param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_18 = 0;
    }
    if (unaff_ESI[0x12] != 0) {
      iVar4 = FUN_100e7a40(param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      if ((((*(code **)(unaff_EDI[200] + 0x34) != (code *)0x0) && ((int)unaff_ESI[5] < 1)) &&
          (((int)unaff_ESI[5] < 0 || (unaff_ESI[4] == 0)))) &&
         ((0 < (int)local_1c && (iVar4 = (**(code **)(unaff_EDI[200] + 0x34))(param_1), iVar4 != 0))
         )) {
        return iVar4;
      }
      local_18 = 0;
    }
    if (((unaff_ESI[0x17] != 0) && (unaff_ESI[0x12] == 0)) && ((0 < (int)local_1c || (bVar7)))) {
      if (*(int *)(param_1 + 0x53c) != 0) {
        FUN_100dc080();
        *param_3 = 1;
        return 8;
      }
      if (((unaff_ESI[0x25] == 0) && (!bVar7)) &&
         ((*(uint *)(unaff_EDI[200] + 0x40) & 0x40003) != 0)) {
        if (*(int *)(param_1 + 0x124) != 0) {
          if (unaff_EDI[0xa1] != 0) {
            unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffe;
            *param_3 = 1;
            return 0;
          }
          unaff_ESI[0x2a] = 1;
          FUN_100d8ae0(param_1,"Ignoring the response-body\n");
        }
        if (((*(int *)(param_1 + 0x4ae8) != 0 || *(int *)(param_1 + 0x4aec) != 0) &&
            (unaff_ESI[0x1b] == 0)) && ((*(int *)(param_1 + 1000) == 1 && (unaff_ESI[0x2a] == 0))))
        {
          if ((*unaff_ESI == *(uint *)(param_1 + 0x4ae8)) &&
             (unaff_ESI[1] == *(uint *)(param_1 + 0x4aec))) {
            FUN_100d8ae0(param_1,"The entire document is already downloaded");
            FUN_100dc080();
            unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffe;
            *param_3 = 1;
            return 0;
          }
          FUN_100d8ba0(param_1,"HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
          return 0x21;
        }
        if (((*(int *)(param_1 + 0x3e0) != 0) && (*(int *)(param_1 + 0x4ae4) == 0)) &&
           (iVar4 = FUN_100ec930(param_1,unaff_ESI[0x24]), iVar4 == 0)) {
          *param_3 = 1;
          *(undefined4 *)(param_1 + 0x4b50) = 0x130;
          FUN_100d8ae0(param_1,"Simulate a HTTP 304 response!\n");
          FUN_100dc080();
          return 0;
        }
      }
      unaff_ESI[0x25] = unaff_ESI[0x25] + 1;
      if (*(int *)(param_1 + 0x548) != 0) {
        if (unaff_ESI[0x13] == 0) {
          uVar5 = unaff_ESI[0x17];
        }
        else {
          FUN_100d89b0(param_1,3,*(undefined4 *)(param_1 + 0x84c),unaff_ESI[0x16]);
          if (unaff_ESI[0x13] != 1) goto LAB_100ecd21;
          uVar5 = unaff_ESI[0x17];
        }
        FUN_100d89b0(param_1,3,uVar5,local_1c);
      }
LAB_100ecd21:
      if (unaff_ESI[0x30] != 0) {
        iVar4 = FUN_100f1580();
        if (0 < iVar4) {
          if (iVar4 != 4) {
            uVar3 = FUN_100f19d0(iVar4);
            FUN_100d8ba0(param_1,"%s in chunked-encoding",uVar3);
            return 0x38;
          }
          FUN_100d8ba0(param_1,"Failed writing data");
          return 0x17;
        }
        if (iVar4 == -1) {
          unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffe;
          iVar4 = unaff_EDI[0xe];
          if (iVar4 != 0) {
            FUN_100d8ae0(*unaff_EDI,"Leftovers after chunking: %zu bytes\n",iVar4);
            iVar2 = FUN_100d5880(*(undefined4 *)(*unaff_EDI + 100),1);
            if (iVar2 != 0) {
              FUN_100d8ae0(*unaff_EDI,"Rewinding %zu bytes\n",iVar4);
              unaff_EDI[0xef] = unaff_EDI[0xef] - iVar4;
              unaff_EDI[0xb9] = 1;
            }
          }
        }
      }
      if ((unaff_ESI[0x13] != 0) && (unaff_ESI[0x2a] == 0)) {
        uVar5 = unaff_ESI[8];
        unaff_ESI[8] = uVar5 + unaff_ESI[0x16];
        unaff_ESI[9] = unaff_ESI[9] + (uint)CARRY4(uVar5,unaff_ESI[0x16]);
      }
      uVar5 = unaff_ESI[5];
      if ((unaff_ESI[4] != 0xffffffff) || (uVar5 != 0xffffffff)) {
        iVar4 = ((int)local_1c >> 0x1f) + unaff_ESI[9] + (uint)CARRY4(local_1c,unaff_ESI[8]);
        if (((int)uVar5 <= iVar4) &&
           (((int)uVar5 < iVar4 || (unaff_ESI[4] <= local_1c + unaff_ESI[8])))) {
          local_4 = (local_1c - unaff_ESI[4]) + unaff_ESI[8];
          if ((local_4 != 0) && (unaff_ESI[0x2a] == 0)) {
            iVar4 = FUN_100d5880(*(undefined4 *)(*unaff_EDI + 100),1);
            if (iVar4 == 0) {
              FUN_100d8ae0(param_1,
                           "Excess found in a non pipelined read: excess = %zu, size = %I64d, maxdownload = %I64d, bytecount = %I64d\n"
                           ,local_4,*unaff_ESI,unaff_ESI[1],unaff_ESI[4],unaff_ESI[5],unaff_ESI[8],
                           unaff_ESI[9]);
            }
            else {
              FUN_100d8ae0(param_1,
                           "Rewinding stream by : %zu bytes on url %s (size = %I64d, maxdownload = %I64d, bytecount = %I64d, nread = %zd)\n"
                           ,local_4,*(undefined4 *)(param_1 + 0x4ad4),*unaff_ESI,unaff_ESI[1],
                           unaff_ESI[4],unaff_ESI[5],unaff_ESI[8],unaff_ESI[9],local_1c);
              unaff_EDI[0xef] = unaff_EDI[0xef] - local_4;
              unaff_EDI[0xb9] = 1;
            }
          }
          local_1c = unaff_ESI[4] - unaff_ESI[8];
          if ((int)local_1c < 0) {
            local_1c = 0;
          }
          unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffe;
        }
      }
      uVar6 = unaff_ESI[8] + local_1c;
      uVar5 = unaff_ESI[9] + ((int)local_1c >> 0x1f) + (uint)CARRY4(unaff_ESI[8],local_1c);
      unaff_ESI[8] = uVar6;
      unaff_ESI[9] = uVar5;
      FUN_100e3210(param_1,uVar6,uVar5);
      if (unaff_ESI[0x30] == 0) {
        if (local_1c == 0) {
          if (unaff_ESI[0x13] == 0) {
            if (!bVar7) goto LAB_100ecfe5;
            goto LAB_100ecf10;
          }
LAB_100ecf17:
          if (unaff_ESI[0x2a] == 0) {
            uVar5 = unaff_ESI[5];
            if ((((unaff_ESI[4] & uVar5) == 0xffffffff) || (0 < (int)uVar5)) ||
               ((uVar5 < 0x80000000 && (unaff_ESI[0x16] <= unaff_ESI[4])))) {
              iVar4 = FUN_100d8fc0();
            }
            else {
              iVar4 = FUN_100d8fc0();
            }
            if (iVar4 != 0) {
              return iVar4;
            }
            local_18 = 0;
          }
        }
        else {
LAB_100ecf10:
          if (unaff_ESI[0x13] != 0) goto LAB_100ecf17;
        }
        if ((int)unaff_ESI[0x13] < 2) {
          if ((*(int *)(*unaff_EDI + 0x590) == 0) && (unaff_ESI[0x23] != 0)) {
            local_18 = FUN_100df260();
          }
          else if (unaff_ESI[0x2a] == 0) {
            local_18 = FUN_100d8fc0();
          }
        }
        unaff_ESI[0x13] = 0;
        if (local_18 != 0) {
          return local_18;
        }
      }
    }
LAB_100ecfe5:
    if (((*(int *)(unaff_EDI[200] + 0x34) != 0) && (local_4 != 0)) && (unaff_EDI[0xb9] == 0)) {
      unaff_ESI[0x17] = unaff_ESI[0x17] + local_1c;
      iVar4 = (**(code **)(unaff_EDI[200] + 0x34))(param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      goto LAB_100ed1cc;
    }
    if (bVar7) {
      unaff_ESI[0x28] = unaff_ESI[0x28] & 0xfffffffe;
    }
    if ((((*(byte *)(unaff_EDI[200] + 0x40) & 0x30) == 0) &&
        (iVar4 = thunk_FUN_100e26c0(), iVar4 == 0)) ||
       (iVar4 = local_c + -1, bVar7 = local_c == 0, local_c = iVar4, bVar7)) goto LAB_100ed1cc;
  } while( true );
}


/* END FUNCTION 0x100ec990 */
