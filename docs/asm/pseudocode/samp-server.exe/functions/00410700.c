/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410700
 * Name: FUN_00410700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __cdecl FUN_00410700(int *param_1)

{
  undefined4 *in_EAX;
  void *this;
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  uVar1 = 0;
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)in_EAX[7]) {
    uVar3 = FUN_00417170(param_1,(int *)*in_EAX);
    uVar4 = FUN_00417170(param_1,(int *)in_EAX[4]);
    uVar5 = FUN_00417170(param_1,(int *)in_EAX[6]);
    uVar6 = FUN_004170e0(this,param_1,(char *)in_EAX[3]);
    uVar7 = FUN_004170e0((void *)in_EAX[5],param_1,(void *)in_EAX[5]);
    uVar2 = uVar2 | (uint)uVar3 | (uint)uVar4 | (uint)uVar5 | (uint)uVar6 | (uint)uVar7;
    uVar1 = uVar1 | (uint)((ulonglong)uVar3 >> 0x20) | (uint)((ulonglong)uVar4 >> 0x20) |
            (uint)((ulonglong)uVar5 >> 0x20) | (uint)(uVar6 >> 0x20) | (uint)(uVar7 >> 0x20);
  }
  return CONCAT44(uVar1,uVar2);
}


/* END FUNCTION 0x00410700 */
