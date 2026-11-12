/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048e660
 * Name: FUN_0048e660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0048e660(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  undefined4 *unaff_EBX;
  
  iVar4 = FUN_0048bd50();
  if (iVar4 == 0) {
    return 2;
  }
  iVar4 = in_EAX[0x12];
  iVar2 = in_EAX[0x13];
  if (((in_EAX[0x18] == 0) || (in_EAX[0xeebf] == 0)) || (in_EAX[0x17] != iVar2 + iVar4)) {
    FUN_0048e010((int)in_EAX,(int)unaff_EBX);
    iVar5 = (*(code *)*unaff_EBX)();
    in_EAX[0x18] = iVar5;
    iVar5 = (*(code *)*unaff_EBX)();
    in_EAX[0xeebf] = iVar5;
    if ((in_EAX[0x18] == 0) || (iVar5 == 0)) {
      FUN_0048e010((int)in_EAX,(int)unaff_EBX);
      return 2;
    }
    in_EAX[0x17] = iVar2 + iVar4;
  }
  uVar3 = in_EAX[0x23];
  *(bool *)((int)in_EAX + 0xee) = 0x1000000 < uVar3;
  if (uVar3 + 0x1000 < param_1) {
    iVar4 = param_1 - uVar3;
  }
  else {
    iVar4 = 0x1000;
  }
  piVar1 = in_EAX + 0x34;
  iVar4 = FUN_0048aad0((int)piVar1,uVar3,iVar4,in_EAX[0xb],0x111,param_2);
  if (iVar4 == 0) {
    return 2;
  }
  *in_EAX = (int)piVar1;
  FUN_0048b9e0((int)piVar1,in_EAX + 1);
  return 0;
}


/* END FUNCTION 0x0048e660 */
