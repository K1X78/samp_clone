/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012d70
 * Name: FUN_10012d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10012d70(int *param_1,float param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  int local_3c;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_3;
  _DAT_10156b5c = *param_3;
  _DAT_10156b60 = param_3[1];
  _DAT_10156b64 = param_3[2];
  _DAT_10156b48 = *param_4;
  _DAT_10156b4c = param_4[1];
  _DAT_10156b50 = param_4[2];
  local_8 = 0x3e800000;
  _DAT_10156b68 = 0x3e800000;
  _DAT_10156b6c = local_4;
  local_1c = 0x3e800000;
  _DAT_10156b54 = 0x3e800000;
  _DAT_10156b58 = local_18;
  uVar4 = 0xffff;
  local_3c = 0xffff;
  param_3 = (undefined4 *)0x0;
  if (-1 < *param_1) {
    piVar7 = param_1 + 0x835;
    local_28 = _DAT_10156b48;
    local_24 = _DAT_10156b4c;
    local_20 = _DAT_10156b50;
    local_14 = _DAT_10156b5c;
    local_10 = _DAT_10156b60;
    local_c = _DAT_10156b64;
    do {
      if (piVar7[-0x834] != 0) {
        iVar1 = *piVar7;
        fVar8 = (float10)FUN_1009f0f0(*puVar2,puVar2[1],puVar2[2]);
        if (iVar1 != 0) {
          iVar5 = FUN_100a79c0();
          if (iVar5 != 0) {
            iVar5 = FUN_1009ee70();
            if ((iVar5 != 0x4b64) && ((float)fVar8 < param_2)) {
              uVar4 = FUN_1009ee70();
              iVar5 = FUN_100b42d0(uVar4);
              if (iVar5 != 0) {
                iVar6 = FUN_1009f4a0();
                if ((iVar6 == 0) || (*(int *)(iVar5 + 0x2c) == 0)) {
                  FUN_1009ed30(local_34);
                  cVar3 = FUN_100b6110(&local_14,&local_28,*(undefined4 *)(iVar1 + 0x40),local_34,
                                       0x3f800000,1);
                }
                else {
                  cVar3 = FUN_1009fa40(&local_14,&local_28,0);
                }
                if (cVar3 != '\0') {
                  local_3c = (int)param_3;
                  param_2 = (float)fVar8;
                }
              }
            }
          }
        }
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
      piVar7 = piVar7 + 1;
    } while ((int)param_3 <= *param_1);
    uVar4 = CONCAT22((short)((uint)param_3 >> 0x10),(undefined2)local_3c);
  }
  return uVar4;
}


/* END FUNCTION 0x10012d70 */
