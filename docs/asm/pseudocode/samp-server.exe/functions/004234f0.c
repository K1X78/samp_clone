/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004234f0
 * Name: FUN_004234f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004234f0(uint param_1,undefined4 *param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    iVar1 = FUN_0041d790();
    return iVar1;
  }
  iVar1 = *(int *)(in_EAX + 0x24);
  if ((iVar1 == 0) || (iVar1 == 0xd)) {
    iVar1 = FUN_0040a180(param_1,1,param_2);
  }
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)*param_2;
    if ((puVar4[4] != 0) && (param_3 == 0)) {
      return 0;
    }
    puVar4[4] = in_EAX;
    if ((uVar3 < 0x80000000) && (uVar3 != DAT_004ca204 / *(int *)(in_EAX + 0x84) + 1U)) {
      iVar1 = FUN_00414010(&param_1);
      if (iVar1 == 0) {
        if ((((*(char *)(in_EAX + 0xd) == '\0') && ((int)uVar3 <= (int)param_1)) && (param_3 == 0))
           && (**(int **)(in_EAX + 0x38) != 0)) {
          iVar1 = FUN_00423250();
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          if (uVar3 <= *(uint *)(in_EAX + 0x88)) {
            if (param_3 != 0) {
              FUN_00407d90();
              if (uVar3 <= *(uint *)(in_EAX + 0x1c)) {
                FUN_00413480(*(uint **)(in_EAX + 0x34),uVar3);
              }
              FUN_00413ad0(uVar3);
              FUN_00407da0();
            }
            uVar3 = *(uint *)(in_EAX + 0x84);
            puVar4 = (undefined4 *)*puVar4;
            for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar4 = 0;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
            return 0;
          }
          iVar1 = 0xd;
        }
      }
    }
    else {
      iVar1 = FUN_0041d790();
    }
    FUN_0040a340();
  }
  FUN_00427040(in_EAX);
  *param_2 = 0;
  return iVar1;
}


/* END FUNCTION 0x004234f0 */
