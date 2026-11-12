/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004701c0
 * Name: FUN_004701c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_004701c0(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = *param_2;
  iVar2 = param_2[8];
  if (iVar2 != -1) {
    iVar2 = iVar2 * 1000;
  }
  local_c = param_2[2];
  local_8 = param_2[3];
  local_4 = param_2[4];
  uVar1 = FUN_00467530(*(void **)(DAT_004fc438 + 0xc),param_2[1],&local_c,param_2[5],param_2[6],
                       param_2[7],iVar2);
  if ((((uVar1 != 0) && (uVar1 != 0xffff)) && (8 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) &&
     (param_2[9] != 0)) {
    iVar3 = FUN_00467470(*(void **)(DAT_004fc438 + 0xc),uVar1);
    FUN_00489a60(iVar3);
  }
  if (param_2[1] == 0x21a) {
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x23a,&local_c,param_2[5],param_2[6],param_2[7],
                 0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x23a,&local_c,param_2[5],param_2[6],param_2[7],
                 0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x23a,&local_c,param_2[5],param_2[6],param_2[7],
                 0xffffffff);
  }
  if (param_2[1] == 0x219) {
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x239,&local_c,param_2[5],param_2[6],param_2[7],
                 0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x239,&local_c,param_2[5],param_2[6],param_2[7],
                 0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x239,&local_c,param_2[5],param_2[6],param_2[7],
                 0xffffffff);
  }
  return uVar1;
}


/* END FUNCTION 0x004701c0 */
