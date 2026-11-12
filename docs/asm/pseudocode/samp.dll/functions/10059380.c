/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10059380
 * Name: FUN_10059380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_10059380(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_198;
  undefined4 local_194;
  undefined4 local_190 [100];
  
  puVar3 = param_1;
  puVar5 = local_190;
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  iVar2 = 0;
  if (param_2 == 0) {
    return false;
  }
  uVar4 = 0;
  do {
    FUN_100574b0(local_190[uVar4],param_2,&local_198,&local_194);
    iVar1 = FUN_10058500(local_198,local_194,uVar4);
    iVar2 = iVar2 + iVar1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 99);
  FUN_100574b0(local_190[uVar4],param_2,&local_198,&local_194);
  iVar1 = FUN_10058490(local_194,uVar4);
  return (uint)(local_198 != 0) + iVar1 + iVar2 != 0;
}


/* END FUNCTION 0x10059380 */
