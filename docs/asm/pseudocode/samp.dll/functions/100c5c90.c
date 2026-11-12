/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5c90
 * Name: FUN_100c5c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c5c90(void)

{
  char cVar1;
  LPSTR pCVar2;
  int iVar3;
  LPSTR pCVar4;
  undefined4 *puVar5;
  
  pCVar2 = GetCommandLineA();
  puVar5 = &DAT_102abe78;
  for (iVar3 = 0x144; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = 0;
  cVar1 = *pCVar2;
  do {
    if (cVar1 == '\0') {
      return;
    }
    if ((cVar1 != '-') && (pCVar4 = pCVar2, cVar1 != '/')) goto switchD_100c5cdc_caseD_65;
    pCVar4 = pCVar2 + 1;
    switch(pCVar2[1]) {
    case 'c':
      DAT_102abe7c = 1;
      DAT_102abe78 = 0;
      goto switchD_100c5cdc_caseD_65;
    case 'd':
      DAT_102abe78 = 1;
      DAT_102abe7c = 0;
    default:
      goto switchD_100c5cdc_caseD_65;
    case 'h':
      FUN_100c5590(pCVar2 + 2,&DAT_102abf85);
      break;
    case 'l':
      FUN_100c55e0(pCVar2 + 2,&DAT_102ac288);
      break;
    case 'n':
      FUN_100c5590(pCVar2 + 2,&DAT_102ac187);
      break;
    case 'p':
      FUN_100c5590(pCVar2 + 2,&DAT_102ac086);
      break;
    case 'z':
      FUN_100c5590(pCVar2 + 2,&DAT_102abe84);
    }
    pCVar4 = pCVar2 + 2;
switchD_100c5cdc_caseD_65:
    cVar1 = pCVar4[1];
    pCVar2 = pCVar4 + 1;
  } while( true );
}


/* END FUNCTION 0x100c5c90 */
