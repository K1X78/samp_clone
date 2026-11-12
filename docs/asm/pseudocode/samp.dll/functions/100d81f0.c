/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d81f0
 * Name: FUN_100d81f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d81f0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int local_8;
  int local_4;
  
  local_4 = 0;
  uVar3 = FUN_100d8500();
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  for (puVar1 = (undefined4 *)param_1[1]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = FUN_100d6ff0(param_1,uVar3,puVar1);
    if (iVar2 != 0) {
      local_4 = iVar2;
    }
  }
  do {
    iVar2 = FUN_100ee5f0(uVar3,param_1[0x17],&local_8);
    param_1[0x17] = iVar2;
    if (local_8 == 0) break;
    FUN_100d6260(uVar3,param_1,*(undefined4 *)(local_8 + 0x18));
  } while (local_8 != 0);
  iVar2 = local_4;
  *param_2 = param_1[4];
  if (local_4 < 1) {
    FUN_100d6530();
  }
  return iVar2;
}


/* END FUNCTION 0x100d81f0 */
