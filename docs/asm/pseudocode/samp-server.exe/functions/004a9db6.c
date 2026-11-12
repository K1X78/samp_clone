/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9db6
 * Name: ___InternalCxxFrameHandler
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
___InternalCxxFrameHandler
          (PEXCEPTION_RECORD param_1,undefined4 *param_2,void *param_3,undefined4 param_4,
          uint *param_5,int param_6,int *param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((*param_5 & 0x1fffffff) != 0x19930520) {
    _inconsistency();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FindHandler(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}


/* END FUNCTION 0x004a9db6 */
