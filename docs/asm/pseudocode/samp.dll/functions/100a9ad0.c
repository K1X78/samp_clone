/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9ad0
 * Name: FUN_100a9ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a9ad0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar5 = (int *)(param_1 + 0x2db);
  puVar4 = (undefined1 *)(param_1 + 0x431);
  iVar3 = 0x10;
  do {
    if (((piVar5[-0x31] != 0) && (*piVar5 == 2)) && (piVar5[0x10] == 0)) {
      cVar1 = FUN_100a8870(puVar4[-0x4c],&local_4,&local_8);
      if (cVar1 != '\0') {
        iVar2 = FUN_10070350(piVar5[0x37c],puVar4 + -0x4b,puVar4[-10],local_4,local_8,
                             *(undefined4 *)(puVar4 + -8),*(undefined4 *)(puVar4 + -4),puVar4[-9],
                             *puVar4);
        piVar5[0x39c] = iVar2;
        piVar5[0x10] = 1;
      }
    }
    puVar4 = puVar4 + 0xd7;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* END FUNCTION 0x100a9ad0 */
