/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004717e0
 * Name: FUN_004717e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_004717e0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = param_2[8];
  if (iVar4 != -1) {
    iVar4 = iVar4 * 1000;
  }
  iVar1 = param_2[1];
  if ((iVar1 != 0x21a) && (iVar1 != 0x219)) {
    iVar2 = *param_2;
    local_8 = param_2[3];
    local_4 = param_2[4];
    local_c = param_2[2];
    uVar3 = FUN_00467530(*(void **)(DAT_004fc438 + 0xc),iVar1,&local_c,param_2[5],param_2[6],
                         param_2[7],iVar4);
    if ((((uVar3 != 0) && (uVar3 != 0xffff)) && (8 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) &&
       (param_2[9] != 0)) {
      iVar4 = FUN_00467470(*(void **)(DAT_004fc438 + 0xc),uVar3);
      FUN_00489a60(iVar4);
    }
    return uVar3;
  }
  FUN_00491fa0("Only create trains with AddStaticVehicle/Ex");
  return 0;
}


/* END FUNCTION 0x004717e0 */
