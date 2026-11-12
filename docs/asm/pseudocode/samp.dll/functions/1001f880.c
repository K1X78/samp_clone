/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f880
 * Name: FUN_1001f880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001f880(uint *param_1,int *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_1001f630(param_3);
  while( true ) {
    if (param_3 < 1) {
      return;
    }
    uVar4 = param_2[2];
    param_3 = param_3 + -1;
    iVar1 = uVar4 + 1;
    if (*param_2 < iVar1) break;
    uVar5 = *param_1;
    if ((uVar5 & 7) == 0) {
      uVar5 = uVar4 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      bVar3 = *(byte *)(((int)uVar4 >> 3) + param_2[3]);
      param_2[2] = iVar1;
      if ((bVar3 & (byte)(0x80 >> ((byte)uVar5 & 0x1f))) == 0) {
        *(undefined1 *)(((int)*param_1 >> 3) + param_1[3]) = 0;
      }
      else {
        *(undefined1 *)(((int)*param_1 >> 3) + param_1[3]) = 0x80;
      }
    }
    else {
      uVar6 = uVar4 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      bVar3 = *(byte *)(((int)uVar4 >> 3) + param_2[3]);
      param_2[2] = iVar1;
      if ((bVar3 & (byte)(0x80 >> ((byte)uVar6 & 0x1f))) != 0) {
        pbVar2 = (byte *)(((int)*param_1 >> 3) + param_1[3]);
        *pbVar2 = *pbVar2 | (byte)(0x80 >> (sbyte)(uVar5 & 7));
      }
    }
    *param_1 = *param_1 + 1;
  }
  return;
}


/* END FUNCTION 0x1001f880 */
