/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1850
 * Name: FUN_100b1850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong __fastcall FUN_100b1850(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = (*(code *)0x749f70)(param_3,0);
  return CONCAT44(param_3,uVar1);
}


/* END FUNCTION 0x100b1850 */
