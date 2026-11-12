/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ca20
 * Name: FUN_0040ca20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040ca20(undefined4 param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 extraout_EDX;
  int unaff_ESI;
  
  FUN_0040b9b0();
  uVar1 = FUN_0040b9a0();
  *(undefined4 *)(extraout_ECX + 0x44) = extraout_EDX;
  *(undefined4 *)(extraout_ECX + 0x40) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x3c) = param_1;
  *(int *)(extraout_ECX + 0x48) = unaff_ESI;
  *(byte *)(extraout_ECX + 5) = (unaff_ESI != 1) - 1U & 100;
  return extraout_ECX;
}


/* END FUNCTION 0x0040ca20 */
