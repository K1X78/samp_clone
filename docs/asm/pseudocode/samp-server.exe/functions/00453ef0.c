/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453ef0
 * Name: FUN_00453ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00453ef0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint local_c0 [32];
  uint local_40 [16];
  
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[0] = 1;
  puVar2 = local_c0;
  puVar3 = local_c0 + 0x18;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c0[0x10] = 0;
  local_c0[0x11] = 0;
  local_c0[0x12] = 0;
  local_c0[0x13] = 0;
  local_c0[0x14] = 0;
  local_c0[0x15] = 0;
  local_c0[0x16] = 0;
  local_c0[0x17] = 0;
  puVar2 = local_c0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_c0[8] = 0;
  local_c0[9] = 0;
  local_c0[10] = 0;
  local_c0[0xb] = 0;
  local_c0[0xc] = 0;
  local_c0[0xd] = 0;
  local_c0[0xe] = 0;
  local_c0[0xf] = 0;
  FUN_00452770(local_c0 + 0x10,local_c0,local_40);
  puVar2 = local_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* END FUNCTION 0x00453ef0 */
