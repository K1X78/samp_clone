/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0d10
 * Name: FUN_100e0d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uintptr_t FUN_100e0d10(_StartAddress *param_1,void *param_2)

{
  uintptr_t uVar1;
  
  uVar1 = __beginthreadex((void *)0x0,0,param_1,param_2,0,(uint *)0x0);
  if ((uVar1 == 0) || (uVar1 == 0xffffffff)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* END FUNCTION 0x100e0d10 */
