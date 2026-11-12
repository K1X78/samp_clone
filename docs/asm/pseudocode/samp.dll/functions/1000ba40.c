/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ba40
 * Name: FUN_1000ba40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000ba40(int param_1)

{
  char *_Dest;
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100a75f0();
    FUN_100a7980();
    uVar1 = FUN_100c51b0();
    __snprintf((char *)(param_1 + 0x10e),0x104,"%s\\local",uVar1);
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_1000b9c0(&local_1c,0x19,DAT_102aca24 + 0x30);
    _Dest = (char *)(param_1 + 9);
    uVar1 = FUN_100c51b0(&local_1c,*(undefined4 *)(DAT_102aca24 + 0x235));
    __snprintf(_Dest,0x104,"%s\\%s.%d",uVar1);
    iVar2 = FUN_100b5900(_Dest);
    if (iVar2 == 0) {
      CreateDirectoryA(_Dest,(LPSECURITY_ATTRIBUTES)0x0);
    }
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x213) = 2;
  }
  return;
}


/* END FUNCTION 0x1000ba40 */
