/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093520
 * Name: FUN_10093520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10093520(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  if ((*(int *)(param_1 + 0xc0) <= param_2) &&
     (param_2 < *(int *)(param_1 + 200) + *(int *)(param_1 + 0xc0))) {
    if ((*(int *)(param_1 + 0xc4) <= param_3) &&
       (param_3 < *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xc4))) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xf4);
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xf8);
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined1 *)(param_1 + 0x100) = 1;
      puVar1 = (undefined4 *)FUN_100933d0(local_c,(float)param_2,(float)param_3);
      *(undefined4 *)(param_1 + 0x109) = *puVar1;
      *(undefined4 *)(param_1 + 0x10d) = puVar1[1];
      *(undefined4 *)(param_1 + 0x111) = puVar1[2];
    }
  }
  return;
}


/* END FUNCTION 0x10093520 */
