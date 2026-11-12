/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100268c0
 * Name: FUN_100268c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100268c0(int param_1,int param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      FUN_1001faa0(*(undefined4 *)(param_1 + 4 + (uint)*(byte *)(uVar3 + param_2) * 6),
                   *(undefined2 *)(param_1 + 8 + (uint)*(byte *)(uVar3 + param_2) * 6),0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  uVar3 = *param_4 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  if (uVar3 != 0) {
    bVar1 = 8 - (char)uVar3;
    uVar3 = 0;
    puVar2 = (ushort *)(param_1 + 8);
    while (*puVar2 <= (ushort)bVar1) {
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 3;
      if (0xff < uVar3) {
        return;
      }
    }
    FUN_1001faa0(*(undefined4 *)(param_1 + 4 + uVar3 * 6),bVar1,0);
  }
  return;
}


/* END FUNCTION 0x100268c0 */
