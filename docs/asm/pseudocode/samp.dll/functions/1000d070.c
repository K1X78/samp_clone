/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d070
 * Name: FUN_1000d070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_1000d070(int param_1,char param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_100c;
  undefined1 local_100b;
  undefined1 local_100a;
  undefined1 local_1009;
  undefined1 local_1008;
  undefined4 local_1004;
  undefined1 local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x1000d07a;
  local_100c = 0x5d;
  local_100b = 0;
  local_100a = 0;
  local_1009 = 1;
  local_1008 = 0;
  local_1004 = 0x1000;
  if (param_3 < 0x1001) {
    piVar1 = (int *)(param_1 + 0x1340);
    if (*(int *)(param_1 + 0x1340) + param_5 < 0x1001) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1340) + 0x340 + param_1);
      for (uVar3 = param_5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_4;
        param_4 = param_4 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = param_5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *piVar1 = *piVar1 + param_5;
      if (param_2 == '\x02') {
        iVar2 = FUN_100c50d0(local_1000,&local_1004,param_1 + 0x340,piVar1,&local_100c,5);
        if ((iVar2 != 0) && (iVar2 != 6)) {
          FUN_1000c760(0,0x1389,0);
          *piVar1 = 0;
          return;
        }
        FUN_1000bc30(0,local_1000,param_3);
        iVar2 = *piVar1;
        *piVar1 = 0;
        *(uint *)(param_1 + 0x2065) = *(int *)(param_1 + 0x2065) + param_3;
        *(int *)(param_1 + 0x2069) = *(int *)(param_1 + 0x2069) + iVar2;
        return;
      }
      if (param_2 != '\x01') {
        FUN_1000c760(0,0x138a,0);
      }
    }
  }
  return;
}


/* END FUNCTION 0x1000d070 */
