/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004080
 * Name: FUN_10004080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10004080(int param_1,int param_2)

{
  if (*(int *)(param_1 + 300) == 0) {
LAB_100040a8:
    if (*(int *)(param_1 + 0x2fe) == 0) goto LAB_100040c0;
  }
  else if (*(int *)(param_1 + 0x2fe) == 0) {
    if (param_2 == 0) {
      FUN_10003b20();
      goto LAB_100040c0;
    }
    goto LAB_100040a8;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x181) = 0;
  }
LAB_100040c0:
  *(int *)(param_1 + 300) = param_2;
  *(undefined1 *)(param_1 + 0x313) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  return;
}


/* END FUNCTION 0x10004080 */
