/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045110
 * Name: FUN_10045110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10045110(uint param_1,int *param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint local_4;
  
  if (*param_2 - param_2[2] < 0x10) {
    return 0;
  }
  local_4 = param_1;
  iVar2 = FUN_10044ec0();
  *(uint *)(iVar2 + 0x1b) = param_3;
  *(undefined4 *)(iVar2 + 0x1f) = param_4;
  cVar1 = FUN_1001f470(iVar2,0x10,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_1001f470(&param_2,*(undefined4 *)(param_1 + 0x403),1);
    uVar4 = (uint)param_2 & 0xff;
    *(uint *)(iVar2 + 10) = uVar4;
    if ((5 < (byte)param_2) && (cVar1 != '\0')) {
      if ((uVar4 == 7) || ((uVar4 == 10 || (uVar4 == 9)))) {
        cVar1 = FUN_1001f470(iVar2 + 0xe,5,1);
        if (cVar1 == '\0') goto LAB_10045219;
        cVar1 = FUN_1001f470(iVar2 + 0xf,0x10,1);
        if (cVar1 == '\0') goto LAB_10045219;
      }
      param_3 = param_3 & 0xffffff00;
      cVar1 = FUN_10008110(&param_3);
      if (cVar1 != '\0') {
        if ((char)param_3 == '\0') {
          *(undefined4 *)(iVar2 + 0x13) = 0;
          *(undefined4 *)(iVar2 + 0x17) = 0;
        }
        else {
          cVar1 = FUN_1001f470(iVar2 + 0x11,0x10,1);
          if (cVar1 == '\0') goto LAB_10045219;
          cVar1 = FUN_1001f530(iVar2 + 0x13,0x20,1);
          if (cVar1 == '\0') goto LAB_10045219;
          cVar1 = FUN_1001f530(iVar2 + 0x17,0x20,1);
          if (cVar1 == '\0') goto LAB_10045219;
        }
        cVar1 = FUN_1001f530(&local_4,0x10,1);
        if (cVar1 != '\0') {
          uVar4 = local_4 & 0xffff;
          *(uint *)(iVar2 + 0x2b) = uVar4;
          if ((uVar4 != 0) && (uVar4 = uVar4 + 7 >> 3, uVar4 < 0x5d4)) {
            pvVar3 = operator_new(uVar4);
            *(void **)(iVar2 + 0x2f) = pvVar3;
            *(undefined1 *)(((*(int *)(iVar2 + 0x2b) + 7U >> 3) - 1) + (int)pvVar3) = 0;
            cVar1 = FUN_1001fa30(*(undefined4 *)(iVar2 + 0x2f),*(int *)(iVar2 + 0x2b) + 7U >> 3);
            if (cVar1 == '\0') {
              _free(*(void **)(iVar2 + 0x2f));
              FUN_1002e630(iVar2);
              return 0;
            }
            return iVar2;
          }
        }
      }
    }
  }
LAB_10045219:
  FUN_1002e630(iVar2);
  return 0;
}


/* END FUNCTION 0x10045110 */
