/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d840
 * Name: FUN_0044d840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0044d840(void *this,undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint3 uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 8);
  uVar3 = (uint3)((uint)this >> 8);
  if (*(int *)this < (int)(uVar2 + 1)) {
    return (uint)uVar3 << 8;
  }
  uVar4 = uVar2 & 0x80000007;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
  }
  bVar1 = *(byte *)(((int)uVar2 >> 3) + *(int *)((int)this + 0xc));
  *(uint *)((int)this + 8) = uVar2 + 1;
  if (((byte)(0x80 >> ((byte)uVar4 & 0x1f)) & bVar1) != 0) {
    *param_1 = 1;
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  *param_1 = 0;
  return CONCAT31(uVar3,1);
}


/* END FUNCTION 0x0044d840 */
