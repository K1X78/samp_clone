/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414dd0
 * Name: FUN_00414dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_00414dd0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  int in_EAX;
  undefined3 extraout_var;
  
  iVar2 = *(int *)(in_EAX + 0xc);
  if (*(int *)(in_EAX + 0x10) <= iVar2) {
    bVar3 = FUN_00414d70();
    if (CONCAT31(extraout_var,bVar3) != 0) {
      return 1;
    }
  }
  *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 1;
  puVar1 = (undefined1 *)(*(int *)(in_EAX + 0x14) + iVar2 * 0x14);
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 4) = param_2;
  *(undefined4 *)(puVar1 + 8) = param_3;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  *(undefined1 *)(in_EAX + 0x62) = 0;
  return iVar2;
}


/* END FUNCTION 0x00414dd0 */
