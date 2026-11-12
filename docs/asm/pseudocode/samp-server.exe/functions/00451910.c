/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451910
 * Name: FUN_00451910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00451910(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this + 0x54))
              (param_1,param_2[3],*param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,param_12);
    return;
  }
  (**(code **)(*(int *)this + 0x54))
            (param_1,0,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12);
  return;
}


/* END FUNCTION 0x00451910 */
