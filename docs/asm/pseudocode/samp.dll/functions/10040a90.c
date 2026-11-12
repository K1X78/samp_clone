/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040a90
 * Name: FUN_10040a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10040a90(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = FUN_10040350();
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
    uVar3 = 0x1013;
    cVar1 = FUN_100331d0(&DAT_1013c7cc);
    if (cVar1 != '\0') {
      FUN_1003a8a0(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar2 + 2),CONCAT22(uVar3,*(undefined2 *)(iVar2 + 6)));
    }
    (**(code **)(*param_1 + 0x3c))(iVar2);
    iVar2 = FUN_10040350();
  } while( true );
}


/* END FUNCTION 0x10040a90 */
