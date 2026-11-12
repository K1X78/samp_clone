/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f8559
 * Name: TranslatorGuardHandler
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 TranslatorGuardHandler(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *local_8;
  
  if (*(int *)(param_2 + 8) == DAT_10155bc4) {
    if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
      ___InternalCxxFrameHandler
                (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),1);
      if (*(int *)(param_2 + 0x24) == 0) {
        _UnwindNestedFrames(param_2,param_1);
      }
      _CallSETranslator(0x123,&local_8,0,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x100f8603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*local_8)();
      return uVar1;
    }
    *(undefined4 *)(param_2 + 0x24) = 1;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 1;
}


/* END FUNCTION 0x100f8559 */
