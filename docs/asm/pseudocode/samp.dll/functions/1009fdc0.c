/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fdc0
 * Name: FUN_1009fdc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_1009fdc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(5);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  *param_1 = puVar1;
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0xb6f99c;
    *puVar1 = 0;
  }
  param_1[1] = puVar1;
  param_1[2] = 0;
  *(undefined4 *)((int)param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0x61) = 0;
  *(undefined4 *)((int)param_1 + 0x65) = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  puVar1 = &DAT_1018e1d8;
  for (iVar2 = 0xd2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)((int)param_1 + 0x6e);
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x55) = 0;
  *(undefined4 *)((int)param_1 + 0x59) = 1;
  *(undefined4 *)((int)param_1 + 0x5d) = 0x5a;
  return param_1;
}


/* END FUNCTION 0x1009fdc0 */
