/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ffb08
 * Name: CatchIt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall CatchIt(int param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000018;
  
  if (param_1 != 0) {
    BuildCatchObject(param_2);
  }
  if (in_stack_00000018 == 0) {
    in_stack_00000018 = unaff_ESI;
  }
  _UnwindNestedFrames(in_stack_00000018,param_2);
  ___FrameUnwindToState();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_EDI + 4) + 1;
  iVar1 = CallCatchBlock(param_2);
  if (iVar1 != 0) {
    _JumpToContinuation(iVar1);
  }
  return;
}


/* END FUNCTION 0x100ffb08 */
