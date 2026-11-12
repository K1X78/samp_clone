/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fad7e
 * Name: exception
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall exception(undefined4 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_1012d0d8;
  sVar1 = _strlen((char *)*param_2);
  pvVar2 = _malloc(sVar1 + 1);
  param_1[1] = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_10103c90(pvVar2,*param_2);
  }
  param_1[2] = 1;
  return param_1;
}


/* END FUNCTION 0x100fad7e */
