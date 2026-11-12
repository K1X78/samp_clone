/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425560
 * Name: FUN_00425560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00425560(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  byte *pbVar3;
  int *in_EAX;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_14 = 0;
  local_10 = 1;
  uVar4 = FUN_00407b40();
  if ((uVar4 == 0) && (local_8 != 0 || local_4 != 0)) {
    pcVar2 = (char *)in_EAX[0x28];
    uVar4 = FUN_0040b0e0(in_EAX[0xf],pcVar2,*(int *)(*in_EAX + 8) + 1);
    if ((uVar4 == 0) &&
       (((*pcVar2 == '\0' || (uVar4 = FUN_00407c50(), uVar4 == 0)) && (local_10 != 0)))) {
      puVar1 = (uint *)(in_EAX + 0x12);
      *puVar1 = 0;
      in_EAX[0x13] = 0;
      local_c = param_1;
      uVar4 = FUN_00418ff0(param_1,local_8,local_4,&local_18,&local_14);
      while (uVar4 == 0) {
        if (local_18 == 0xffffffff) {
          uVar7 = __alldiv(local_8 - in_EAX[0x1e],local_4 - (uint)(local_8 < (uint)in_EAX[0x1e]),
                           in_EAX[0x21] + 8U,(int)(in_EAX[0x21] + 8U) >> 0x1f);
          local_18 = (uint)uVar7;
        }
        if ((local_18 == 0) && (param_1 == 0)) {
          uVar4 = *puVar1;
          if ((in_EAX[0x1e] + in_EAX[0x14] == uVar4) &&
             (in_EAX[0x15] + (uint)CARRY4(in_EAX[0x1e],in_EAX[0x14]) == in_EAX[0x13])) {
            uVar7 = __alldiv(local_8 - uVar4,(local_4 - in_EAX[0x13]) - (uint)(local_8 < uVar4),
                             in_EAX[0x21] + 8U,(int)(in_EAX[0x21] + 8U) >> 0x1f);
            local_18 = (uint)uVar7;
          }
        }
        uVar5 = local_14;
        if ((*puVar1 == in_EAX[0x1e]) && (in_EAX[0x13] == 0)) {
          uVar4 = FUN_0040b500(local_14);
          if (uVar4 != 0) goto LAB_00425775;
          in_EAX[6] = uVar5;
        }
        uVar5 = 0;
        if (local_18 != 0) {
          do {
            if (local_c != 0) {
              FUN_00413a30();
              local_c = 0;
            }
            uVar4 = FUN_00425250(in_EAX,puVar1,(uint *)0x0,1,0);
            if (uVar4 != 0) {
              if (uVar4 != 0x65) {
                bVar6 = uVar4 == 0x20a;
                goto LAB_00425771;
              }
              *puVar1 = local_8;
              in_EAX[0x13] = local_4;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_18);
        }
        uVar4 = FUN_00418ff0(param_1,local_8,local_4,&local_18,&local_14);
      }
      bVar6 = uVar4 == 0x65;
LAB_00425771:
      if (bVar6) {
        uVar4 = 0;
      }
    }
  }
LAB_00425775:
  *(undefined1 *)((int)in_EAX + 0x12) = *(undefined1 *)((int)in_EAX + 0xb);
  if (uVar4 == 0) {
    pbVar3 = (byte *)in_EAX[0x28];
    uVar4 = FUN_0040b0e0(in_EAX[0xf],pbVar3,*(int *)(*in_EAX + 8) + 1);
    if (uVar4 == 0) {
      if (((char)in_EAX[2] == '\0') && (3 < *(byte *)((int)in_EAX + 0xe))) {
        uVar4 = FUN_00407b30();
      }
      if (((uVar4 == 0) &&
          (((((char)in_EAX[2] != '\0' || (*(byte *)((int)in_EAX + 0xe) < 4)) ||
            (uVar4 = FUN_00407b30(), uVar4 == 0)) &&
           ((uVar4 = FUN_00413bd0((uint)(*pbVar3 != 0)), uVar4 == 0 && (*pbVar3 != 0)))))) &&
         (local_10 != 0)) {
        uVar4 = FUN_00413d40(pbVar3);
      }
    }
  }
  FUN_0040b5a0();
  return uVar4;
}


/* END FUNCTION 0x00425560 */
