/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b9d0
 * Name: FUN_0041b9d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041b9d0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int *in_EAX;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0x22);
  if ((bVar1 & 0x10) != 0) {
    uVar2 = FUN_004103b0(*in_EAX);
    param_2 = (int)((ulonglong)uVar2 >> 0x20);
    if (*(int *)(**(int **)((int)uVar2 + 4) + 0x34) == 0) goto LAB_0041ba08;
  }
  if ((((bVar1 & 1) == 0) || ((*(uint *)(*in_EAX + 0xc) & 0x10000) != 0)) ||
     (*(char *)((int)in_EAX + 0x13) != '\0')) {
    if ((param_3 == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
      FUN_00418b00((undefined **)"cannot modify %s because it is a view");
      return 1;
    }
    return 0;
  }
LAB_0041ba08:
  FUN_00418b00((undefined **)"table %s may not be modified");
  return 1;
}


/* END FUNCTION 0x0041b9d0 */
