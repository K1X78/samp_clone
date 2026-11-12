/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008110
 * Name: FUN_10008110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10008110(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[2];
  if (*param_1 < (int)(uVar2 + 1)) {
    return 0;
  }
  uVar3 = uVar2 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  bVar1 = *(byte *)(((int)uVar2 >> 3) + param_1[3]);
  param_1[2] = uVar2 + 1;
  if (((byte)(0x80 >> ((byte)uVar3 & 0x1f)) & bVar1) != 0) {
    *param_2 = 1;
    return 1;
  }
  *param_2 = 0;
  return 1;
}


/* END FUNCTION 0x10008110 */
