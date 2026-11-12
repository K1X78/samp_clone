/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4860
 * Name: FUN_100c4860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c4860(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  
  iVar3 = FUN_100c1f60();
  if (iVar3 == 0) {
    return 2;
  }
  iVar3 = in_EAX[0x12];
  iVar1 = in_EAX[0x13];
  if (((in_EAX[0x18] == 0) || (*(int *)((int)in_EAX + 0x3baf1) == 0)) ||
     (in_EAX[0x17] != iVar1 + iVar3)) {
    FUN_100c4210();
    iVar4 = (*(code *)*unaff_EBX)();
    in_EAX[0x18] = iVar4;
    iVar4 = (*(code *)*unaff_EBX)();
    *(int *)((int)in_EAX + 0x3baf1) = iVar4;
    if ((in_EAX[0x18] == 0) || (iVar4 == 0)) {
      FUN_100c4210();
      return 2;
    }
    in_EAX[0x17] = iVar1 + iVar3;
  }
  uVar2 = in_EAX[0x23];
  *(bool *)((int)in_EAX + 0xe3) = 0x1000000 < uVar2;
  if (uVar2 + 0x1000 < param_1) {
    iVar3 = param_1 - uVar2;
  }
  else {
    iVar3 = 0x1000;
  }
  iVar1 = (int)in_EAX + 0xc5;
  iVar3 = FUN_100be2d0(iVar1,uVar2,iVar3,in_EAX[0xb],0x111,param_2);
  if (iVar3 == 0) {
    return 2;
  }
  *in_EAX = iVar1;
  FUN_100bf440(iVar1,in_EAX + 1);
  return 0;
}


/* END FUNCTION 0x100c4860 */
