/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046e2f0
 * Name: FUN_0046e2f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046e2f0(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint local_4;
  
  uVar1 = param_1;
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  local_4 = 0;
  if (((ushort)param_1 < 1000) &&
     (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (param_1 & 0xffff) * 4) != 0)) {
    iVar2 = FUN_00401710(this,(byte *)"OnPlayerInteriorChange",(int *)&param_1);
    if (iVar2 == 0) {
      FUN_00401c50(this,param_3);
      FUN_00401c50(this,param_2);
      FUN_00401c50(this,uVar1);
      FUN_00401c90(this,&local_4,param_1);
    }
    return local_4;
  }
  return 0;
}


/* END FUNCTION 0x0046e2f0 */
