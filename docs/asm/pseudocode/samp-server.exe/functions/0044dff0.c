/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044dff0
 * Name: FUN_0044dff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044dff0(void *this,byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((param_2 != 0) && (param_1 != (byte *)0x0)) {
    if ((*(byte *)this & 7) == 0) {
      FUN_0044dc30(this,param_2 * 8);
      pbVar2 = (byte *)((*(int *)this + 7 >> 3) + *(int *)((int)this + 0xc));
      for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)pbVar2 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pbVar2 = pbVar2 + 4;
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pbVar2 = *param_1;
        param_1 = param_1 + 1;
        pbVar2 = pbVar2 + 1;
      }
      *(uint *)this = *(int *)this + param_2 * 8;
      return;
    }
    FUN_0044df40(this,param_1,param_2 * 8,'\x01');
  }
  return;
}


/* END FUNCTION 0x0044dff0 */
