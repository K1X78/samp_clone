/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087c50
 * Name: FUN_10087c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10087c50(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (param_2 == (byte *)0x0) {
    return -1;
  }
  if (param_3 < *(int *)(param_1 + 0x259)) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x255) + param_3 * 4);
    do {
      pbVar2 = (byte *)*puVar5;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_10087caa:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10087caf;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_10087caa;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10087caf:
      if (iVar3 == 0) {
        return param_3;
      }
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    } while (param_3 < *(int *)(param_1 + 0x259));
  }
  return -1;
}


/* END FUNCTION 0x10087c50 */
