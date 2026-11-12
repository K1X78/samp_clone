/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062720
 * Name: FUN_10062720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10062720(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  
  if (DAT_1016c378 == 0) {
    puVar4 = &LAB_100625d0;
    puVar3 = &DAT_1016bf60;
    for (iVar2 = 0xfa; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = &DAT_1016be98;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar1 = FUN_101111e0("kernel32.dll","CreateFileA");
    DAT_1016c354 = FUN_10110960(uVar1,puVar4);
    puVar4 = &LAB_100620f0;
    uVar1 = FUN_101111e0("kernel32.dll","ReadFile");
    DAT_1016c35c = FUN_10110960(uVar1,puVar4);
    pcVar5 = FUN_10062270;
    uVar1 = FUN_101111e0("kernel32.dll","GetFileSize");
    DAT_1016c34c = FUN_10110960(uVar1,pcVar5);
    pcVar5 = FUN_100622c0;
    uVar1 = FUN_101111e0("kernel32.dll","SetFilePointer");
    DAT_1016c350 = FUN_10110960(uVar1,pcVar5);
    pcVar5 = FUN_10062360;
    uVar1 = FUN_101111e0("kernel32.dll","CloseHandle");
    DAT_1016c360 = FUN_10110960(uVar1,pcVar5);
    pcVar5 = FUN_100623a0;
    uVar1 = FUN_101111e0("kernel32.dll","GetFileType");
    DAT_1016c364 = FUN_10110960(uVar1,pcVar5);
    DAT_1016c378 = 1;
  }
  return;
}


/* END FUNCTION 0x10062720 */
