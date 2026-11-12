/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408c30
 * Name: FUN_00408c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __thiscall FUN_00408c30(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte local_c [12];
  
  if ((param_2 & 0xff000000) != 0) {
    *(char *)((int)this + 8) = (char)param_1;
    uVar1 = (param_1 >> 8 | param_2 << 0x18) >> 7;
    *(byte *)((int)this + 7) = (byte)(param_1 >> 8) | 0x80;
    uVar2 = (uVar1 | (param_2 >> 8) << 0x19) >> 7;
    *(byte *)((int)this + 6) = (byte)uVar1 | 0x80;
    uVar1 = (uVar2 | (param_2 >> 0xf) << 0x19) >> 7;
    *(byte *)((int)this + 5) = (byte)uVar2 | 0x80;
    uVar2 = (uVar1 | (param_2 >> 0x16) << 0x19) >> 7;
    uVar4 = uVar2 | (param_2 >> 0x1d) << 0x19;
    *(byte *)((int)this + 4) = (byte)uVar1 | 0x80;
    *(byte *)((int)this + 3) = (byte)uVar2 | 0x80;
    *(byte *)((int)this + 2) = (byte)(uVar4 >> 7) | 0x80;
    *(byte *)((int)this + 1) = (byte)(uVar4 >> 0xe) | 0x80;
    *(byte *)this = (byte)(uVar4 >> 0x15) | 0x80;
    return 9;
  }
  iVar6 = 0;
  do {
    iVar5 = iVar6;
    bVar3 = (byte)param_1;
    param_1 = param_1 >> 7 | param_2 << 0x19;
    local_c[iVar5] = bVar3 | 0x80;
    param_2 = param_2 >> 7;
    iVar6 = iVar5 + 1;
  } while (param_1 != 0 || param_2 != 0);
  local_c[0] = local_c[0] & 0x7f;
  for (; -1 < iVar5; iVar5 = iVar5 + -1) {
    param_2 = CONCAT31((int3)(param_2 >> 8),local_c[iVar5]);
    *(byte *)this = local_c[iVar5];
    this = (void *)((int)this + 1);
  }
  return CONCAT44(param_2,iVar6);
}


/* END FUNCTION 0x00408c30 */
