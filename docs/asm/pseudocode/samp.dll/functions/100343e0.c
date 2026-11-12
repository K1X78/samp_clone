/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100343e0
 * Name: thunk_FUN_10038320
 * Status: ok
 * Single JMP forwarder to 0x10038320; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall thunk_FUN_10038320(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_2 < 0x200) {
    *(undefined4 *)((int)param_1 + 0xc01) = 0x200;
    return 0x201;
  }
  if (0x5d4 < param_2) {
    param_2 = 0x5d4;
  }
  *(int *)((int)param_1 + 0xc01) = param_2;
  return 1;
}


/* END FUNCTION 0x100343e0 */
