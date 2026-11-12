/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420d70
 * Name: FUN_00420d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420d70(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = *in_EAX;
  iVar2 = FUN_0041ab60(0x16,"BEGIN",0,0);
  if ((iVar2 == 0) && (iVar2 = FUN_0041c720(), iVar2 != 0)) {
    if ((param_1 != 7) && (iVar2 = 0, 0 < *(int *)(iVar1 + 4))) {
      do {
        FUN_00414e70(iVar2,0x22);
        FUN_0040d720(iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 4));
    }
    FUN_00414e70(0,0x21);
  }
  return;
}


/* END FUNCTION 0x00420d70 */
