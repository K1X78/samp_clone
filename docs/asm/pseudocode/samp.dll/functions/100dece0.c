/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dece0
 * Name: FUN_100dece0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100dece0(undefined4 param_1,int param_2)

{
  undefined4 *in_EAX;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_100d8ba0(*in_EAX,"Error while processing content unencoding: %s",*(int *)(param_2 + 0x18));
    return 0x3d;
  }
  FUN_100d8ba0(*in_EAX,
               "Error while processing content unencoding: Unknown failure within decompression software."
              );
  return 0x3d;
}


/* END FUNCTION 0x100dece0 */
