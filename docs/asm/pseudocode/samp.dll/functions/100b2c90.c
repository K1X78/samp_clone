/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2c90
 * Name: FUN_100b2c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b2c90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = *(float *)(param_1 + 0x98b) * (float)_DAT_00c17044 * _DAT_00859520;
  local_4 = (float)_DAT_00c17048 * _DAT_00859524 * *(float *)(param_1 + 0x98f);
  local_8 = (*(float *)(param_1 + 0x98b) + *(float *)(param_1 + 0x972)) *
            (float)_DAT_00c17044 * _DAT_00859520;
  local_c = (*(float *)(param_1 + 0x98f) + *(float *)(param_1 + 0x976)) *
            (float)_DAT_00c17048 * _DAT_00859524;
  if (*(char *)(param_1 + 0x9d1) == '\0') {
    iVar2 = param_1 + 0x96b;
    uVar1 = (&DAT_102a9400)[*(int *)(param_1 + 0x9a3)];
  }
  else {
    iVar2 = param_1 + 0x9d2;
    uVar1 = (&DAT_102a9400)[*(int *)(param_1 + 0x9a3)];
  }
  FUN_100b28a0(uVar1,&local_10,iVar2);
  uVar1 = FUN_100f9324();
  *(undefined4 *)(param_1 + 0x9c1) = uVar1;
  uVar1 = FUN_100f9324();
  *(undefined4 *)(param_1 + 0x9c9) = uVar1;
  uVar1 = FUN_100f9324();
  *(undefined4 *)(param_1 + 0x9c5) = uVar1;
  uVar1 = FUN_100f9324();
  *(undefined4 *)(param_1 + 0x9cd) = uVar1;
  *(undefined1 *)(param_1 + 0x9bf) = 1;
  return;
}


/* END FUNCTION 0x100b2c90 */
