/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044df40
 * Name: FUN_0044df40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044df40(void *this,byte *param_1,int param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (0 < param_2) {
    FUN_0044dc30(this,param_2);
    uVar3 = *(uint *)this & 7;
    do {
      bVar1 = *param_1;
      if ((param_2 < 8) && (param_3 != '\0')) {
        bVar1 = bVar1 << (8U - (char)param_2 & 0x1f);
      }
      if (uVar3 == 0) {
        *(byte *)((*(int *)this >> 3) + *(int *)((int)this + 0xc)) = bVar1;
      }
      else {
        pbVar4 = (byte *)(*(int *)((int)this + 0xc) + (*(int *)this >> 3));
        *pbVar4 = *pbVar4 | bVar1 >> (sbyte)uVar3;
        iVar2 = 8 - uVar3;
        if ((iVar2 < 8) && (iVar2 < param_2)) {
          *(byte *)((*(int *)this >> 3) + 1 + *(int *)((int)this + 0xc)) =
               bVar1 << ((byte)iVar2 & 0x1f);
        }
      }
      if (param_2 < 8) {
        iVar2 = *(int *)this + param_2;
      }
      else {
        iVar2 = *(int *)this + 8;
      }
      param_2 = param_2 + -8;
      param_1 = param_1 + 1;
      *(int *)this = iVar2;
    } while (0 < param_2);
  }
  return;
}


/* END FUNCTION 0x0044df40 */
