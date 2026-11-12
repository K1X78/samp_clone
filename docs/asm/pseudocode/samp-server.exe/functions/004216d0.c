/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004216d0
 * Name: FUN_004216d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004216d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x1a0); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[3];
    FUN_004215c0(0,puVar1[2],0x26);
    iVar3 = FUN_0040d5c0();
    FUN_004197c0(iVar2 + -1,0,0x5e,*(char **)(puVar1[1] + 4),0);
    FUN_00414e70(0,0x41);
    FUN_00414dd0(0x1c,0,0,iVar2);
    FUN_00414dd0(0x4b,iVar2 + -1,iVar3 + 7,iVar2);
    FUN_0040d660(extraout_ECX,8);
    FUN_00414e70(0,0x3d);
    FUN_00414dd0(0x1c,0,1,iVar2);
    FUN_00414e70(0,1);
    FUN_00414e70(0,0x43);
    FUN_00414e70(0,7);
    FUN_00414e30();
  }
  return;
}


/* END FUNCTION 0x004216d0 */
