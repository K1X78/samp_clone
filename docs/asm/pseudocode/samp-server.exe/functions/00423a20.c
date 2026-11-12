/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423a20
 * Name: FUN_00423a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00423a20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int in_EAX;
  uint uVar5;
  
  iVar1 = *(int *)(in_EAX + 4);
  FUN_0040c2c0();
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x40);
  uVar5 = FUN_00423650(*(int *)(iVar2 + 0x44));
  if (uVar5 == 0) {
    uVar4 = FUN_00408fa0((undefined1 *)(iVar3 + 0x24 + param_1 * 4));
    if (param_1 == 7) {
      *(undefined1 *)(iVar1 + 0x15) = uVar4;
    }
  }
  FUN_0040c340();
  return uVar5;
}


/* END FUNCTION 0x00423a20 */
