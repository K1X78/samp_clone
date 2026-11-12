/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013c50
 * Name: FUN_10013c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10013c50(int param_1,float param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  local_14 = *param_3;
  local_c = param_3[2];
  local_10 = param_3[1];
  local_8 = param_5;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_20 = param_4[2];
  local_1c = param_5;
  uVar3 = 0xffff;
  uVar6 = 0;
  param_3 = (undefined4 *)0x47c35000;
  param_4 = (undefined4 *)0xffff;
  if (-1 < *(int *)(param_1 + 0x22)) {
    param_5 = (int *)(param_1 + 0xfd6);
    do {
      if (*param_5 != 0) {
        if (((ushort)uVar6 < 0x3ed) &&
           (iVar4 = *(int *)(param_1 + 0x26 + (uVar6 & 0xffff) * 4), iVar4 != 0)) {
          iVar4 = *(int *)(iVar4 + 8);
        }
        else {
          iVar4 = 0;
        }
        iVar4 = *(int *)(iVar4 + 4);
        if (((iVar4 != 0) && (iVar5 = FUN_1009f210(), iVar5 != 0)) &&
           (fVar7 = (float10)FUN_1009efd0(), fVar7 < (float10)param_2)) {
          FUN_1009ed30(local_34);
          cVar2 = FUN_100b6110(&local_14,&local_28,*(undefined4 *)(iVar4 + 0x40),local_34,0x3fc00000
                               ,1);
          if ((cVar2 != '\0') &&
             (fVar7 = (float10)FUN_1009f0f0(*puVar1,puVar1[1],puVar1[2]),
             fVar7 < (float10)(float)param_3)) {
            param_3 = (undefined4 *)(float)fVar7;
            param_4 = (undefined4 *)uVar6;
          }
        }
      }
      uVar6 = uVar6 + 1;
      param_5 = param_5 + 1;
    } while ((int)uVar6 <= *(int *)(param_1 + 0x22));
    uVar3 = CONCAT22((short)((uint)*(int *)(param_1 + 0x22) >> 0x10),param_4._0_2_);
  }
  return uVar3;
}


/* END FUNCTION 0x10013c50 */
