/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebd80
 * Name: FUN_100ebd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ebd80(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_c [12];
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_100dec30(param_1,5,2);
    }
    FUN_100e4560(param_2,local_c);
    iVar3 = FUN_100e4580(local_c);
    while (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
      iVar3 = FUN_100e4580(local_c);
      puVar1 = *(undefined4 **)(iVar4 + 8);
      while (puVar1 != (undefined4 *)0x0) {
        uVar2 = *puVar1;
        puVar1 = (undefined4 *)puVar1[2];
        iVar4 = (*param_4)(uVar2,param_3);
        if (iVar4 == 1) {
          if (*(int *)(param_1 + 0x6c) == 0) {
            return;
          }
          FUN_100dec70(param_1,5);
          return;
        }
      }
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_100dec70(param_1,5);
    }
  }
  return;
}


/* END FUNCTION 0x100ebd80 */
