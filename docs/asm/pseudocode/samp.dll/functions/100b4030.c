/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4030
 * Name: FUN_100b4030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong FUN_100b4030(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)0x4d3a60)(param_1);
  if (iVar1 != 0) {
    return CONCAT44(*(undefined4 **)(iVar1 + 0x10),**(undefined4 **)(iVar1 + 0x10));
  }
  return (ulonglong)param_2 << 0x20;
}


/* END FUNCTION 0x100b4030 */
