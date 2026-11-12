/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044b1e0
 * Name: FUN_0044b1e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044b1e0(void *this,short *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  byte *pbVar6;
  int local_4;
  
  iVar1 = *(int *)this;
  if ((((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0) && ((*(byte *)(in_EAX + 0x22) & 0x10) == 0)) &&
     (*(int *)(in_EAX + 0x1c) == 0)) {
    local_4 = 0;
    iVar2 = FUN_0041c720();
    iVar3 = FUN_0040f840();
    if (iVar3 == 0) {
      uVar5 = extraout_ECX;
      for (iVar3 = *(int *)(in_EAX + 0x24); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),*(char *)(iVar3 + 0x18));
        if (*(char *)(iVar3 + 0x18) != '\0') {
          local_4 = FUN_00414e90(uVar5);
          FUN_00414e70(1,0x6f);
          goto LAB_0044b254;
        }
      }
    }
    else {
LAB_0044b254:
      pbVar6 = (byte *)0x0;
      *(undefined1 *)((int)this + 0x1ba) = 1;
      psVar4 = FUN_0041a330(iVar1,param_1,0);
      FUN_0044ad40(this,psVar4,pbVar6);
      *(undefined1 *)((int)this + 0x1ba) = 0;
      FUN_0040d5c0();
      FUN_00414e70(0,0x6f);
      FUN_00420ee0("foreign key constraint failed",-2);
      if (local_4 != 0) {
        FUN_0040d4e0(iVar2,local_4);
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x0044b1e0 */
