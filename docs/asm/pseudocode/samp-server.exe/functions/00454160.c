/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454160
 * Name: FUN_00454160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00454160(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  uint local_60 [24];
  
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  *param_2 = 0xffff;
  local_60[1] = 0;
  local_60[2] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_60[3] = 0;
  param_2[4] = 0;
  local_60[4] = 0;
  param_2[5] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  param_2[6] = 0;
  local_60[8] = 1;
  local_60[0] = 2;
  local_60[7] = 0;
  param_2[7] = 0;
  uVar1 = FUN_004512c0((int)param_2,(int)param_1);
  if ((char)uVar1 != '\0') {
    *param_2 = 3;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  do {
    FUN_00451180(param_2,local_60);
    FUN_00452be0(param_1,param_2,local_60 + 0x10);
    iVar2 = 8;
    bVar5 = true;
    puVar3 = local_60 + 0x10;
    puVar4 = local_60 + 8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *puVar3 == *puVar4;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      return;
    }
  } while( true );
}


/* END FUNCTION 0x00454160 */
