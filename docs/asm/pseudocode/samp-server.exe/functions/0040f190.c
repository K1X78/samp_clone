/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f190
 * Name: FUN_0040f190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040f190(byte *param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (in_EAX == (undefined4 *)0x0) {
    return -1;
  }
  iVar1 = in_EAX[1];
  iVar3 = 0;
  if (0 < iVar1) {
    puVar4 = (undefined4 *)*in_EAX;
    do {
      iVar2 = FUN_00408450((byte *)*puVar4,param_1);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar3 < iVar1);
  }
  return -1;
}


/* END FUNCTION 0x0040f190 */
