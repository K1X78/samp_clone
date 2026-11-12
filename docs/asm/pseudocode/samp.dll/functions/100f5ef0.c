/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5ef0
 * Name: FUN_100f5ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f5ef0(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  if ((((in_EAX != 0) && (in_EAX != 0x90314)) && (in_EAX != 0x90313)) && (in_EAX != 0x90312)) {
    uVar1 = FUN_100c8280();
    FUN_100d8ba0(*unaff_ESI,"SSPI error: %s failed: %s",param_1,uVar1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100f5ef0 */
