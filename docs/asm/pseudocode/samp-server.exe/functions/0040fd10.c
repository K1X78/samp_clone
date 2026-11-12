/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fd10
 * Name: FUN_0040fd10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040fd10(byte *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  iVar4 = 0;
  if (0 < iVar1) {
    puVar3 = *(undefined4 **)(in_EAX + 0x10);
    do {
      iVar2 = FUN_00408450((byte *)*puVar3,param_1);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 6;
    } while (iVar4 < iVar1);
  }
  return -1;
}


/* END FUNCTION 0x0040fd10 */
