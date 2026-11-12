/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004af40
 * Name: FUN_1004af40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1004af40(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char local_1;
  
  uVar1 = FUN_1004acc0(&stack0x00000004,&local_1);
  if (local_1 == '\0') {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_1004adc0(uVar1);
  return *puVar2;
}


/* END FUNCTION 0x1004af40 */
