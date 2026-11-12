/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044de00
 * Name: FUN_0044de00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0044de00(void *this,byte *param_1,uint param_2)

{
  uint3 uVar2;
  undefined4 uVar1;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar4 = *(uint *)((int)this + 8);
  if ((uVar4 & 7) != 0) {
    uVar1 = FUN_0044da70(this,param_1,param_2 * 8,'\x01');
    return uVar1;
  }
  uVar2 = (uint3)((uint)this >> 8);
  if (*(int *)this < (int)(uVar4 + param_2 * 8)) {
    return (uint)uVar2 << 8;
  }
  pbVar5 = (byte *)(((int)uVar4 >> 3) + *(int *)((int)this + 0xc));
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    param_1 = param_1 + 1;
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 8;
  return CONCAT31(uVar2,1);
}


/* END FUNCTION 0x0044de00 */
