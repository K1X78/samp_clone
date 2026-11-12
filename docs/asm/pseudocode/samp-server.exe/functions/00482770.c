/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482770
 * Name: FUN_00482770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00482770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = param_3;
    puVar1[1] = param_2;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    *(undefined1 *)(puVar1 + 5) = param_5;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
  }
  return;
}


/* END FUNCTION 0x00482770 */
