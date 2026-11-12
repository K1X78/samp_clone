/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9a8d
 * Name: CatchIt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
CatchIt(void *this,PEXCEPTION_RECORD param_1,void *param_2,undefined4 param_3,int param_4,
       int param_5,int *param_6)

{
  undefined *UNRECOVERED_JUMPTABLE;
  uint *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (this != (void *)0x0) {
    BuildCatchObject(this,unaff_ESI,(int)param_1,unaff_EBX);
  }
  if (param_6 == (int *)0x0) {
    param_6 = unaff_ESI;
  }
  _UnwindNestedFrames(param_6,param_1);
  ___FrameUnwindToState((int)unaff_ESI,param_3,param_4,*unaff_EDI);
  unaff_ESI[2] = unaff_EDI[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       CallCatchBlock((void *)unaff_EBX[3],param_1,(int)unaff_ESI,param_2,param_4,param_5,0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    _JumpToContinuation(UNRECOVERED_JUMPTABLE);
  }
  return;
}


/* END FUNCTION 0x004a9a8d */
