/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410230
 * Name: FUN_00410230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00410230(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((param_1 != 0) && (in_EAX != (int *)0x0)) {
    iVar1 = *in_EAX;
    if (0 < iVar1) {
      puVar3 = (undefined4 *)(in_EAX[3] + 4);
      iVar4 = 0;
      do {
        iVar2 = FUN_0040f190((byte *)*puVar3);
        if (-1 < iVar2) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 5;
      } while (iVar4 < iVar1);
    }
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x00410230 */
