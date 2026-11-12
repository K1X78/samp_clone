/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046df60
 * Name: FUN_0046df60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046df60(void *this,uint param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  local_8 = 0;
  if (((ushort)param_1 < 1000) &&
     (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (param_1 & 0xffff) * 4) != 0)) {
    iVar2 = FUN_00401710(this,(byte *)"OnPlayerCommandText",(int *)&param_1);
    if (iVar2 == 0) {
      FUN_00403610(this,(int *)&param_2,&local_4,param_2,(undefined4 *)0x0,0);
      FUN_00401c50(this,uVar1);
      FUN_00401c90(this,&local_8,param_1);
      FUN_004031b0((int)this,(int)param_2);
    }
    return local_8;
  }
  return 0;
}


/* END FUNCTION 0x0046df60 */
