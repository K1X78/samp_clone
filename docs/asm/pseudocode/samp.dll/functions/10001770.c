/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001770
 * Name: FUN_10001770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10001770(int *param_1,float param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
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
  
  puVar2 = param_3;
  local_14 = *param_3;
  local_c = param_3[2];
  local_10 = param_3[1];
  local_8 = param_5;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_20 = param_4[2];
  local_1c = param_5;
  uVar4 = 0xffff;
  uVar6 = 0;
  param_3 = (undefined4 *)0x47c35000;
  param_4 = (undefined4 *)0xffff;
  if (-1 < *param_1) {
    param_5 = param_1 + 0x3e9;
    do {
      if (((((*param_5 != 0) && ((ushort)uVar6 < 1000)) && (param_1[(uVar6 & 0xffff) + 0x3e9] != 0))
          && ((iVar1 = param_1[(uVar6 & 0xffff) + 1], iVar1 != 0 &&
              (iVar5 = FUN_1009f210(), iVar5 != 0)))) &&
         (fVar7 = (float10)FUN_1009efd0(), fVar7 < (float10)param_2)) {
        FUN_1009ed30(local_34);
        cVar3 = FUN_100b6110(&local_14,&local_28,*(undefined4 *)(iVar1 + 0x40),local_34,0x3fc00000,1
                            );
        if ((cVar3 != '\0') &&
           (fVar7 = (float10)FUN_1009f0f0(*puVar2,puVar2[1],puVar2[2]),
           fVar7 < (float10)(float)param_3)) {
          param_3 = (undefined4 *)(float)fVar7;
          param_4 = (undefined4 *)uVar6;
        }
      }
      uVar6 = uVar6 + 1;
      param_5 = param_5 + 1;
    } while ((int)uVar6 <= *param_1);
    uVar4 = CONCAT22((short)((uint)*param_1 >> 0x10),param_4._0_2_);
  }
  return uVar4;
}


/* END FUNCTION 0x10001770 */
