/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427120
 * Name: FUN_00427120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00427120(undefined4 param_1,int param_2)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var_00;
  uint uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  uint uVar7;
  int local_c;
  uint local_8;
  uint local_4;
  
  uVar3 = *(uint *)(in_EAX + 0x24);
  if (*(uint *)(in_EAX + 0x24) == 0) {
    if ((*(char *)(in_EAX + 0xd) != '\0') && (*(char *)(in_EAX + 0xf) != '\0')) {
      FUN_0040d150();
      return 0;
    }
    uVar3 = 0;
    if ((*(char *)(in_EAX + 0xe) != '\x05') && (*(char *)(in_EAX + 0xf) != '\0')) {
      bVar1 = FUN_0040b4a0(in_EAX);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        uVar3 = FUN_004270a0();
        if (uVar3 != 0) {
          return uVar3;
        }
        uVar3 = *(uint *)(in_EAX + 0x18);
        uVar4 = *(uint *)(in_EAX + 0x1c);
        local_8 = uVar3;
        if ((uVar3 < uVar4) && (*(char *)(in_EAX + 5) != '\x02')) {
          iVar2 = DAT_004ca204 / *(int *)(in_EAX + 0x84);
          uVar7 = uVar3 + 1;
          *(uint *)(in_EAX + 0x18) = uVar4;
          uVar6 = iVar2 + 1;
          local_4 = uVar6;
          if (uVar7 <= uVar4) {
            do {
              bVar1 = FUN_00409e90(*(uint **)(in_EAX + 0x34));
              if ((CONCAT31(extraout_var_00,bVar1) == 0) && (uVar7 != uVar6)) {
                uVar3 = FUN_004234f0(uVar7,&local_c,0);
                iVar2 = local_c;
                if (uVar3 != 0) {
                  return uVar3;
                }
                uVar4 = FUN_00423650(local_c);
                FUN_00427080(iVar2);
                uVar6 = local_4;
                uVar3 = local_8;
                if (uVar4 != 0) {
                  return uVar4;
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 <= *(uint *)(in_EAX + 0x1c));
          }
          *(uint *)(in_EAX + 0x18) = uVar3;
        }
        uVar3 = FUN_0040b2f0();
        if (uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_0040b760();
        if (uVar3 != 0) {
          return uVar3;
        }
        piVar5 = (int *)FUN_0040a5d0(extraout_ECX_00,*(int **)(in_EAX + 0xa4));
        uVar3 = FUN_00425b00(piVar5);
        if (uVar3 != 0) {
          return uVar3;
        }
        FUN_0040a3b0();
        iVar2 = *(int *)(in_EAX + 0x18);
        if ((iVar2 != *(int *)(in_EAX + 0x20)) &&
           (uVar3 = FUN_0040b500(iVar2 - (uint)(iVar2 == DAT_004ca204 / *(int *)(in_EAX + 0x84) + 1)
                                ), uVar3 != 0)) {
          return uVar3;
        }
        uVar3 = 0;
        if ((*(char *)(in_EAX + 8) == '\0') && (param_2 == 0)) {
          uVar3 = FUN_00407b30();
        }
      }
      else {
        iVar2 = FUN_0040a5d0(extraout_ECX,*(int **)(in_EAX + 0xa4));
        if ((iVar2 == 0) ||
           (uVar3 = FUN_00425830(1,*(undefined4 *)(in_EAX + 0x18),in_EAX,iVar2), uVar3 == 0)) {
          FUN_0040a3b0();
          *(undefined1 *)(in_EAX + 0xe) = 5;
          return 0;
        }
      }
      *(undefined1 *)(in_EAX + 0xe) = 5;
    }
  }
  return uVar3;
}


/* END FUNCTION 0x00427120 */
