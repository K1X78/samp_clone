/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407ce0
 * Name: FUN_00407ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00407ce0(void)

{
  int *in_EAX;
  undefined4 uVar1;
  ulonglong *unaff_ESI;
  ulonglong uVar2;
  
  if ((1 < *in_EAX) && ((code *)in_EAX[0x12] != (code *)0x0)) {
    uVar1 = (*(code *)in_EAX[0x12])();
    return uVar1;
  }
  uVar1 = (*(code *)in_EAX[0x10])();
  uVar2 = FUN_004a0540();
  *unaff_ESI = uVar2;
  return uVar1;
}


/* END FUNCTION 0x00407ce0 */
