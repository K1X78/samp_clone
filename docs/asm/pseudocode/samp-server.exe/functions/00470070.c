/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470070
 * Name: FUN_00470070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_00470070(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_2 + 8);
  local_4 = *(undefined4 *)(param_2 + 0x10);
  local_8 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = FUN_00467530(*(void **)(DAT_004fc438 + 0xc),*(int *)(param_2 + 4),&local_c,
                       *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                       *(undefined4 *)(param_2 + 0x1c),120000);
  if (*(int *)(param_2 + 4) == 0x21a) {
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x23a,&local_c,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x23a,&local_c,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x23a,&local_c,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0xffffffff);
  }
  if (*(int *)(param_2 + 4) == 0x219) {
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x239,&local_c,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x239,&local_c,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0xffffffff);
    FUN_00467530(*(void **)(DAT_004fc438 + 0xc),0x239,&local_c,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0xffffffff);
  }
  return uVar1;
}


/* END FUNCTION 0x00470070 */
