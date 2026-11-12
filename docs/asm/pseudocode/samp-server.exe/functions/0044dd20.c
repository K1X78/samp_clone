/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044dd20
 * Name: FUN_0044dd20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044dd20(void *this,int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_0044dc30(this,param_2);
  while( true ) {
    if (param_2 < 1) {
      return;
    }
    uVar4 = param_1[2];
    param_2 = param_2 + -1;
    iVar1 = uVar4 + 1;
    if (*param_1 < iVar1) break;
    uVar5 = *(uint *)this;
    if ((uVar5 & 7) == 0) {
      uVar5 = uVar4 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      bVar3 = *(byte *)(((int)uVar4 >> 3) + param_1[3]);
      param_1[2] = iVar1;
      if ((bVar3 & (byte)(0x80 >> ((byte)uVar5 & 0x1f))) == 0) {
        *(undefined1 *)((*(int *)this >> 3) + *(int *)((int)this + 0xc)) = 0;
      }
      else {
        *(undefined1 *)((*(int *)this >> 3) + *(int *)((int)this + 0xc)) = 0x80;
      }
    }
    else {
      uVar6 = uVar4 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      bVar3 = *(byte *)(((int)uVar4 >> 3) + param_1[3]);
      param_1[2] = iVar1;
      if ((bVar3 & (byte)(0x80 >> ((byte)uVar6 & 0x1f))) != 0) {
        pbVar2 = (byte *)((*(int *)this >> 3) + *(int *)((int)this + 0xc));
        *pbVar2 = *pbVar2 | (byte)(0x80 >> (sbyte)(uVar5 & 7));
      }
    }
    *(int *)this = *(int *)this + 1;
  }
  return;
}


/* END FUNCTION 0x0044dd20 */
