/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077420
 * Name: FUN_10077420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10077420(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = _sscanf(param_1,"{%8X-%4X-%4X-%2X%2X-%2X%2X%2X%2X%2X%2X}",param_2,local_28,local_24,
                  local_20,local_1c,local_18,local_14,local_10,local_c,local_8,local_4);
  if (iVar1 != 0xb) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return 0x80004005;
  }
  *(undefined2 *)(param_2 + 1) = local_28[0];
  *(undefined1 *)((int)param_2 + 9) = local_1c[0];
  *(undefined2 *)((int)param_2 + 6) = local_24[0];
  *(undefined1 *)(param_2 + 2) = local_20[0];
  *(undefined1 *)(param_2 + 3) = local_10[0];
  *(undefined1 *)((int)param_2 + 10) = local_18[0];
  *(undefined1 *)((int)param_2 + 0xb) = local_14[0];
  *(undefined1 *)((int)param_2 + 0xf) = local_4[0];
  *(undefined1 *)((int)param_2 + 0xd) = local_c[0];
  *(undefined1 *)((int)param_2 + 0xe) = local_8[0];
  return 0;
}


/* END FUNCTION 0x10077420 */
