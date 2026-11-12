/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10108bf9
 * Name: __handle_qnan2
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __handle_qnan2(undefined4 param_1,double param_2,double param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_10156610 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,param_3,param_2 + param_3,param_4);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_100fdc77();
  *puVar1 = 0x21;
  __ctrlfp();
  return (float10)(param_2 + param_3);
}


/* END FUNCTION 0x10108bf9 */
