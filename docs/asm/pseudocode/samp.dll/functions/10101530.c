/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101530
 * Name: __SEH_prolog
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */

void __SEH_prolog(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 auStack_18 [4];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_18 + param_2 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack_18 + param_2 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack_18 + param_2 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack_18 + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


/* END FUNCTION 0x10101530 */
