/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ff70
 * Name: FUN_0048ff70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048ff70(void)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  char *pcVar4;
  undefined2 unaff_BX;
  in_addr unaff_EBP;
  uint uVar5;
  undefined1 auStack_8 [8];
  
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  sVar3 = (**(code **)(*piVar1 + 0x3c))();
  if (sVar3 != 0) {
    iVar2 = *(int *)(DAT_004fc438 + 8);
    FUN_00491fa0("ID\tName\tPing\tIP");
    uVar5 = 0;
    do {
      if (((ushort)uVar5 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uVar5 & 0xffff) * 4) == 1)) {
        (**(code **)(*piVar1 + 0xe8))(auStack_8,uVar5);
        pcVar4 = inet_ntoa(unaff_EBP);
        (**(code **)(*piVar1 + 0x4c))(unaff_EBP.S_un,unaff_BX,pcVar4);
        FUN_00491fa0("%d\t%s\t%d\t%s");
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 1000);
  }
  return;
}


/* END FUNCTION 0x0048ff70 */
