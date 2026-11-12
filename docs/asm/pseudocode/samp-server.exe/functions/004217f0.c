/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004217f0
 * Name: FUN_004217f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004217f0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  pvVar2 = *(void **)(param_1 + 0xc);
  for (puVar1 = *(undefined4 **)(param_1 + 0x1a0); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[3];
    iVar4 = FUN_0040ec00();
    FUN_004215c0(0,puVar1[2],0x27);
    FUN_00414e50(0x4a);
    FUN_00414e30();
    FUN_00414dd0(0x1c,0,0,iVar4);
    iVar5 = iVar3 + -1;
    FUN_00414dd0(0x4c,iVar5,0,iVar4);
    FUN_00414e70(0,0x43);
    FUN_0040d680(pvVar2);
    FUN_00414e70(0,0x36);
    FUN_00414e30();
    FUN_0040d680(pvVar2);
    FUN_00414e70(0,0x3d);
    FUN_0040d680(pvVar2);
    FUN_0040d680(pvVar2);
    FUN_00414dd0(0x1e,iVar5,2,iVar4);
    FUN_00414dd0(0x37,0,iVar4,iVar3 + 1);
    FUN_0040d660(extraout_ECX,8);
    FUN_00414e30();
    FUN_0040ec20(extraout_ECX_00,param_1);
  }
  return;
}


/* END FUNCTION 0x004217f0 */
