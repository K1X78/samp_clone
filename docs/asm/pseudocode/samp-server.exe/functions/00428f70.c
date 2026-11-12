/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428f70
 * Name: FUN_00428f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00428f70(int param_1)

{
  undefined1 *puVar1;
  int in_EAX;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_28;
  void *local_24;
  int local_20 [5];
  int local_c;
  ushort local_6;
  short local_4;
  
  puVar1 = *(undefined1 **)(in_EAX + 0x3c);
  FUN_0040c7d0(in_EAX,param_1,local_20);
  if (local_4 == 0) {
    return 0;
  }
  pvVar2 = (void *)FUN_00408f80();
  uVar7 = (uint)(ushort)(*(short *)(puVar1 + 0x18) - 4);
  uVar7 = ((uVar7 - local_6) + -1 + local_c) / uVar7;
  if (uVar7 == 0) {
    return 0;
  }
  do {
    uVar7 = uVar7 - 1;
    local_24 = (void *)0x0;
    local_28 = 0;
    if ((pvVar2 < (void *)0x2) || (pvVar3 = (void *)FUN_0040ca90(), pvVar3 < pvVar2)) {
      uVar7 = FUN_0041d790();
      return uVar7;
    }
    if (uVar7 == 0) {
LAB_00429026:
      iVar5 = FUN_0040ca60();
      if (iVar5 != 0) goto LAB_00429033;
LAB_0042904f:
      uVar4 = FUN_00428cf0(puVar1,pvVar2);
    }
    else {
      uVar4 = FUN_00428310(pvVar2,&local_28,(uint *)&local_24);
      if (uVar4 != 0) {
        return uVar4;
      }
      iVar5 = local_28;
      if (local_28 == 0) goto LAB_00429026;
LAB_00429033:
      iVar6 = thunk_FUN_0040a5f0();
      if (iVar6 == 1) goto LAB_0042904f;
      uVar4 = FUN_0041d790();
    }
    if (iVar5 != 0) {
      FUN_00427080(*(int *)(iVar5 + 0x44));
    }
    if (uVar4 != 0) {
      return uVar4;
    }
    pvVar2 = local_24;
    if (uVar7 == 0) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x00428f70 */
