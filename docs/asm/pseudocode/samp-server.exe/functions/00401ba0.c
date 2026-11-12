/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401ba0
 * Name: FUN_00401ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00401ba0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int local_4;
  
  iVar1 = *param_1;
  uVar3 = CONCAT22((short)((uint)this >> 0x10),*(short *)(iVar1 + 10));
  local_4 = (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x24)) / (int)*(short *)(iVar1 + 10);
  iVar5 = 0;
  piVar6 = (int *)(*(int *)(iVar1 + 0x24) + iVar1);
  if (0 < local_4) {
    do {
      if (*piVar6 == 0) {
        if (param_2 != (int *)0x0) {
          if ((short)uVar3 == 8) {
            pbVar4 = (byte *)(piVar6[1] + iVar1);
          }
          else {
            pbVar4 = (byte *)(piVar6 + 1);
          }
          iVar2 = FUN_00401b20(uVar3,pbVar4,param_2,param_3);
          uVar3 = extraout_ECX;
          if (iVar2 != 0) {
            *piVar6 = iVar2;
            goto LAB_00401c04;
          }
        }
        iVar5 = 0x13;
      }
LAB_00401c04:
      uVar3 = CONCAT22((short)((uint)uVar3 >> 0x10),*(short *)(iVar1 + 10));
      piVar6 = (int *)((int)piVar6 + (int)*(short *)(iVar1 + 10));
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  param_1[10] = param_1[10] | 0x1000;
  return 0;
}


/* END FUNCTION 0x00401ba0 */
