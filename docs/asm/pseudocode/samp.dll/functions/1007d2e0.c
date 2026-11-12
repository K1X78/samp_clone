/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d2e0
 * Name: FUN_1007d2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007d2e0(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  FUN_1007cbc0();
  piVar1 = (int *)FUN_1007b2c0();
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  if (param_1 < (uint)piVar1[1]) {
    puVar2 = (undefined4 *)(param_1 * 0x11 + *piVar1);
    local_14 = *puVar2;
    local_10 = puVar2[1];
    local_c = puVar2[2];
    local_8 = puVar2[3];
    local_4 = 0;
    FUN_1007baf0(param_1,&local_14);
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x1007d2e0 */
