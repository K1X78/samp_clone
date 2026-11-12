/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a680
 * Name: FUN_0041a680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0041a680(void *this,undefined4 param_1)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  char *pcVar2;
  int iVar3;
  int unaff_EBX;
  uint local_8;
  int local_4;
  
  if ((*(byte *)(in_EAX + 3) & 4) != 0) {
    iVar3 = *(int *)(in_EAX + 4);
    if (unaff_EBX != 0) {
      iVar3 = -iVar3;
    }
    FUN_00414e70(iVar3,7);
    return;
  }
  bVar1 = FUN_00408b10(this,*(byte **)(in_EAX + 4));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00408a20(&local_8);
    if (unaff_EBX != 0) {
      bVar1 = local_8 != 0;
      local_8 = -local_8;
      local_4 = -(local_4 + (uint)bVar1);
    }
    pcVar2 = (char *)FUN_00415c00();
    FUN_004197c0(param_1,0,8,pcVar2,-0xd);
    return;
  }
  FUN_0041a630(unaff_EBX,param_1);
  return;
}


/* END FUNCTION 0x0041a680 */
