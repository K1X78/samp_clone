/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a1e0
 * Name: FUN_1003a1e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1003a1e0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x54))
              (param_2,param_3[3],*param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
    return;
  }
  (**(code **)(*param_1 + 0x54))
            (param_2,0,0,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
             param_13);
  return;
}


/* END FUNCTION 0x1003a1e0 */
