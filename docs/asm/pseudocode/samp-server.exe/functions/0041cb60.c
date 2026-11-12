/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cb60
 * Name: FUN_0041cb60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041cb60(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int in_EAX;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (pbVar1 = *(byte **)(param_1 + 0x30), pbVar1 != (byte *)0x0)
     ) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x14);
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        FUN_00418b00((undefined **)"no such index: %s");
        *(undefined1 *)(in_EAX + 0x12) = 1;
        return 1;
      }
      iVar3 = FUN_00408450((byte *)*puVar2,pbVar1);
      if (iVar3 == 0) break;
      puVar2 = (undefined4 *)puVar2[8];
    }
    *(undefined4 **)(param_1 + 0x34) = puVar2;
  }
  return 0;
}


/* END FUNCTION 0x0041cb60 */
