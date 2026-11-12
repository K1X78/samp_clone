/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419360
 * Name: FUN_00419360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_00419360(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *in_EAX;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_8;
  
  iVar7 = *in_EAX;
  iVar1 = in_EAX[4];
  local_8 = 0;
  uVar5 = *(uint *)(iVar1 + 0x24);
  if (*(uint *)(iVar1 + 0x24) == 0) {
    if (*(char *)(iVar1 + 0xc) != '\0') {
      return 3;
    }
    FUN_0040a370((int)in_EAX);
    iVar4 = FUN_0040b050();
    if ((iVar4 == 0) || (iVar4 = FUN_0040b000(), iVar4 != 0)) {
      if ((*(int *)(iVar1 + 0x34) == 0) &&
         (((*(char *)(iVar1 + 5) != '\x02' &&
           (bVar3 = FUN_0040b4a0(iVar1), CONCAT31(extraout_var,bVar3) == 0)) &&
          (local_8 = FUN_00419290(), local_8 != 0)))) {
        return local_8;
      }
      *(undefined1 *)(iVar1 + 0xf) = 1;
      iVar4 = FUN_0040b050();
      if ((iVar4 == 0) && (**(int **)(iVar1 + 0x3c) != 0)) {
        if (*(uint *)(iVar1 + 0x1c) < (uint)in_EAX[3]) {
          if ((*(char *)(iVar1 + 0x11) == '\0') && (*(char *)(iVar1 + 8) == '\0')) {
            *(byte *)(in_EAX + 5) = *(byte *)(in_EAX + 5) | 4;
            *(undefined1 *)(iVar1 + 0x10) = 1;
          }
        }
        else {
          FUN_0040b4d0(iVar1,iVar7);
          uVar5 = FUN_0040b0a0();
          if (uVar5 == 0) {
            uVar5 = FUN_00407af0();
            uVar2 = *(uint *)(iVar1 + 0x48);
            uVar6 = *(int *)(iVar1 + 0x84) + 4;
            *(uint *)(iVar1 + 0x48) = uVar2 + uVar6;
            *(uint *)(iVar1 + 0x4c) =
                 *(int *)(iVar1 + 0x4c) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar2,uVar6);
            if (uVar5 == 0) {
              uVar5 = FUN_0040b0a0();
              uVar2 = *(uint *)(iVar1 + 0x48);
              *(uint *)(iVar1 + 0x48) = uVar2 + 4;
              *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + (uint)(0xfffffffb < uVar2);
            }
          }
          if (*(char *)(iVar1 + 8) == '\0') {
            *(ushort *)(in_EAX + 5) = *(ushort *)(in_EAX + 5) | 4;
            *(undefined1 *)(iVar1 + 0x10) = 1;
          }
          if (uVar5 != 0) {
            return uVar5;
          }
          *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
          local_8 = FUN_00413480(*(uint **)(iVar1 + 0x34),in_EAX[3]);
          uVar5 = FUN_00413ad0(in_EAX[3]);
          local_8 = local_8 | uVar5;
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      iVar7 = FUN_0040b000();
      if (iVar7 != 0) {
        local_8 = FUN_00419210((int)in_EAX);
      }
    }
    else {
      *(undefined1 *)(iVar1 + 0xf) = 1;
    }
    uVar5 = local_8;
    if (*(uint *)(iVar1 + 0x18) < (uint)in_EAX[3]) {
      *(int *)(iVar1 + 0x18) = in_EAX[3];
    }
  }
  return uVar5;
}


/* END FUNCTION 0x00419360 */
