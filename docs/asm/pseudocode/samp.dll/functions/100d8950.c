/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8950
 * Name: FUN_100d8950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d8950(void *param_1)

{
  int in_EAX;
  undefined4 uVar1;
  size_t unaff_EBX;
  int unaff_ESI;
  
  if (*(code **)(unaff_ESI + 0x1c0) != (code *)0x0) {
    uVar1 = (**(code **)(unaff_ESI + 0x1c0))();
    return uVar1;
  }
  if ((-1 < in_EAX) && (in_EAX < 3)) {
    _fwrite(&DAT_10124f50 + in_EAX * 3,2,1,*(FILE **)(unaff_ESI + 0x148));
    _fwrite(param_1,unaff_EBX,1,*(FILE **)(unaff_ESI + 0x148));
  }
  return 0;
}


/* END FUNCTION 0x100d8950 */
