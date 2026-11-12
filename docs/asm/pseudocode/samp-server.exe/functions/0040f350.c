/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f350
 * Name: FUN_0040f350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040f350(byte *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_EAX + 4);
  iVar4 = 0;
  if (0 < iVar1) {
    puVar3 = *(undefined4 **)(in_EAX + 0x2c);
    do {
      iVar2 = FUN_00408450((byte *)*puVar3,param_1);
      if (iVar2 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


/* END FUNCTION 0x0040f350 */
