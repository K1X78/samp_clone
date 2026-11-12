/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a850
 * Name: FUN_0041a850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_0041a850(int param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int extraout_ECX;
  int local_8;
  byte *local_4;
  
  iVar2 = *(int *)(in_EAX * 0x10 + 0xc + *(int *)(param_1 + 8));
  for (puVar1 = *(undefined4 **)(iVar2 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_0040f100(iVar2,puVar1[2]);
    iVar2 = extraout_ECX;
  }
  local_4 = *(byte **)(in_EAX * 0x10 + *(int *)(param_1 + 8));
  local_8 = param_1;
  iVar2 = FUN_0040edd0(param_1,"sqlite_stat1",local_4);
  if (iVar2 == 0) {
    return 1;
  }
  pbVar3 = (byte *)FUN_00418920((undefined **)"SELECT idx, stat FROM %Q.sqlite_stat1");
  if (pbVar3 == (byte *)0x0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    return 7;
  }
  uVar4 = FUN_00441a30(param_1,pbVar3,&LAB_00416140,&local_8,(int *)0x0);
  FUN_00408130(param_1);
  if (uVar4 == 7) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  return uVar4;
}


/* END FUNCTION 0x0041a850 */
