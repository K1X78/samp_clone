/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a152e
 * Name: TranslatorGuardHandler
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl TranslatorGuardHandler(PEXCEPTION_RECORD param_1,PVOID param_2,void *param_3)

{
  undefined4 uVar1;
  code *local_8;
  
  if (*(int *)((int)param_2 + 8) == DAT_004ec7b4) {
    if ((param_1->ExceptionFlags & 0x66) == 0) {
      ___InternalCxxFrameHandler
                (param_1,*(undefined4 **)((int)param_2 + 0x10),param_3,0,
                 *(uint **)((int)param_2 + 0xc),*(int *)((int)param_2 + 0x14),
                 *(int **)((int)param_2 + 0x18),'\x01');
      if (*(int *)((int)param_2 + 0x24) == 0) {
        _UnwindNestedFrames(param_2,param_1);
      }
      _CallSETranslator((undefined4 *)0x123,&local_8,0,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x004a15d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*local_8)();
      return uVar1;
    }
    *(undefined4 *)((int)param_2 + 0x24) = 1;
  }
  else {
    param_1->ExceptionFlags = param_1->ExceptionFlags | 8;
  }
  return 1;
}


/* END FUNCTION 0x004a152e */
