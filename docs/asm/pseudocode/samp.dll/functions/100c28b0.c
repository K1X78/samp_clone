/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c28b0
 * Name: FUN_100c28b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100c28b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(in_EAX * 0x30 + 0x541 + param_1);
  uVar5 = *(undefined4 *)(in_EAX * 0x30 + 0x545 + param_1);
  *(int *)(param_1 + 0x18) = in_EAX;
  do {
    iVar4 = iVar1;
    iVar1 = in_EAX * 0x30 + param_1;
    if (*(int *)(iVar1 + 0x531) != 0) {
      iVar3 = iVar4 * 0x30 + param_1;
      *(undefined4 *)(iVar3 + 0x545) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x531) = 0;
      *(int *)(iVar3 + 0x541) = iVar4 + -1;
      if (*(int *)(iVar1 + 0x535) != 0) {
        *(undefined4 *)(iVar3 + 0x501) = 0;
        *(undefined4 *)(iVar3 + 0x511) = *(undefined4 *)(iVar1 + 0x539);
        *(undefined4 *)(iVar3 + 0x515) = *(undefined4 *)(iVar1 + 0x53d);
      }
    }
    iVar3 = iVar4 * 0x30;
    iVar1 = *(int *)(iVar3 + 0x541 + param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x545 + param_1);
    *(int *)(iVar3 + 0x541 + param_1) = in_EAX;
    *(undefined4 *)(iVar3 + 0x545 + param_1) = uVar5;
    uVar5 = uVar2;
    in_EAX = iVar4;
  } while (iVar4 != 0);
  *param_2 = *(undefined4 *)(param_1 + 0x545);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x541);
  return;
}


/* END FUNCTION 0x100c28b0 */
