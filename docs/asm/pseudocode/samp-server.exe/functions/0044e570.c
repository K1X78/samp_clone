/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e570
 * Name: FUN_0044e570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e570(void *this,int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      FUN_0044df40(param_3,*(byte **)((int)this + (uint)*(byte *)(uVar3 + param_1) * 8 + 4),
                   (uint)*(ushort *)((int)this + (uint)*(byte *)(uVar3 + param_1) * 8 + 8),'\0');
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  uVar3 = *param_3 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  if (uVar3 != 0) {
    bVar1 = 8 - (char)uVar3;
    uVar3 = 0;
    puVar2 = this;
    while (puVar2 = puVar2 + 4, *puVar2 <= (ushort)bVar1) {
      uVar3 = uVar3 + 1;
      if (0xff < uVar3) {
        return;
      }
    }
    FUN_0044df40(param_3,*(byte **)((int)this + uVar3 * 8 + 4),(uint)bVar1,'\0');
  }
  return;
}


/* END FUNCTION 0x0044e570 */
