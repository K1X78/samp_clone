/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0cd0
 * Name: FUN_100d0cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d0cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    piVar3 = (int *)*unaff_EBX;
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      iVar2 = *piVar3;
      if (param_1 != 0) {
        *(undefined4 *)(iVar2 + 0x4acc) = 1;
      }
      FUN_100d58a0(iVar2);
      FUN_100e89e0();
      piVar3 = piVar1;
    }
  }
  return;
}


/* END FUNCTION 0x100d0cd0 */
