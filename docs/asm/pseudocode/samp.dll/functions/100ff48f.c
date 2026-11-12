/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ff48f
 * Name: AdjustPointer
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall AdjustPointer(int *param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *param_1 + in_EAX;
  if (-1 < param_1[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_1[1] + in_EAX) + param_1[2]) + param_1[1];
  }
  return iVar1;
}


/* END FUNCTION 0x100ff48f */
