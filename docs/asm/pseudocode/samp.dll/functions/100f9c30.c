/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9c30
 * Name: __chkstk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */

void __chkstk(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &stack0x00000004;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/* END FUNCTION 0x100f9c30 */
