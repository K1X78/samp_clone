/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a31a6
 * Name: __Strftime_mt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
__Strftime_mt(int param_1,byte *param_2,uint param_3,byte *param_4,undefined2 *param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = param_6;
  if (param_6 == 0) {
    uVar2 = *(uint *)(param_1 + 0x4c);
  }
  if (param_3 != 0) {
    param_6 = param_3;
    pbVar4 = param_4;
    if (param_3 == 0) {
LAB_004a3255:
      bVar6 = param_6 == 0;
    }
    else {
      do {
        bVar1 = *pbVar4;
        if (bVar1 == 0) break;
        if (bVar1 == 0x25) {
          pbVar5 = pbVar4 + 1;
          bVar1 = *pbVar5;
          if (bVar1 == 0x23) {
            pbVar5 = pbVar4 + 2;
          }
          iVar3 = __expandtime(&param_2,param_1,param_5,uVar2,(uint)(bVar1 == 0x23));
          if (iVar3 == 0) goto LAB_004a3255;
        }
        else {
          if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) != 0) &&
             (1 < param_6)) {
            pbVar4 = pbVar4 + 1;
            if (*pbVar4 == 0) goto LAB_004a3255;
            *param_2 = bVar1;
            param_2 = param_2 + 1;
            param_6 = param_6 - 1;
          }
          *param_2 = *pbVar4;
          param_2 = param_2 + 1;
          param_6 = param_6 - 1;
          pbVar5 = pbVar4;
        }
        pbVar4 = pbVar5 + 1;
      } while (param_6 != 0);
      bVar6 = true;
      if (param_6 != 0) {
        *param_2 = 0;
        return param_3 - param_6;
      }
    }
    if (bVar6) {
      param_2 = param_2 + -1;
    }
    *param_2 = 0;
  }
  return 0;
}


/* END FUNCTION 0x004a31a6 */
