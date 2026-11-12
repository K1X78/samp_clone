/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e240
 * Name: FUN_0042e240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0042e240(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  undefined3 extraout_var;
  int unaff_EBX;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(in_EAX + 0x4c) + (*(int *)(in_EAX + 0x48) - unaff_EBX) * 0x28;
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0040cda0();
  }
  if (*(int *)(*(int *)(in_EAX + 0x34) + unaff_EBX * 4) != 0) {
    FUN_0042dc50();
    *(undefined4 *)(*(int *)(in_EAX + 0x34) + unaff_EBX * 4) = 0;
  }
  bVar3 = FUN_00414b80((void *)(iVar4 + 0x58 + param_1 * 8),iVar1);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x14);
    *(undefined4 **)(*(int *)(in_EAX + 0x34) + unaff_EBX * 4) = puVar2;
    puVar5 = puVar2;
    for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar2[1] = param_2;
    puVar2[0xb] = param_1;
    if (param_1 != 0) {
      puVar2[0x13] = *(int *)(iVar1 + 0x14) + 0x58;
    }
    if (param_3 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      puVar5 = (undefined4 *)(iVar1 + 0x58 + param_1 * 8);
      *puVar2 = puVar5;
      FUN_0040cdb0(iVar1,puVar5);
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x0042e240 */
