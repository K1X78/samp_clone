/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001faa0
 * Name: FUN_1001faa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001faa0(uint *param_1,byte *param_2,int param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (0 < param_3) {
    FUN_1001f630(param_3);
    uVar4 = *param_1 & 7;
    do {
      bVar1 = *param_2;
      if ((param_3 < 8) && (param_4 != '\0')) {
        bVar1 = bVar1 << (8U - (char)param_3 & 0x1f);
      }
      if (uVar4 == 0) {
        *(byte *)(((int)*param_1 >> 3) + param_1[3]) = bVar1;
      }
      else {
        pbVar5 = (byte *)(param_1[3] + ((int)*param_1 >> 3));
        *pbVar5 = *pbVar5 | bVar1 >> (sbyte)uVar4;
        iVar3 = 8 - uVar4;
        if ((iVar3 < 8) && (iVar3 < param_3)) {
          *(byte *)(((int)*param_1 >> 3) + 1 + param_1[3]) = bVar1 << ((byte)iVar3 & 0x1f);
        }
      }
      if (param_3 < 8) {
        uVar2 = *param_1 + param_3;
      }
      else {
        uVar2 = *param_1 + 8;
      }
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
    } while (0 < param_3);
  }
  return;
}


/* END FUNCTION 0x1001faa0 */
