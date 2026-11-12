/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033bf0
 * Name: FUN_10033bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10033bf0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_100400e0(100,0);
  FUN_10042260(1,param_4,param_6,0);
  if ((*param_2 < '0') || ('2' < *param_2)) {
    param_2 = (char *)FUN_10053480(param_2);
  }
  puVar2 = (undefined1 *)(param_1 + 0x22e);
  iVar1 = 0x20;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + -0x119) = DAT_1013c778;
    *(undefined2 *)(puVar2 + -0x115) = DAT_1013c77c;
    FUN_1001f3b0();
    puVar2 = puVar2 + 0x11a;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_10040010(param_2,param_3,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4) + 7 >> 3);
  return;
}


/* END FUNCTION 0x10033bf0 */
