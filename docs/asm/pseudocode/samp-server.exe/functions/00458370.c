/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00458370
 * Name: FUN_00458370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00458370(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00457ca0(param_1);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = **(char **)(iVar2 + 0x10);
    if (cVar1 != '\x14') {
      if (*(uint *)(iVar2 + 8) < 6) {
        return iVar2;
      }
      if (cVar1 != '(') {
        return iVar2;
      }
      if ((*(char **)(iVar2 + 0x10))[5] != '\x14') {
        return iVar2;
      }
    }
    uVar3 = FUN_0044eef0((undefined4 *)(iVar2 + 2),&DAT_004cac3c);
    if ((char)uVar3 != '\0') {
      FUN_00451fd0(param_1,*(char **)(iVar2 + 0x10),*(uint *)(iVar2 + 8),*(undefined4 *)(iVar2 + 2),
                   *(undefined2 *)(iVar2 + 6));
    }
    (**(code **)(*param_1 + 0x3c))(iVar2);
    iVar2 = FUN_00457ca0(param_1);
  } while( true );
}


/* END FUNCTION 0x00458370 */
