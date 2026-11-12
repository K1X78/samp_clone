/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3ca0
 * Name: FUN_100b3ca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong __fastcall FUN_100b3ca0(undefined4 param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (((param_3 != (uint *)0x0) && (0x7fffff < *param_3)) && (*param_3 < 0x900001)) {
    uVar1 = (**(code **)(*param_3 + 0x10))();
    return CONCAT44(param_2,uVar1);
  }
  return (ulonglong)param_2 << 0x20;
}


/* END FUNCTION 0x100b3ca0 */
