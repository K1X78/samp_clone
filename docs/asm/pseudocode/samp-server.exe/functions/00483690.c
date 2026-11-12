/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483690
 * Name: FUN_00483690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00483690(void *this,ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  if ((((uVar1 < 2000) && (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0)) && (uVar1 < 2000)) &&
     (*(int *)(iVar2 + 0x3f54 + (uint)uVar1 * 4) != 0)) {
    puVar3 = (ushort *)((int)this + 0xc2);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)puVar3 = *(undefined4 *)param_1;
      param_1 = param_1 + 2;
      puVar3 = puVar3 + 2;
    }
    *puVar3 = *param_1;
    *(char *)(puVar3 + 1) = (char)param_1[1];
    *(undefined4 *)((int)this + 0x2f91) = 1;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00483690 */
