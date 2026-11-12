/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084c30
 * Name: FUN_10084c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10084c30(int param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect((RECT *)(param_1 + 0x3d),pt);
  if (BVar1 == 0) {
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar1 = PtInRect((RECT *)(param_1 + 0x66),pt_00);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x10084c30 */
